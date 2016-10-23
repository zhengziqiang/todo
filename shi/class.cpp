/*************************************************************************
    > File Name: class.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月06日 星期六 17时45分59秒
 ************************************************************************/

#include<iostream>
using namespace std;
class point{
	public:
	int x;
	int y;
};
int main(){
	point p[2];
	p[1].x=1;
	cout<<p[1].x<<endl;
	return 0;
}
