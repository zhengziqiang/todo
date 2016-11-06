/*==============================================================================
    > File Name: char_to_int.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月03日 星期四 18时07分19秒
 ==========================================================================*/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main(){
	int i;
	cin>>i;
	char s[5];
	itoa(i,s,10);
	for(int i=0;i<5;i++){
		cout<<s[i];
	}
	return 0;
}
