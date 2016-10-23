/*==============================================================================
    > File Name: Point.h
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月22日 星期一 21时10分24秒
 ==========================================================================*/

#ifndef POINT
#define POINT
#include<math.h>
class Point{
	int x,y;
	public:
	Point(int x=0,int y=0){
		this->x=x;
		this->y=y;
	}
	int getx(){
		return x;
	}
	int gety(){
		return y;
	}
	void move(int a,int b){
		x=a;
		y=b;
	}
	void move_off(int xoff,int yoff){
		x+=xoff;
		y+=yoff;
	}
	virtual void show(){
		cout<<"("<<getx()<<","<<gety()<<")"<<endl;
	}
	double distance(Point &p){
		double xdiff,ydiff;
		xdiff=x-p.x;
		ydiff=y-p.y;
		return sqrt((xdiff*xdiff+ydiff*ydiff));
	}
};
#endif
