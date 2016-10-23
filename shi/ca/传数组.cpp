/*************************************************************************
    > File Name: 传数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月10日 星期三 10时26分11秒
 ************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;
int fun(int m,int n,double a[][]){
	cout<<a[0][0]<<endl;
	return 0;
}
int main(){
	double a[2][2];
	fun(2,2,a);
	return 0;
}
