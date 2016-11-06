/*==============================================================================
    > File Name: google_code_3.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月06日 星期日 14时07分11秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int fun1(int t){
	int count=1;
	int num_3=t/3;
	int yu=t%3-1;
	if(yu!=0)
		count+1;
	count+=num_3;
	return count;
}
int fun(int t,int d){
	int count=0;
	if(t<d)
		return 0;
	int num_buck=t/d;
	int yu=t%d;
	int num_two=yu/2;
	int yu_two=yu%2;
	int tmp;
	if(yu_two!=0){
		tmp=num_two+1;
	}
	else{
		tmp=num_two;
	}
	if(num_buck<=tmp){
		return 0;
	}
	if(yu_two!=0)
		count+=1;
	count+=num_two;
	return count;
}
int main(){
	int T;
	cin>>T;
	int t[T];
	int d[T];
	vector <int> ans;
	for(int i=0;i<T;i++){
		cin>>t[i]>>d[i];
	}
	for(int i=0;i<T;i++){
		if(t[i]<d[i]){
			ans.push_back(0);
		}
		else if(t[i]==d[i]){
			ans.push_back(1);
		}
		else{
			int num_priders=t[i]/d[i];
			int count=0;
			for(int j=1;j<=num_priders;j++){
				int tmp=j*d[i];
				if(tmp>=2){
				count+=fun(t[i],tmp);
				}
				else{
					count+=fun1(t[i]);
				}
			}
			ans.push_back(count);
		}
	}
	for(int i=0;i<T;i++){
		cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
	}
	return 0;
}
