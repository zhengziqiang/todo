/*==============================================================================
    > File Name: war_robot.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月27日 星期四 22时00分37秒
 ==========================================================================*/

#include<iostream>
#include<map>
#include<multimap>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int can[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cin>>can[i][j];
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(can[i][j]){
				
			}
		}
	}
}
