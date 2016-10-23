/*************************************************************************
    > File Name: vector.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月06日 星期六 21时24分18秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
void fun(vector<double> &b){
	cout<<b[0]<<endl;
	b[0]=13.5;
}
int main(){
	vector<double> a;
	a.push_back(12.5);
	fun(a);
	cout<<a[0]<<endl;
	return 0;
}
