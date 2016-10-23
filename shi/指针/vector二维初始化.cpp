/*==============================================================================
    > File Name: vector二维初始化.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月15日 星期一 15时53分17秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
struct point{
	int m;
	vector <vector <int> > pp;
};
class layer{
	public:
		int x;
		struct point poi;
		int setm(int m){
			poi.m=m;
			return 0;
		}
		int setpp(vector <vector <int> > &pp){
			vector <vector <int> > m(5,vector<int>(5,1));
			poi.pp=m;
			return 0;
		}
};
int fun(vector <vector <int> > &pp,int m){
	vector <vector <int> > param(m,vector <int>(m,2));
	pp=param;
	return 0;
}
int main(){
	layer l1;
	l1.setm(5);
	cout<<l1.poi.m<<endl;
	l1.setpp(l1.poi.pp);
	cout<<l1.poi.pp[1][2]<<endl;
	fun(l1.poi.pp,5);
	cout<<l1.poi.pp[1][2]<<endl;
	return 0;
}
