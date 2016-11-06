/*==============================================================================
    > File Name: remove_double_item.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月31日 星期一 19时04分01秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int fun(int a[],int n){
	int i=0;
	int j=0;
	for(i=i;i<n;i++){
		if(a[i]!=a[j]){
			a[++j]=a[i];
		}
	}
	return j+1;
}
int main(){
	int a[6]={
		1,2,2,3,4,5
	};
	cout<<fun(a,6)<<endl;
	return 0;
}
