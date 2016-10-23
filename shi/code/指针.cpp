/*==============================================================================
    > File Name: 指针.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月14日 星期日 16时55分24秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class point{
	public:
	int x;
	int y;
	int *z;
	int setx(int m){
		x=m;
		return 0;
	}
};
int main(){
	point a[2];
	point *p;
	p=a;
	p->setx(9);
	cout<<p->x<<endl;
	p++;
	p->setx(12);
	cout<<p->x<<endl;
	p++;
	cout<<p->x<<endl;//指向了未知的位置.所以这里出错了
	cout<<a[0].x<<endl;
	return 0;
}
