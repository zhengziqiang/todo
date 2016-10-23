/*************************************************************************
    > File Name: 对象指针.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 09时33分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
class point{
	int x;
	int y;
	public:
	int setx(int m){
		x=m;
		return 0;
	}
	int getx(){
		return x;
	}
};
int fun(int m,point *p){
	p[0].setx(7);
	return 0;
}
int main(){
	point p[2];
	fun(2,p);
	cout<<p[0].getx()<<endl;
	return 0;
}
