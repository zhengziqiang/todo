/*==============================================================================
    > File Name: for返回值.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月19日 星期五 16时43分49秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int fun(int m){
	int a[m];
	for(int i=0;i<m;i++)
		a[i]=i;
	for(int i=0;i<m;i++)
		return a[i];
}
int main(){
	int a=fun(3);
	cout<<a<<endl;
	return 0;
}
