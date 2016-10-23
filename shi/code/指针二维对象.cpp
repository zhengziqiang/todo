/*==============================================================================
    > File Name: 指针二维对象.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月23日 星期二 20时59分46秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class layer{
	public:
		int x;
};
class Ilayer:public layer{
	public:
		int y;
};
class Hlayer:public layer{
	public:
		int z;
};
class Olayer:public layer{
	public:
		int w;
}
void train(layer *l1,Hlayer *h1,Olayer *o1){
	cout<<l1->x<<endl;
	cout<<h1->y<<endl;
	h1++;

}
int main(){
	
}
