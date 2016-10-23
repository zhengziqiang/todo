/*==============================================================================
    > File Name: 构造函数继承.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月22日 星期一 21时01分02秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"A"<<endl;
		}
};
class B:public A{
	public:
		B(){
			cout<<"B"<<endl;
		}
};
class C:public B{
	public:
		C(){
			cout<<"C"<<endl;
		}
};
int main(){
	C c;
	return 0;
}
//构造函数继承的时候会将所有的构造函数都实现,只要是中间用到的所传递到的.
