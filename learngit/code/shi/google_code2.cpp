/*==============================================================================
    > File Name: google_code2.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月06日 星期日 13时44分14秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool fun(int j,int k,int m,vector <int> & ans){
	int tmp=1;
	for(int i=1;i<=m;i++){
		tmp+=pow(j,i);
		if(tmp==m){
			ans.push_back(j);
			return true;
		}
	}
	return false;
}
int main(){
	int T;
	cin>>T;
	vector <int> ans;
	int m;
	for(int i=0;i<T;i++){
		cin>>m;
		for(int j=2;j<m;j++){
			int k=1;
			while(pow(j,k)<=m)
				k++;
			if(fun(j,k,m,ans))
				break;
		}
	}
	for(int i=0;i<T;i++){
		cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
	}
	return 0;
}
