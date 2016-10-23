/*==============================================================================
    > File Name: 三维指针.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月16日 星期二 15时31分42秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int fun(int *x){
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				cout<<*x<<endl;
				x++;
			}
		}
	}
	return 0;
}
int main(){
	int x[2][3][3];
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				x[i][j][k]=9*i+3*j+k;
			}
		}
	}
	int *p=x[0][0];
	fun(p);
	return 0;
}
