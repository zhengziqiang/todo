/*==============================================================================
    > File Name: 变成三维数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月18日 星期四 11时21分47秒
 ==========================================================================*/

#include<iostream>
#include<time.h>
using namespace std;
int main(){
	time_t n1;
	n1=time(NULL);
	int ***p;
	int m,n,k;
	cout<<"顺序输入各个维度大小"<<endl;
	cin>>m>>n>>k;
	p=new int**[m];
	for(int i=0;i<m;i++){
		p[i]=new int*[n];
		for(int j=0;j<n;j++){
			p[i][j]=new int[k];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<k;l++){
				p[i][j][l]=1;
				cout<<p[i][j][l]<<endl;
			}
		}
	}
	time_t n2;
	n2=time(NULL);
	cout<<n2-n1<<endl;
	return 0;
}
