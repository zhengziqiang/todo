/*==============================================================================
    > File Name: 操作符重载.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月27日 星期六 21时51分50秒
 ==========================================================================*/

#include<iostream>
#include"integer.h"
using namespace std;
void Integer::display()const{
	cout<<n<<endl;
}
Integer &Integer::operator++(){
	++n;
	return *this;
}
Integer Integer::operator++(int m){
	Integer tmp(n);
	n++;
	return tmp;
}
int main(){
	Integer n(100);
	n.display();
	Integer n1=++n;
	n1.display();
	n.display();
	Integer n2=n++;
	n2.display();
	return 0;
}
