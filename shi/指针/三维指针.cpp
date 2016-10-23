/*************************************************************************
    > File Name: 三维指针.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 22时38分45秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int *p;
	int  a[2][2][2];
	a[0][0][0]=1;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++)
				{
					a[i][j][k]+=1;
					cout<<a[i][j][k]<<endl;
				}
		}
	}
	p=a[1][1];
	for(int i=0;i<2;i++){
		cout<<*p<<endl;
		p++;
	}
	cout<<"yes"<<endl;
	int **ptr;//二维指针,指向一个一维指针
	*ptr=p;//指针内容是一个一维指针
	ptr++;
	cout<<*p<<endl;
	return 0;
}
