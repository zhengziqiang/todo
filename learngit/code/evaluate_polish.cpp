/*==============================================================================
    > File Name: evaluate_polish.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 18时13分41秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
int eval(vector <string> tokens){
	int x,y;
	auto token=tokens.back();//最后一个元素
	tokens.pop_back();//删掉最后一个元素
	if(is_operator(token)){
		y=eval(tokens);
		x=eval(tokens);
		if(token[0]=='+')
			x+=y;
		else if(token[0]='-')
			x-=y;
		else if(token[0]='*')
			x*=y;
		else
			x/=y;

	}
	else{
		size_t i;

	}
}
