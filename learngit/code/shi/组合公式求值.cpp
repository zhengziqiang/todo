/*==============================================================================
    > File Name: 组合公式求值.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月04日 星期五 16时20分20秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int c_n_m_fun(int n,int m){
	if(m>(n/2))
		m=n-m;
	long int cn=1;
	for(int i=0;i<m;i++){
		cn*=n;
		n--;
	}
	long int cm=1;
	for(int i=2;i<=m;i++){
		cm*=2;
	}
	long int ans=cn/cm;
	return ans;
}
int main(){
	int n,m;
	cin>>n>>m;
	long int c_n_m=c_n_m_fun(n,m);
	long int ans=0;
	vector <int> n_2;
	for(int i=0;i<n;i++){
		long int tmp;
		tmp=c_n_m_fun(n,i+1)*pow(i+1,3);
		ans+=tmp;
	}
	ans*=c_n_m;
	ans%=987654321;
	cout<<ans<<endl;
	return 0;
}
