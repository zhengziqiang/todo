/*************************************************************************
    > File Name: 类中嵌套.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月08日 星期一 23时40分44秒
 ************************************************************************/

#include<iostream>
using namespace std;
class layer{
	public:
		int x;
		int setx(int m){
			x=m;
		}
		int getx(){
			return x;
		}
};
class File{
	public:
		layer input;
		layer init();
};
layer File::init(){
	layer l;
	l.setx(5);
	cout<<l.x<<endl;
}
int main(){
	return 0;
}
