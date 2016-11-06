/*==============================================================================
    > File Name: largest_rectangle.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 17时40分45秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largest(vector <int> &height){
	stack<int> s;
	height.push_back(0);
	int result=0;
	for(int i=0;i<height.size();){
		if(s.empty()||height[i]>height[s.top()]){//
			s.push(i++);
		}
		else{
			int tmp=s.top();//在原地处理合并得到一个最大的一个面积，直到栈中的元素全都被删除完了，我们才往后面走
			s.pop();
			result=max(result,height[tmp]*(s.empty()?i:i-s.top()-1));

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
