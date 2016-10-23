/*==============================================================================
    > File Name: 析构函数.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月15日 星期一 20时08分58秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class point{
	public:
		int x;
		int y;
		point(int m,int n){
			x=m;
			y=n;
		}
};
/*class dd:public point{
	public:
		dd(int m){
			x=m;
		}
};*/
int main(){
	point p(3,4);
	cout<<p.x<<" "<<p.y<<endl;
	return 0;
}
