/*==============================================================================
    > File Name: 指针传数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月25日 星期四 10时50分38秒
 ==========================================================================*/

#include<iostream>
using namespace std;
void fun(int *data,int m){
	for(int i=0;i<m;i++){
		*data=2;
		data++;
	}
}
int main(){
	int a[3][4];
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			a[i][j]=3;
	int *p=a[2];
	fun(p,4);
	for(int i=0;i<4;i++)
		cout<<a[2][i]<<endl;
	return 0;
}
