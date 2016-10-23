/*==============================================================================
    > File Name: malloc.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月17日 星期三 16时17分25秒
 ==========================================================================*/

#include<iostream>
#include<stdlib.h>
#include<malloc.h>
using namespace std;
int main(){
	int *p;
	p=(int *)malloc(sizeof(int)*5);
	for(int i=0;i<5;i++){
		*(p+i)=i;
	}
	free(p);
	return 0;
}
