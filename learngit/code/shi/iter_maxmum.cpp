/*==============================================================================
    > File Name: iter_maxmum.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 11时21分54秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int max_sub(vector <int> &A){
	return mcss(A.begin(),A.end());
}
template <typename Iter>
static int mcss(Iter begin,Iter end){
	int result,cur_min;
	const int n=distance(begin,end);
	int *sum=new int [n+1];
	sum[0]=0;
	result= -9999;
	cur_min=sum[0];
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+*(begin+i-1);


	}
	for(int i=1;i<=n;i++){
		result=max(result,sum[i]-cur_min);
		cur_min=min(cur_min,sum[i]);

	}
	delete []sum;
	return result;
}

