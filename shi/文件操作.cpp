/*************************************************************************
    > File Name: 文件操作.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月08日 星期一 16时20分59秒
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream ofile;
	ofile.open("log.txt");
	for(int i=0;i<5;i++){
		ofile<<i<<endl;
	}
	ofile<<flush;
	ofile.close();
	ifstream ifile;
	ifile.open("log.txt");
	int a[5];
	for(int i=0;i<5;i++){
		ifile>>a[i];
		cout<<a[i]<<endl;
	}
	return 0;
}
