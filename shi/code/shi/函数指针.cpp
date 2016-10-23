/*==============================================================================
    > File Name: 函数指针.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月25日 星期四 20时06分10秒
 ==========================================================================*/

#include<iostream>
using namespace std;
float add(float x,float y){
	return x+y;
}
float sub(float x,float y){
	return x-y;
}
float mul(float x,float y){
	return x*y;
}
float dev(float x,float y){
	return x/y;
}
int main(){
	float a,b;
	char c;
	float (*p)(float,float);
	cin>>a>>b>>c;
	switch(c){
		case '+':
			p=add;
			break;
		case '-':
			p=sub;
			break;
		case '*':
			p=mul;
			break;
		case '/':
			p=dev;
			break;
	}
	cout<<p(a,b)<<endl;
	return 0;
}
