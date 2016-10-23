/*==============================================================================
    > File Name: 返回引用实例.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月27日 星期六 11时18分33秒
 ==========================================================================*/

#include<iostream>
using namespace std;
const int &add(int a,int b,int c,int &add){
	add=a+b+c;
	return add;
}
int main(){
	int z=0;
	add(3,4,5,z);//add(3,4,5,z)++报错
	cout<<z<<endl;
	z++;
	cout<<z<<endl;
	return 0;
}
