/*==============================================================================
    > File Name: time函数.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月18日 星期四 11时38分12秒
 ==========================================================================*/

#include<iostream>
#include<time.h>
using namespace std;
int main(){
	time_t nowtime;
	nowtime=time(NULL);
	cout<<nowtime<<endl;
	return 0;
}
