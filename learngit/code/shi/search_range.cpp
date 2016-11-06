/*==============================================================================
    > File Name: search_range.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月04日 星期五 13时10分54秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> search(vector <int> num,int target){
	int l=distance(num.begin(),lower_bound(num.begin(),num.end(),target));
	int u=distance(num.begin(),prev(upper_bound(num.begin(),num.end(),target)));
	if(num[l]!=target){
		return vector <int> {
			-1,-1
		};

	}
	else
		return vector <int> {
			l,u
		};

}
int main(){
	vector <int> vec;

	vec.push_back(4);
	vec.push_back(6);
	vec.push_back(7);
	vec.push_back(10);
	vec.push_back(17);
	vec.push_back(19);
	vector <int> result;
	result=search(vec,15);
	return 0;
}
