/*************************************************************************
    > File Name: 三位数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 23时43分39秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int a[2][2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++)a[i][j][k]=1;
		}
	}
	int **p;
	*p=a[1][1];
	return 0;
	for(int i=0;i<2;i++){
		cout<<**p<<endl;
		*p++;
	}
	return 0;
}
