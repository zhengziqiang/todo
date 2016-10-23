/*************************************************************************
    > File Name: 转置.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月09日 星期二 21时28分59秒
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
	vector <double> data;
	ifstream ifile;
	ifile.open("data转置");
	for(int i=0;i<30;i++){
		for(int j=0;j<569;j++){
		double a;
		ifile>>a;
		data.push_back(a);
		}
	}
	ifile.close();
	ofstream ofile;
	ofile.open("label.txt");
	vector <double> label;
	for(int i=0;i<569;i++){
		for(int j=0;j<30;j++){
			label.push_back(data[j*569+i]);
		}
	}
	for(int i=0;i<569;i++){
		for(int j=0;j<30;j++){
			ofile<<label[i*569+j]<<endl;
		}
	}
	return 0;
}
