/*==============================================================================
    > File Name: 重载实例.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月27日 星期六 21时20分50秒
 ==========================================================================*/

#include<iostream>
#include "complex.h"
using namespace std;
Complex &Complex::add(const Complex &other){
	real+=other.real;
	image+=other.image;
	return *this;//返回自身
}
void Complex::display() const{
	cout<<real<<"+"<<image<<"i"<<endl;
}
Complex Complex::operator+(const Complex &other){//代表返回值是Complex类型的
	int r=real+other.real;
	int i=image+other.image;
	return Complex(r,i);
}
Complex operator+(const Complex &c1,const Complex &c2){//这应该是友元函数
	int r=c1.real+c2.real;
	int i=c1.image+c2.image;
	return Complex(r,i);
}
Complex::~Complex(){

}//每个都要去实现,即使里面没有函数块
int main(){
	Complex c1(4,5);
	Complex c2(6,7);
	c1.add(c2);
	c1.display();
	Complex c3=c1+c2;
	c3.display();
	return 0;
}
