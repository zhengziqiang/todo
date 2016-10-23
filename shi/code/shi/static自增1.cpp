/*==============================================================================
    > File Name: static自增1.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年09月02日 星期五 17时07分18秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int fun(){
	static int a=1;
	a++;
	return a;
}
int main(){
	int k;
	for(int i=0;i<5;i++)
		k=fun();
	cout<<k<<endl;
	return 0;
}
