/*==============================================================================
    > File Name: vector对象的初始化.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月18日 星期四 19时49分00秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
class block{
	public:
	class igate{
		public:
			int x;
			int y;
			igate(int m,int n){
				x=m;
				y=n;
			}
	};
	int x;
	vector <igate> iga;
	block(int m){
		x=m;
	}
	void fun(int m){
		igate i1(2,3);
		for(int i=0;i<m;i++){
			iga.push_back(i1);
		}
	}
};
int main(){
	block bk(2);
	bk.fun(2);
	cout<<bk.iga[0].x<<endl;
	return 0;
}
