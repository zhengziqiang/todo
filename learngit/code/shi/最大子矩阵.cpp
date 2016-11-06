/*==============================================================================
    > File Name: 最大子矩阵.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 19时03分24秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int max_sub(vector <int> sub,int n){
	int result=-999;
	int f=0;
	for(int i=0;i<n;i++){
		f=max(f+sub[i],sub[i]);
		result=max(result,f);
	}
	return result;
}
int main(){
	int n,m;
	cin>>n>>m;
	vector <vector <int> > mat(n,vector<int>(m,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	vector <int> hang;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=0;j<m;j++){
			sum+=mat[i][j];
		}
		hang.push_back(sum);
	}
	vector <int> lie;
	for(int i=0;i<m;i++){
		sum=0;
		for(int j=0;j<n;j++){
			sum+=mat[j][i];
		}
		lie.push_back(sum);
	}
	int hang_max=max_sub(hang,n);
	int lie_max=max_sub(lie,m);
	cout<<max(hang_max,lie_max)<<endl;
	return 0;
}
