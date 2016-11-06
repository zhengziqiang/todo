/*==============================================================================
    > File Name: two_num_add.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月31日 星期一 21时59分07秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;
vector <int> add_two(vector <int>nums,int target){
	unordered_map<int,int> mapping;
	vector <int> result;
	for(int i=0;i<nums.size();i++){
		mapping[nums[i]]=i;
	}
	for(int i=0;i<nums.size();i++){
		const int gap=target-nums[i];
		if(mapping.find(gap)!=mapping.end()&&mapping[gap]>i){
			result.push_back(i+1);
			result.push_back(mapping[gap]+1);
			break;
		}
	}
	return result;
}
int main(){
	vector <int> vec;
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(9);
	vec.push_back(12);
	vector<int>ans=add_two(vec,7);
	return 0;
}
