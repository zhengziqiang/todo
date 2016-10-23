/*************************************************************************
    > File Name: for.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 09时28分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++){
			cout<<i*4+j<<endl;
		}
		for(int i=0;i<3;i++){
			cout<<"2222222"<<endl;
		}
	}
	return 0;
}
