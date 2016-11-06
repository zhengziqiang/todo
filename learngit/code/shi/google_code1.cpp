/*==============================================================================
    > File Name: google_code1.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月06日 星期日 13时11分05秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int T;
	cin>>T;
	string str;
	int m,n;
	vector <int> result;
	for(int i=0;i<T;i++){
		cin>>str;
		cin>>m>>n;
		m-=1;
		n-=1;
		int str_leng=str.length();
		int c1=m/str_leng;
		int c2=n/str_leng;
		int yu1=m%str_leng;
		int yu2=n%str_leng;
		int count=0;
		for(int i=0;str[i]!='\0';i++){
			if(str[i]=='B')
				count++;
		}
		int ans=0;
		ans+=(c2-c1-1)*count;
		for(int i=yu1;i<str_leng;i++){
			if(str[i]=='B')
				ans+=1;
		}
		
		
			for(int i=0;i<=yu2;i++){
				if(str[i]=='B'){
					ans+=1;
				}
			}
		
		result.push_back(ans);
	}
	for(int i=0;i<T;i++){
		cout<<"Case #"<<i+1<<": "<<result[i]<<endl;
	}
	return 0;

}
