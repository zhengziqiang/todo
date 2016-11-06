/*==============================================================================
    > File Name: the_number_of_1.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月27日 星期四 21时12分52秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int fun(int m){
	if(m>1){
		fun(m/10)*9+10;
	}
	return 1;
}
int main(){
	int m;
	cout<<"please input a number"<<endl;
	cin>>m;
	cout<<fun(m);
	return 0;
}
