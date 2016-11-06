/*==============================================================================
    > File Name: 递推求值.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月04日 星期五 18时13分58秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int fun1(int m);
int fun2(int m);
int fun1(int m){
	if(m>3){
		return fun2(m-1)+2*fun1(m-3)+5;
	}
	else if(m==3)
		return 6;
	else if(m==2)
		return 1;
	else
		return 2;
}
int fun2(int m){
	if(m>3){
		return fun1(m-1)+3*fun1(m-3)+2*fun2(m-3)+3;
	}
	else if(m==3)
		return 5;
	else if(m==2)
		return 4;
	else 
		return 3;
}
int main(){
	int m;
	cin>>m;
	long int n=fun1(m);
	long int n2=fun2(m);
	n%=99999999;
	n2%=99999999;
	cout<<n<<endl;
	cout<<n2<<endl;
	return 0;
}
