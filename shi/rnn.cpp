/*==============================================================================
    > File Name: rnn.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月12日 星期五 21时54分24秒
 ==========================================================================*/

#include<iostream>
#include<math.h>
#include<time.h>
#include<vector>
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

//sigmoid函数
inline double sigmoid(double x){
    return 1.0/(1.0+exp(-x));
}
//sigmoid的导函数
inline double fsigmoid(double x){
    return x*(1-x);
}
class layer{
	public:
		int num_node;
		double *weights;
		double *delta;
		int set_node(int m){
			num_node=m;
			return 0;
		}
		int get_node(){
			return num_node;
		}
};
class Ilayer:public layer{
	public:
		vector <double> output;
		vector <double> label;
		vector <double> loss;
};
class Hlayer:public layer{
	public:
		vector <double> bias;
		vector <double>
}
