/*==============================================================================
    > File Name: 虚函数.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月25日 星期四 19时02分29秒
 ==========================================================================*/
//纯虚函数必须被重写

#include<iostream>
using namespace std;
class layer{
	public:
		int x;
		virtual void print(){
		cout<<"layer"<<endl;
		}
		virtual void write()=0;
		virtual void cal(int m,int n){

		}
};
class point:public layer{
	public:
		void print(){
			cout<<"point"<<endl;
		}
		void write(){
			cout<<"write point"<<endl;
		}
		void cal(int m,int n){
			m*=m;
			n*=n;
			cout<<"乘"<<endl;
			cout<<"m="<<m<<" "<<"n="<<n<<endl;
		}
};
class line:public layer{
	public:
		void print(){
			cout<<"line"<<endl;
		}
		void write(){
			cout<<"write line"<<endl;
		}
		void cal(int m,int n){
			m+=m;
			n+=n;
			cout<<"加"<<endl;
			cout<<"m="<<m<<" "<<"n="<<n<<endl;
		}
};
int main(){
	line l1;
	point p1;
	p1.print();
	l1.print();
	p1.cal(3,4);
	l1.cal(3,4);
	return 0;
}
