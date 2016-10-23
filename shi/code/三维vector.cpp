/*==============================================================================
    > File Name: 三维vector.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月18日 星期四 12时51分50秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<time.h>
using namespace std;
int main(){
	time_t n1;
	n1=time(NULL);
	int m,n,k;
	cout<<"顺序输入维度"<<endl;
	cin>>m>>n>>k;
	vector <vector <vector <int> > > v(m,vector <vector <int> >(n,vector<int>(k,1)));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int l=0;l<k;l++){
				cout<<v[i][j][l]<<endl;
			}
		}
	}
	time_t n2;
	n2=time(NULL);
	cout<<n2-n1<<endl;
	return 0;
}


//使用vector比三维指针更快
