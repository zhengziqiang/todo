/*************************************************************************
    > File Name: 指针加vector.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 21时03分41秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> a(10,1);
	for(int i=0;i<10;i++){
		cout<<a[i];
	}
	cout<<endl;
	vector <int> b(a);
	vector <int>::iterator t;
	for(t=b.begin();t!=b.end();t++)
		cout<<*t<<endl;
	//向量的插入
	b.insert(b.begin(),2);
	cout<<"b的个数现在是"<<b.size()<<endl;
	//在指定位置插入多个数字
	a.insert(a.begin(),3,5);
	for(t=a.begin();t<a.begin()+3;t++)//在这里,我又将迭代器的指针指向b的首字母
		cout<<*t<<endl;
	a.erase(a.begin());//删除a的首节点的元素
	b.erase(b.begin(),b.begin()+3);//删除b的首节点到其第第三个元素之间的元素
	return 0;	
}
