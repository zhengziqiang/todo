/*==============================================================================
    > File Name: 矩阵相乘.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 15时59分17秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
	int am,an;
	cin>>am>>an;
	int **p;
	p=new int*[am];
	for(int i=0;i<am;i++){
		p[i]=new int [an];
		for(int j=0;j<an;j++){
			cin>>p[i][j];
		}
	}
	int bm,bn;
	cin>>bm>>bn;
	int **pn;
	pn=new int* [bm];
	for(int i=0;i<bm;i++){
		pn[i]=new int [bn];
		for(int j=0;j<bn;j++){
			cin>>pn[i][j];
		}
	}
	int sum;
	vector <vector <int> > ans(am,vector <int>(bn,0));
	for(int i=0;i<am;i++){
		for(int j=0;j<bn;j++){
			sum=0;
			for(int k=0;k<an;k++){
				sum+=p[i][k]*pn[k][j];
			}
			ans[i][j]=sum;
		}
	}
	for(int i=0;i<am;i++){
		for(int j=0;j<bn;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
