/*==============================================================================
    > File Name: jump_game_贪心.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 20时01分07秒
 ==========================================================================*/

#include<iostream>
#include<vector>

using namespace std;
bool canjump(vector <int> num){
	int reach=1;
	for(int i=0;i<reach&&reach<num.size();i++){
		reach=max(reach,i+1+num[i]);

	}
	return reach>=num.size();
}
int main(){
	vector <int> vec;
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(4);
	cout<<canjump(vec)<<endl;
	return 0;
}
