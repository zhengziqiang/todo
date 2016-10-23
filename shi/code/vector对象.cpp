/*==============================================================================
    > File Name: vector对象.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月18日 星期四 15时22分52秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
class point{
	public:
		int x;
		point(int m){
			x=m;
		}
};
int main(){
	point p(5);
	vector <point> p1(4,p);
	for(int i=0;i<4;i++){
		cout<<p1[i].x<<endl;
	}
	return 0;
}
