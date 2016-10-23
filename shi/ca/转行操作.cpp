/*************************************************************************
    > File Name: 转行操作.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月10日 星期三 09时25分38秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>
using namespace std;
int main(){
	double a[198][30];
	ifstream ifile;
	ifile.open("wdbg1.txt");
	for(int i=0;i<198;i++){
		for(int j=0;j<30;j++){
			ifile>>a[i][j];
		}
	}
	ifile.close();
	FILE *out;
	out=fopen("wdbg2","w+");
	for(int i=0;i<198;i++){
		for(int j=0;j<30;j++){
			fprintf(out,"%f\t",a[i][j]);
		}
		fprintf(out,"\n");
	}
	fclose(out);
	return 0;
}
