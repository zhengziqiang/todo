/*************************************************************************
    > File Name: 不同函数读取.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月10日 星期三 09时58分24秒
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;
int fun();
int fun2();
int main(){
	fun();
	fun2();
	return 0;
}
int fun(){
	ifstream ifile;
	ifile.open("valtxt");
	double a[2][30];
	for(int i=0;i<2;i++){
		for(int j=0;j<30;j++){
			ifile>>a[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<30;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
int fun2(){
	ifstream ifile;
	ifile.open("valtxt");
	double a[2][30];
	for(int i=0;i<2;i++){
		for(int j=0;j<30;j++){
			ifile>>a[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<30;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	ifile.close();
	return 0;
}
