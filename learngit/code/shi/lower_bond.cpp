/*==============================================================================
    > File Name: lower_bond.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月03日 星期四 18时36分20秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	vector <int> vec;
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(6);
	vec.push_back(8);
	vec.push_back(11);
	int m=vec.size();
	int start;
	int a[5]={
		1,4,5,8,19
	};
	cout<<lower_bound(a,a+5,7)<<endl;
	return 0;
}
