/*************************************************************************
    > File Name: 指针的指针.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月12日 星期五 08时44分54秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int **p;
	int a=5;
	int *b;
	cout<<"a的地址是"<<&a<<endl;
	*p=&b;
	cout<<"b="<<**p<<endl;
	return 0;
}
