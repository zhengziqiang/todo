/*==============================================================================
    > File Name: 指针double.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月12日 星期五 22时29分56秒
 ==========================================================================*/

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
double getrand(){
	return ((double)rand())/(double)RAND_MAX;
}
class layer{
	public:
		double *a;
};
int fun(double *a,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			*a=getrand();
			cout<<*a<<endl;
			a++;
		}
	}
	return 0;
}
int main(){
	layer l1;
	fun(l1.a,3,4);
	cout<<*(l1.a)<<endl;//就是指向的第一个存储单元,记住这样的用法
	return 0;
}
