/*==============================================================================
    > File Name: Closedshape.h
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月22日 星期一 21时23分47秒
 ==========================================================================*/

#ifndef CLOSEDSHAPE
#define CLOSEDSHAPE
class Closedshape{
	public:
		virtual double get_area()=0;
		virtual doubla get_perimeter()=0;
		virtual void move_off(int xoff,int yoff)=0;
		virtual void show()=0;
};
#endif
