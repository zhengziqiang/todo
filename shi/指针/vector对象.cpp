/*************************************************************************
    > File Name: vector对象.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月11日 星期四 21时26分59秒
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;
class Layer{
	public:
		int x;
		int y;
		int setx(int m){
			x=m;
			return 0;
		}
};
int fun(vector <Layer> &layer){
	layer[1].setx(31);
	return 0;
}
int main(){
	vector <Layer> layer;
	Layer l1;
	l1.setx(12);
	Layer l2;
	l2.setx(13);
	layer.push_back(l1);
	layer.push_back(l2);
	cout<<layer[1].x<<endl;
	fun(layer);
	cout<<"执行fun函数对调之后的值是"<<layer[1].x<<endl;
	return 0;
}
//vector还可以指向对象
//这样以后写程序就好写多了
//
