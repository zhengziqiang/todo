/*==============================================================================
    > File Name: 选取整数对.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 16时12分55秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<map>
#include<stack>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector <int> a(n,0);
	vector <int> b(n,0);
	vector <int> a_b(n,0);
	stack <int> ans;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		a_b[i]=a[i]+b[i];
	}
	for(int i=0;
	int result=0;
	for(int i=0;i<n;i++){
		if(a[i]>=0&&b[i]>=0)
			result+=a_b[i];
		if(a[]
		
		
	}
}
