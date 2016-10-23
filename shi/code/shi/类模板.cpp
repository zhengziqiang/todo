/*==============================================================================
    > File Name: 类模板.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月25日 星期四 20时30分10秒
 ==========================================================================*/

#include<iostream>
using namespace std;
template <typename T>
class wrapper{
	T a;
	public:
	wrapper(const T b):a(b){//用b来初始化a

	}
	T get()const{
		return a;
	}
};
int main(){
	wrapper<int> a(2);
	wrapper<char> b('b');
	cout<<a.get()<<endl;
	return 0;
}
