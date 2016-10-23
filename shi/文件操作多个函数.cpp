/*************************************************************************
    > File Name: 文件操作多个函数.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月08日 星期一 21时35分00秒
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;
int fun1(){
	ofstream ofile;
	ofile.open("log.txt");
	ofile<<"fun1"<<endl;
	ofile<<flush;
	ofile.close();
	return 0;
}
int fun2(){
	ofstream ofile;
	ofile.open("log.txt",ios::app);
	ofile<<"fun2"<<endl;
	ofile<<flush;
	ofile.close();
	return 0;
}
int main(){
	fun1();
	fun2();
	return 0;
}
