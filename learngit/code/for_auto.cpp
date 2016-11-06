/*==============================================================================
    > File Name: for_auto.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月31日 星期一 23时38分18秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		a[i]=i;
	}
	for(auto  y:a)
		cout<<y<<endl;
//这是因为编译器的问题，才使得我的程序通不过，要使用g++11编译器才能通过这一程序
	return 0;
}
