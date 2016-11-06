/*==============================================================================
    > File Name: 3_num.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 20时09分26秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
vector <vector <int> >  sum(vector <int> num){
	vector <vector <int > > result;
	if(num.size()<3)
		return result;
	sort(num.begin(),num.end());
	const int target=0;
	auto last=num.end();
	for (auto i=num.begin();i<last-2;i++){
		auto j=i+1;
		if(i>num.begin()&&*i==*(i-1))
			continue;
		auto k=last-1;
		while(j<k){
			if(*i+*k+*j<target){
				++j;
				while(*j==*(j-1)&&j<k)
					++j;
			}
			else if(*i+*j+*k>target){
				--k;
				while(*k==*(k+1)&&j<k)
					--k;
			}
			else{
				result.push_back({
						*i,*j,*k
						});
				++j;
				--k;
				while(*j==*(j-1)&&*k==*(k+1)&&j<k)
					++j
			}
		}
	}
	return result;
}
int main(){
	vector <int> vec;
	vec.push_back(1);
	vec.push_back(5);
	vec.push_back(-1);
	vec.push_back(2);
	vec.push_back(-2);
	vec.push_back(3);
	vector <vector <int> > ans;
	ans=sum(vec);
	return 0;
}
