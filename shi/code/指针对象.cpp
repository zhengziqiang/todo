/*==============================================================================
    > File Name: 指针对象.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月23日 星期二 21时08分47秒
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
int main(){
	layer l[4];
	layer *p=l;
	for(int i=0;i<4;++i){
		*p(4);
		p++;
	}
	return 0;
}
