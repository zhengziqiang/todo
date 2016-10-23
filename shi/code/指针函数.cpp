/*==============================================================================
    > File Name: 指针函数.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月22日 星期一 19时30分02秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class layer{
	public:
		int x;
		int y;
		int setx(int m){
			x=m;
			return 0;
		}
		int sety(int m){
			y=m;
			return 0;
		}
		
};
void fun(layer *l1){
	l1->setx(5);
	cout<<l1->x<<endl;
}
int main(){
	layer l1;
	fun(&l1);
	return 0;
}
