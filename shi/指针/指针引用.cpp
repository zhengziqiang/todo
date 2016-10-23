/*==============================================================================
    > File Name: 指针引用.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月15日 星期一 15时34分50秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
void weight_change(double *weight,vector <vector <double> > &dwahh,double lr,int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            *weight=*weight - lr * dwahh[i][j];
			dwahh[i][j]=0.0;
			weight++;
        }
    }
}
int main(){
	int m=5;
	double lr=0.1;
	vector <vector <double> > dwahh(5,vector<double>(5,0.0));
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			dwahh[i][j]=1.2;
		}
	}
	double weight[5][5];
	double *ptr=weight[0];
	weight_change(ptr,dwahh,lr,5);
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cout<<weight[i][j]<<endl;
		}
	}
	return 0;
}
