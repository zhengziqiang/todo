/*==============================================================================
    > File Name: 二级指针.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月14日 星期日 19时45分55秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int main(){
	int a[2][4];
	int *p=&a[1][3];
	int **ptr=&p;
	return 0;
}
