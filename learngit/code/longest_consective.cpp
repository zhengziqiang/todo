/*==============================================================================
    > File Name: longest_consective.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月31日 星期一 21时42分23秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int fun(vector <int> num){
	unordered_map <int,bool> used;
	for(auto i:num) used[i]=false;
	int longest=0;
	for(auto i:num){
		if(used[i])
			continue;
		int length=1;
		used[i]=true;
		for(int j=i+1;used.find(j)!=used.end();j++){
			used[j]=true;
			++length;
		}
		for(int j=i-1;used.find(j)!=used.end();j--){
			used[j]=true;
			++length;
		}
		longest=max(longest,length);
	}
	return longest;
}
int main(){
	vector <int> vec;
	vec.push_back(1);
	vec.push_back(4);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(2);
	vec.push_back(9);
	vec.push_back(10);
	vec.push_back(6);
	vec.push_back(11);
	vec.push_back(12);
	cout<<fun(vec)<<endl;
	return 0;
}
