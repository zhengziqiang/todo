/*************************************************************************
    > File Name: normal.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月09日 星期二 16时50分29秒
 ************************************************************************/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	double a[30][198];
	ifstream ifile;
	double max[30];
	double min[30];
	ifile.open("sortwdbg.txt");
	for(int i=0;i<30;i++){
		for(int j=0;j<198;j++){
			ifile>>a[i][j];
		}
		max[i]=a[i][197];
		min[i]=a[i][0];
	}
	ifile.close();
	double label[30][198];
	ifstream labelfile;
	labelfile.open("wdbglabel.txt");
	for(int i=0;i<30;i++){
		for(int j=0;j<198;j++){
			labelfile>>label[i][j];
		}
	}
	ifile.close();
	ofstream ofile;
	ofile.open("wdbg1.txt");
	for(int i=0;i<30;i++){
		for(int j=0;j<198;j++){
			label[i][j]=(label[i][j]-min[i])/(max[i]-min[i]);
			ofile<<label[i][j]<<endl;
		}
	}
	ofile.close();
	return 0;
}
