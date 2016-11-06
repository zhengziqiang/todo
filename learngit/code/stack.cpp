/*==============================================================================
    > File Name: stack.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月31日 星期一 23时44分54秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
bool isvalid(string &s){
	string left="([{";
	string right=")]}";
	stack <char> stk;
	for (int i=0;s[i]!='\0';i++){
		if(left.find(s[i])!=string::npos){
			stk.push(s[i]);//这个if语句的作用是保证了先出现右括号就一定不能匹配
		}
		else{
			if(stk.empty()||stk.top()!=left[right.find(s[i])])
				return false;
			else
				stk.pop();//去除已经匹配的括号
		}
	}
	return stk.empty();

}
int main(){
	string str="()[]";
	cout<<isvalid(str)<<endl;
	return 0;
}
