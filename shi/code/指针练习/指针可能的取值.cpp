/*==============================================================================
    > File Name: 指针可能的取值.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月14日 星期日 19时13分00秒
 ==========================================================================*/

#include<iostream>
#include<string>
using namespace std;
int main(){
	int ival=1024;
	int *p1=0;
	int *p2=&ival;
	int *p3;//危险的操作,不知道这个指针指向什么地址和数字
	p1=p2;
	cout<<*p1<<" "<<*p2<<endl;
	cout<<"*p3="<<*p3<<"  未知数字,错误的初始化"<<endl;//使用指针一定要先定义好所有的变量,然后将所有的指针都指向一个已经初始化好了的值
	string s("hello world");
	string *str=&s;//这里必须使用取址符号,代表取地址
	//string *str=s  error
	cout<<*str<<endl;
	*str="good bye";//改变指针的值,指针指向的内容也会改变
	cout<<s<<endl;
	string s2("this is string 2");
	str=&s2;//指针指向了s2;
	cout<<*str<<endl;//指针指向的内容也会有所改变
	return 0;//指针和引用都可以起到引用它值的作用,但是引用必须初始化,而且必须指向一个值,不能更改
	//指针只能指向地址,而不能指向一个数,只能指向0或者ＮＵＬＬ；
	//指针占用内存空间和存放其值,因此指针的存储地址可存放在指针中.
}
