/*************************************************************************
    > File Name: 二维数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 19时37分06秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			a[i][j]=3*i+j;
		}
	}
	int *p;
	p=a[1];//指向a[3][0]的地址,然后地址逐次增加
	for(int i=0;i<3;i++){
		p++;
		cout<<*p<<endl;
	}

	return 0;
}
