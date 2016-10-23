/*************************************************************************
    > File Name: 指针指向二维数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 08时48分26秒
 ************************************************************************/

#include<iostream>
using namespace std;
int fun(int m,int n,int** a){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			*(*(a+i)+j)=i*m+j;
		}
	}
	return 0;
}
int main(){
	int m=5;
	int n=4;
	int a[m][n];
	fun(5,4,a);
	return 0;
}
