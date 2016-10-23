/*************************************************************************
    > File Name: 指针.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 23时23分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
int fun(int *a,int m,int n){//这样就可以进行传址操作,就可以进行编写fun函数
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			*a=i*3+j;
			a++;
		}
	}
	return 0;
}
int main(){
	int a[2][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++)a[i][j]=1;
	}
	fun((int *)a,2,3);//这样指针和二维数组的引用和指向就有了联系
	int *p;
	p=a[0];
	for(int i=0;i<6;i++){
		cout<<*p<<endl;
		p++;
	}//指针指向地址,然后地址增加
	cout<<"查看指针位置"<<endl;
	cout<<*p<<endl;//为什么这里的地址没有改变啊?
	p=a[0];
	cout<<*p<<endl;
	p++;
	cout<<*p<<endl;
	return 0;
}
