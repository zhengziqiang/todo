/*==============================================================================
    > File Name: template初次使用.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月15日 星期一 15时17分49秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
template <typename Dtype>
void fun(Dtype &param,int m){
	for(int i=0;i<m;i++){
		param.push_back(0.0);
	}
}
int main(){
	vector <double> ham;
	int m=5;
	fun(ham,5);
	for(int i=0;i<5;i++){
		cout<<ham[i]<<endl;
	}
	return 0;
}
