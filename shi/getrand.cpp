/*************************************************************************
    > File Name: getrand.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月06日 星期六 10时35分37秒
 ************************************************************************/

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
double getrand(){
	return ((double)rand())/(double)RAND_MAX;
}
int main(){
	double a=getrand();
	cout<<a<<endl;
	cout<<getrand()<<endl;
	return 0;
}
