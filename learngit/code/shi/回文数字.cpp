/*==============================================================================
    > File Name: 回文数字.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 17时20分14秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int remove(vector <int> &ans){
	int index=0;
	for(int i=1;i<ans.size();i++){
		if(ans[index]!=ans[i])
			ans[++index]=ans[i];
	}
	return index+1;
}
int fun5(int n,vector <int> &ans){
	if(n>=50)
		return 0;
	for(int a=0;a<10;a++){
		for(int b=0;b<10;b++){
			for(int c=0;c<10;c++){
				if(2*a+2*b+c==n){
					if(a!=0){
						ans.push_back(a*10000+b*1000+c*100+b*10+a);
					}
					if(b!=0){
						ans.push_back(b*10000+a*1000+c*100+a*10+b);
					}
				}
			}
		}
	}
	sort(ans.begin(),ans.end());
	return 0;

}
int abc(int a,int b,int c,vector <int> &ans){
	if(a!=0){

	ans.push_back(a*100000+b*10000+c*1000+c*100+b*10+a);
	ans.push_back(a*100000+c*10000+b*1000+b*100+c*10+a);
	}
	if(b!=0){

	ans.push_back(b*100000+a*10000+c*1000+c*100+a*10+b);
	ans.push_back(b*100000+c*10000+a*1000+a*100+c*10+b);
	}
	if(c!=0){

	ans.push_back(c*100000+b*10000+a*1000+a*100+b*10+c);
	ans.push_back(c*100000+a*10000+b*1000+b*100+a*10+c);
	}
	return 0;
}
int fun6(int n,vector <int> &ans){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				if(2*(i+j+k)==n){
					abc(i,j,k,ans);
				}
			}
		}
	}
	sort(ans.begin(),ans.end());
	return 0;
}
int main(){
	int n;
	cin>>n;
	if(n>=60){
		cout<<"-1"<<endl;
		return 0;
	}
	vector <int> ans5;
	vector <int> ans6;
	fun5(n,ans5);
	fun6(n,ans6);
	int remove_5=remove(ans5);
	int remove_6=remove(ans6);
	for(int i=0;i<remove_5;i++){
		cout<<ans5[i]<<endl;
	}
	for(int i=0;i<remove_6;i++){
		cout<<ans6[i]<<endl;
	}
	return 0;
}
