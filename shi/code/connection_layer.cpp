/*==============================================================================
    > File Name: connection_layer.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月22日 星期一 19时54分58秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class layer{
	public:
		int x;
		int setx(int m){
			x=m;
			return 0;
		}
		virtual int sety(int m) {

		};
		virtual void print(){

		};
		virtual int gety(){

		};
};
class Ilayer:public layer{
	public:
		int y;
		virtual int sety(int m){
			y=m;
			return 0;
		}
		virtual int gety(){
			return y;
		}
};
class Olayer:public layer{
	public:
		virtual void print(){
			cout<<"none"<<endl;
		}
};
void connection_layer(layer *il,layer *ol){
	il->sety(5);
	cout<<il->gety()<<endl;
	ol->print();
}
int main(){
	Ilayer il;
	Olayer ol;
	connection_layer(&il,&ol);
	return 0;
}
