/*==============================================================================
    > File Name: Circle.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月22日 星期一 21时45分14秒
 ==========================================================================*/

#include<iostream>
#include "point.h"
using namespace std;
class Circle:public Closedshape{
	Point p;
	int r;
	public:
	Circle(int x,int y,int r):p(x,y){
		this->r=r;
	}
	double get_area(){
		return r*r*3.14;
	}
	double get_perimeter(){
		return r*2*3.14;
	}
	int getr(){
		return r;
	}
	void setr(int r){
		this->r=r;
	}
	void move_off(int xoff,int yoff){
		p.move_off(xoff,yoff);//重写这个函数
	}
	void show(){
		cout<<"一个圆:";
		p.show();//显示坐标
	}
	cout<"r="<<r<<endl;
	cout<<"周长为"<<get_perimeter()<<endl;
	cout<<"面积为"<<get_area()<<endl;
};
