/*==============================================================================
    > File Name: s_sum.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月31日 星期一 23时16分22秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
vector <vector <int> > fun(vector <int> num){
	vector <vector <int> > result;
	if(num.size()<3){
		return result;
	}
	sort(num.begin(),num.end());
	const int target=0;
	auto last=num.end();
	for (auto i=num.begin();i<last-2;++i){
		auto j=i+1;
		if(i>num.begin()&&*i==*(i-1))
			continue;
		
	}

}
