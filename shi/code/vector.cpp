/*==============================================================================
    > File Name: vector.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月15日 星期一 14时13分19秒
 ==========================================================================*/

#include<iostream>
using namespace std;
struct point{
	int x;
	int y;
};
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
int fun(struct point &p,int m){
	p.x=15;
	p.y=12;
	p.x+=m;
	return 0;
}
int main(){
	point p;
	cout<<p.x<<endl;
	layer l1;
	l1.setx(9);
	fun(p,l1.getx());
	cout<<p.x<<endl;
	return 0;
}
