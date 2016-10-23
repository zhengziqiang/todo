/*************************************************************************
    > File Name: gaussian.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月08日 星期一 10时40分32秒
 ************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std; 
double gaussrand_NORMAL() {
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
	double a=gaussrand_NORMAL();
	double y=gaussrand_NORMAL();
	cout<<a<<endl;
	cout<<y<<endl;
	double x[5];
	for(int i=0;i<5;i++){
		x[i]=gaussrand_NORMAL();
		cout<<x[i]<<endl;
	}
	return 0;
}
