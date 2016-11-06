/*==============================================================================
    > File Name: 两个数列排序.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 16时53分48秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int fun(int a[],int b[],int n){
	int tmp1,tmp2,k;
	for(int i=0;i<n-1;i++){
		k=i;
		for(int j=i+1;j<n;j++){
			if(a[k]>a[j])
				k=j;
		}
		tmp1=a[i];
		a[i]=a[k];
		a[k]=tmp1;
		tmp2=b[i];
		b[i]=b[k];
		b[k]=tmp2;
	}
	return 0;
}
int main(){
	int a[5]={
		1,4,2,7,5
	};
	int b[5];
	for(int i=0;i<5;i++)
		b[i]=i;
	fun(a,b,5);
	for(int i=0;i<5;i++){
		cout<<a[i]<<" "<<b[i]<<endl;
	}
	return 0;
}
