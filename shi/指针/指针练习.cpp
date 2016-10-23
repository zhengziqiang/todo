/*==============================================================================
    > File Name: 指针练习.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月12日 星期五 21时29分57秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int main(){
	int a[2][2][2];
	int *p;
	a[0][0][0]=1;
	p=a[0][0];
	cout<<*p<<endl;
	a[1][0][0]=2;
	int b[3][2];
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			b[i][j]=i*3+j;
		}
	}
	int *ptr=b[0];
	cout<<*ptr<<endl;
	ptr++;
	cout<<*ptr<<endl;//在整个数组的基础上进行加减,不是在行的基础上进行的操作.
	return 0;
}
