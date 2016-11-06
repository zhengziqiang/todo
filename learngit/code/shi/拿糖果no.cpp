/*==============================================================================
    > File Name: 拿糖果.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月04日 星期五 21时52分10秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool is_pride(int m){
	if(m==1)
		return false;
	else{
		for(int i=2;i<=sqrt(m)+1;i++){
			if(m%i!=0)
				return false;
		}
		return true;
	}
}
int fun(int m,int p){
	int up=sqrt(m);
	for(int i=up;i>=1;i--){
		if(m%i==0&&is_pride(i)){

		}
	}
	
}
int main(){
	int n;
	cin>>n;
}
