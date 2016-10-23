/*==============================================================================
    > File Name: struct.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月14日 星期日 10时34分19秒
 ==========================================================================*/

#include<iostream>
using namespace std;
struct index
{
	int start_id;
	int end_id;
	int pattern_id;
	int label;
};
struct mini_batch
{
	index* indexs;
	int* batch_num;
	int total_batch_num;
};
int main(){
	return 0;
}
