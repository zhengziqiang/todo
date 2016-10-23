/*==============================================================================
    > File Name: 二维指针class_new.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月23日 星期二 18时12分29秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class layer{
	public:
		int x;
		double **weight;
		layer(int m){
			x=m;
		}
};
void connection(layer *l1,layer *l2){
	int n2=l2->x;
	int n1=l1->x;
	l1->weight=new double*[n2];
	for(int i=0;i<n2;i++)
		l1->weight[i]=new double[n1];
	for(int i=0;i<n2;i++){
		for(int j=0;j<n1;j++){
			l1->weight[i][j]=0.1;
			cout<<l1->weight[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	layer l1(3);
	layer l2(4);
	connection(&l1,&l2);
	return 0;
}
