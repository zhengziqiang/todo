/*==============================================================================
    > File Name: 虚函数point.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月22日 星期一 20时31分43秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class layer{
	public:
		int x;
		virtual int  setx(int m);
};
class point:public layer{
	public:
		virtual int setx(int m){
			x=m;
			return 0;
		}
};
int main(){
	point l1;
	l1.setx(5);
	cout<<l1.x<<endl;
	return 0;
}
