/*************************************************************************
    > File Name: 指针数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月07日 星期日 09时32分34秒
 ************************************************************************/

#include<iostream>
using namespace std;
int fun(int *a,int m){
	for(int i=0;i<m;i++){
		*(a+i)=i+2;
	}
	return 0;
}
int main(){
	int m=5;
	int b[5]={
		0,0,0,0,0
	};
	fun(b,5);
	for(int i=0;i<5;i++)cout<<b[i]<<endl;
	return 0;

}
