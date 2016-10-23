/*==============================================================================
    > File Name: 读空行文件.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月15日 星期一 17时51分10秒
 ==========================================================================*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream ifile;
	ifile.open("shlcb");
	int a,b,c,d;
	ifile>>a;
	ifile>>b;
	ifile>>c;
	ifile>>d;
	cout<<a<<b<<" "<<c<<d<<endl;
	ifile.close();
	return 0;
}
