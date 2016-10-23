/*==============================================================================
    > File Name: 类的数组初始化.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月25日 星期四 10时08分54秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class layer{
	public:
		int x;
		layer(int m){
			x=m;
		}
};
void fun(layer *l1,layer **l2,int m){
	for(int i=0;i<m;i++){
		l2[i]->x-=2;
	}
	cout<<l1->x<<endl;
}
int main(){
	layer *l[4];
	layer l1(5);
	for(int i=0;i<4;i++){
		l[i]=new layer(i);
		cout<<l[i]->x<<endl;
	}
	fun(&l1,l,4);
	for(int i=0;i<4;i++){
		cout<<l[i]->x<<endl;
	}
	return 0;
}
