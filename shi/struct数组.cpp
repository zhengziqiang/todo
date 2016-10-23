/*************************************************************************
    > File Name: struct数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月07日 星期日 09时39分02秒
 ************************************************************************/

#include<iostream>
using namespace std;
struct point{
	int x;
	int y;
};
int fun(struct point *p,int n){
	for(int i=0;i<n;i++)(*(p+i)).x=2;
	return 0;
}
int change(struct point *p,int n){
	for(int i=0;i<n;i++)(*(p+i)).x=-1;
	return 0;
}
class sp{
	public:
		int m;
		struct point p[];
		int setm(int x){
			 m=x;
			 return 0;
		}
		int getm(){
			return m;
		}
		int init(struct point *p){
			int m=getm();
			for(int i=0;i<m;i++)(*(p+1)).x=1;
			return 0;
		}
		int print(struct point *p,int m){
			for(int i=0;i<m;i++)cout<<(*(p+1)).x<<endl;
			return 0;
		}
};
int main(){
	struct point p1[2];
	fun(p1,2);
	cout<<(*(p1+1)).x<<endl;
	sp s1;
	s1.setm(2);
	s1.init(s1.p);
	s1.print(s1.p,2);
	return 0;
}
