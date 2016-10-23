/*************************************************************************
    > File Name: 类中的数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月07日 星期日 09时11分30秒
 ************************************************************************/

#include<iostream>
using namespace std;
int fun(double a[],int m){
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	return 0;
}
class point{
	public:
		double a[];
		int n;
		int setn(int m){
			n=m;
		}
		int change(double *a,int n){
			for(int i=0;i<n;i++)*(a+i)=i+2.0;
			return 0;
		}
};
int main(){
	point p;
	p.setn(5);
	fun(p.a,5);
	cout<<p.a[2]<<endl;
	p.change(p.a,5);
	for(int i=0;i<5;i++)cout<<p.a[i]<<endl;
	return 0;
}
