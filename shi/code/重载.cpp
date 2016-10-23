/*==============================================================================
    > File Name: 重载.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月19日 星期五 20时53分49秒
 ==========================================================================*/


#include<iostream>
#include<string>
using namespace std;
class Complex{
	float real,image;
	public:
		Complex(float r=0,float i=0){
			real=r;image=i;
		}
		float Getr(){
			return real;
		}
		float Geti(){
			return image;
		}
		void show(){
			cout<<real<<"+"<<image<<"i"<<endl;
		}
		Complex operator+(Complex &c){
			Complex t;
			t.real=real+c.real;
			t.image=image+c.image;
			return t;
		}
		Complex & operator+=(Complex &c){//第一个&是取自己本身的意思，第二个就是取值的意思。
			real+=c.real;
			image+=c.image;
			return *this;
		}
		Complex operator+(float f){
			Complex t;
			t.real=real+f;
			t.image=image;
			return t;
		}
};
int main(){
	Complex c1(1,2),c2,c3(3,2);
	Complex c,c4(2,3);
	c2=c1;c2.show();
	c=c1+c3;c.show();
	c=c4+4;c.show();
	c+=c1;c.show();
	c4.show();//c4+=c1+c2+c3不可用，有可能是重载之后旁边只能出现一个参数。
	return 0;
}
