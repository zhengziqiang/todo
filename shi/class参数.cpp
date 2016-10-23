/*************************************************************************
    > File Name: class参数.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月08日 星期一 08时29分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
class point{
	public:
		int x;
};
int fun(point &p){
	p.x=15;
	return 0;
}
point init(){
	point y[2];
	y.x=12;
	return y;
}
int main(){
	point p;
	fun(p);
	point y;
	y=init();
	cout<<p.x<<endl;
	cout<<y.x<<endl;
	return 0;

}
