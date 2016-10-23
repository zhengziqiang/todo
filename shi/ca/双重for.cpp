/*************************************************************************
    > File Name: 双重for.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月10日 星期三 13时50分50秒
 ************************************************************************/

#include<iostream>
#include<vector>
#include<math.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
double getrand(){
	static double V1, V2, S;
	static int phase = 0;
	double X;
	if (phase == 0) {
		do {
			double U1 = (double) rand() / RAND_MAX;
			double U2 = (double) rand() / RAND_MAX;
			V1 = 2 * U1 - 1;
			V2 = 2 * U2 - 1;
			S = V1 * V1 + V2 * V2;
		} while (S >= 1 || S == 0);
		X = V1 * sqrt(-2 * log(S) / S);
	} else
		X = V2 * sqrt(-2 * log(S) / S);
	phase = 1 - phase;
	double x=X*0.1;
	return x;
}
int main(){
	vector <double> weights;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			double a=getrand();
			weights.push_back(a);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++)
			cout<<weights[i*3+j]<<endl;
	}
	return 0;
}
