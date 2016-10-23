/*************************************************************************
    > File Name: struct.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月06日 星期六 20时48分44秒
 ************************************************************************/

#include<iostream>
using namespace std;
class point{
	private:
		int a;
	public:
		int seta(int x){
			a=x;
			return 0;
		}
		int geta(){
			return a;
		}
};

int main(){
	p.seta(2);
	cout<<p.geta()<<endl;
	return 0;
}
