/*==============================================================================
    > File Name: pow_分治.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月01日 星期二 18时38分44秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
double power(double x,int n){
	if(n==0)
		return 1;
	double v=power(x,n/2);
	if(n%2!=0)
		return v*v*x;
	else
		return v*v;
}
double fun_pow(double x,int n){
	if(n<0)
		return 1.0/power(x,-n);
	else
		return power(x,n);
}
int main(){
	double x;
	cout<<"please input a number"<<endl;
	cin>>x;
	int n;
	cout<<"please input n"<<endl;
	cin>>n;
	cout<<fun_pow(x,n)<<endl;
	return 0;
}
