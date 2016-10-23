/*==============================================================================
    > File Name: vector二维.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月12日 星期五 22时51分29秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <vector <int> > a(2);
	 vector <int> b(3,0);
	 a.push_back(b);
	 vector <int> c(2,1);
	 a.push_back(c);
	cout<<a.size()<<endl;
	cout<<a[0][0]<<endl;
	return 0;
}
