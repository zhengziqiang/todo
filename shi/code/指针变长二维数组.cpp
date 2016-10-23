/*==============================================================================
    > File Name: 指针变长二维数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月18日 星期四 11时01分20秒
 ==========================================================================*/

#include<iostream>
#include<time.h>
using namespace std;
void fun(int *data,int **weight,int m,int n){
	for(int i=0;i<m;++i)
		for(int j=0;j<n;++j)
			cout<<data[j]*weight[i][j]<<endl;
}
int main(){
	int **p;
	p=new int*[1500];
	int a=1;
	for(int i=0;i<1500;i++)
		p[i]=new int[500];
	for(int i=0;i<1500;i++){
		for(int j=0;j<500;j++){
			p[i][j]=a;
			a++;
		}
	}
	int **data;
	data=new int*[2];
	for(int i=0;i<2;i++){
		data[i]=new int[500];
		for(int j=0;j<500;j++){
			data[i][j]=2;
		}
	}
	int *ptr=data[1];
	time_t t1;
	t1=time(NULL);
	fun(ptr,p,1500,500);
	time_t t2=time(NULL);
	cout<<t2-t1<<endl;
	for(int i=0;i<1500;i++)
		delete [] p[i];
	delete []p;
	p=NULL;
	for(int i=0;i<2;i++){
		delete []data[i];
	}
	delete []data;
	data=NULL;
	return 0;
}
//这个函数主要是为了进行一系列的初始化和调用工作,是为了将数组和new,delete的操作,以及fun函数中的调用
