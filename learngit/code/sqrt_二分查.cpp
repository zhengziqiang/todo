/*==============================================================================
    > File Name: sqrt_二分查.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 18时49分57秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int mysqrt(int x){
	int left=1;
	int right=x/2;
	int last_mid;
	if(x<2)
		return x;
	while(left<=right){
		const int mid =left+(right-left)/2;
		if(x/mid>mid){
			left=mid+1;
			last_mid=mid;
		}
		else if(x/mid<x){
			right=mid-1;
		}
		else{
			return mid;
		}
	}
	return last_mid;
}
int main(){
	int m;
	cin>>m;
	cout<<mysqrt(m)<<endl;
	return 0;
}
