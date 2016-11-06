/*==============================================================================
    > File Name: largest_rectangle.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 18时03分27秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largest(vector <int> height){
	height.push_back(0);
	stack <int> s;
	int result=0;
	for(int i=0;i<height.size();){
		if(s.empty()||height[i]>height[s.top()]){
			s.push(i++);
		}
		else{
			int tmp=s.top();
			s.pop();
			result=max(result,
					height[tmp]*(s.empty()?i:i-s.top()-1));

		}
	}
	return result;
}
int main(){
	vector <int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(2);
	cout<<largest(vec)<<endl;
	return 0;
}
