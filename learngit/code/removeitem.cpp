/*==============================================================================
    > File Name: removeitem.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月31日 星期一 18时57分09秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int remove(int a[],int n,int item){
	int i=0;
	int j=0;
	for(i=0;i<n;i++){
		if(a[i]==item){
			continue;//如果遇到item值，那么i自增1，而j没有加1，所以利用这样的特性，我们就移除了item值，但实际上数组的长度并没有改变
		}
		a[j]=a[i];
		j++;
	}
	return j;
}
int main(){
	int a[10];
	for(int i=0;i<10;i++){
		a[i]=i;
	}
	int length=remove(a,10,5);
	cout<<length;
	return 0;
}
