/*==============================================================================
    > File Name: 三维数组加指针.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月15日 星期一 20时40分46秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int main(){
	int a[3][3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				a[i][j][k]=3;
			}
		}
	}
	int *ptr=a[1][0];
	for (int i=0;i<9;i++){
		*ptr=6;
		ptr++;
	}
	ptr=a[2][0];
	for (int i=0;i<9;i++){
		*ptr=4;
		ptr++;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				cout<<a[i][j][k]<<endl;
			}
		}
	}
	return 0;
}
