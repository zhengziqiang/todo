/*==============================================================================
    > File Name: 父类对象.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月12日 星期五 21时49分40秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class father{
	public:
		int x;
		int setx(int m){
			x=m;
			return 0;
		}
};
class son:public father{
	public:
		int y;
};
int fun(father f1){
	f1.setx(9);
	cout<<f1.x<<endl;
	return 0;
}
int main(){
	son s1;
	fun(s1);
	return 0;
}

//子类既是父类的类型,又是自己本类的类型
