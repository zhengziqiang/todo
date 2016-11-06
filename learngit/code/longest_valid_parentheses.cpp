/*==============================================================================
    > File Name: longest_valid_parentheses.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 16时44分39秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
int longest(string s){
	int max_len=0;
	int last=-1;
	stack <int> lefts;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			lefts.push(i);
		}
		else{
			if(lefts.empty()){
				last=i;
				//没有匹配的左括号，说明第一个是右括号
			}
			else{
				lefts.pop();
				if(lefts.empty()){
					max_len=max(max_len,i-last);
				}
				else
					max_len=max(max_len,i-lefts.top());
			}
		}
	}
	return max_len;
}
int main(){
	string str="()(())((()()(";
	cout<<longest(str)<<endl;
	return 0;
}
