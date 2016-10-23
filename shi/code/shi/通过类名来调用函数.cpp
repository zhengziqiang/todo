/*==============================================================================
    > File Name: 通过类名来调用函数.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年09月02日 星期五 17时00分42秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class point{
	public:
		void print(){
			cout<<"c++"<<endl;
		}
};
int main(){
	point::print();
	return 0;
}
