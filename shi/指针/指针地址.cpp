/*************************************************************************
    > File Name: 指针地址.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 23时35分21秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int *p;
	int a[5];
	for(int i=0;i<5;i++){
		a[i]=i;
	}
	p=a;
	for(int i=0;i<5;i++){
		cout<<*p<<endl;
		p++;//指针越界,所以指向了一个我没有设定的值上去
	}
	cout<<&p<<endl;
	cout<<*p<<endl;//这里显示的是32675
	return 0;
}
