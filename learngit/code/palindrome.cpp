/*==============================================================================
    > File Name: palindrome.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 23时24分48秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
bool isvalid(string s){
	transform(s.begin(),s.end(),s.begin(),::tolower);
		auto left=s.begin(),right=prev(s.end());
		while(left<right){
			if(!::isalnum(*left))
				++left;
			else if(!::isalnum(*right))
				--right;
			else if(*left!=*right)
				return false;
			else
			{
				left++;
				right--;
			}

		}
		return true;
	
}
int main(){
	return 0;
}
