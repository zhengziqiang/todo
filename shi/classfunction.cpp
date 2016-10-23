/*************************************************************************
    > File Name: classfunction.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月06日 星期六 23时33分51秒
 ************************************************************************/

#include<iostream>
using namespace std;
class point{
	public:
		int m;
		int setm(int n){
			m=n;
			return 0;
		}
		int getm(){
			return m;
		}
		int setmn(){
			int n=getm();
			cout<<n<<endl;
		}
};
int main(){
	point p;
	p.setm(2);
	return 0;
}
