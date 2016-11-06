/*==============================================================================
    > File Name: 动规求最大连续子序列.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 10时17分25秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int max_sub(int a[],int n){
	int result=-9999;
	int f=0;
	for(int i=0;i<n;i++){
		f=max(f+a[i],a[i]);
		result=max(result,f);
	}
	return result;
}
int main(){
	int a[4]={
		1,-2,4,-5
	};
	cout<<max_sub(a,4)<<endl;
	return 0;
}
