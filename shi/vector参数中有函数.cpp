/*==============================================================================
    > File Name: vector参数中有函数.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月13日 星期六 21时39分07秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int seek(int m){
	return m;
}
class layer{
	public:
		int x;
		int setx(int m){
			x=m;
			return 0;
		}
		int getx(){
			return x;
		}
};
class Hlayer:public layer{
	public:
		int num_node;
		vector <int> hidd(seek(5),5);
};
int fun(){
	int x;
	return x;
}
int main(){
	vector <int> b(fun(),4);
	return 0;
}
