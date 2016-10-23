/*==============================================================================
    > File Name: 两维vector.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月13日 星期六 09时34分58秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <vector <int> > b;
	vector <int> c(5,0);
	b.push_back(c);
	vector <int> d(5,1);
	d[2]=5;
	b.push_back(d);
	cout<<b[1][2]<<endl;
	vector <int>::iterator m;
	for(m=d.begin();m!=d.end();m++)cout<<*m<<endl;
	for(m=c.begin();m!=c.end();m++)cout<<*m<<endl;
	return 0;
}
