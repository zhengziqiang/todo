/*==============================================================================
    > File Name: 传类的数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月25日 星期四 10时11分13秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class layer{
	public:
		int x;
		int setx(int m){
			x=m;
		}
};
void fun(layer *l1,layer l2[],int m){
	for(int i=0;i<m;i++){
		l2[i].x-=3;
	}
	cout<<"调用fun"<<endl;
	cout<<l1->x<<endl;
}
int main(){
	layer l1(5);
	layer *l2[3];
	for(int i=0;i<3;i++){
		l2[i]=new layer(i);
	}
//	fun(&l1,&l2,3);
	return 0;
}
