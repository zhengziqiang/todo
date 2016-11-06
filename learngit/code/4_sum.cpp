/*==============================================================================
    > File Name: 4_sum.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 22时50分51秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
vector <vector <int > > four(vector <int> num,int target){
	vector <vector <int> > result;
	if(num.size()<4)
		return result;
	sort(num.begin(),num.end());
	for (auto a=num.begin();a<prev(last,3);++a){
		for(auto b=next(a)
	}
}
