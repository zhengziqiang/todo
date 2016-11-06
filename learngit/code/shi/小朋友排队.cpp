/*==============================================================================
    > File Name: 小朋友排队.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 17时05分54秒
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
int change(int a[],int key[],vector <int> & change_number){

}
int main(){
	int n;
	cin>>n;
	int height[n];
	int key[n];
	for(int i=0;i<n;i++){
		cin>>height[i];
		key[i]=i;
	}
	fun(height,key);

	vector <int> change_number(n,0);
	
}
