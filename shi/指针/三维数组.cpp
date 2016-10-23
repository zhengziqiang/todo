/*************************************************************************
    > File Name: 三维数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月12日 星期五 11时31分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){

int  a[2][2][2];
	a[0][0][0]=1;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++)
				{
					a[i][j][k]=a[i][j][k]+1;
				}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++)
				{
					cout<<a[i][j][k]<<endl;
				}
		}
	}

	return 0;
}
