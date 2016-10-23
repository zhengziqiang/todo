/*==============================================================================
    > File Name: 指针三维数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月13日 星期六 08时56分39秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int main(){
	int a[2][2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				cin>>a[i][j][k];
				cout<<a[i][j][k]<<endl;
			}
		}
	}


	return 0;
}
