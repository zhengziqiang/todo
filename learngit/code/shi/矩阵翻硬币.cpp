/*==============================================================================
    > File Name: 矩阵翻硬币.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月04日 星期五 14时44分45秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int	q(int **p,int x,int y,int n,int m){
	n=n/(x+1);
	m=m/(y+1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int m=i*(x+1)-1;
			int n=j*(y+1)-1;
			p[m][n]=-p[m][n];
		}
	}
	return 0;
}
int main(){
	int n,m;
	cin>>n>>m;
	int **p;
	p=new int* [n];
	for(int i=0;i<n;i++){
		p[i]=new int [m];
		for(int j=0;j<m;j++){
			p[i][j]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			q(p,i,j,n,m);
		}
	}
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(p[i][j]==-1)
				count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
