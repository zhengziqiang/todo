/*************************************************************************
    > File Name: 二维vector.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 21时34分52秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <vector <int> > b(10,vector<int>(5,0));//二维的vector指针
	cin>>b[1][2];
	vector <int>::iterator t;
	for(int i=0;i<b.size();i++){
		for(int j=0;j<b[i].size();j++){
			cout<<b[i][j];
		}
	}
	return 0;
}
