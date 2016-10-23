/*==============================================================================
    > File Name: 虚函数练习.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月22日 星期一 21时53分24秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class layer{
	public:
		virtual void print()=0;
};
class point:public layer{
	public:
	void print(){
		cout<<"hello"<<endl;
	}
};
class inlayer:public layer{
	public:
		void print(){
			cout<<"world"<<endl;
		}
};
int main(){
	point p1;
	p1.print();
	inlayer i1;
	i1.print();
}
