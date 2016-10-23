/*==============================================================================
    > File Name: 构造虚函数.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月22日 星期一 20时52分23秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class A{
	public:
		virtual void fun(){
			cout<<"A::fun()"<<'\t';
		}
		A(){
			fun();
		}
};
class B:public A{
	public:
	B(){
		fun();
	}
	void fun(){
		cout<<"B::fun()"<<'\t';
	}
	void g(){
		fun();
	}
};
class C:public B{
	public:
		C(){
			fun();
		}
		void fun(){
			cout<<"C::fun()"<<endl;
		}
};
int main(){
	C c;//先执行A类的构造函数,再执行B类的构造函数,最后执行c类的构造函数
	c.g();//改写了虚函数
	return 0;
}
