/*==============================================================================
    > File Name: 分治法排序.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月20日 星期四 17时14分09秒
 ==========================================================================*/

#include<iostream>
using namespace std;
int maxnum(int a[],int left,int right){
	int sum=0,midsum=0,leftsum=0,rightsum=0;
	int center,s1,s2,lefts,rights;
	if(left==right){
		sum=a[left];
	}
	else{
		center=(left+right)/2;
		leftsum=maxnum(a,left,center);
		rightsum=maxnum(a,center+1,right);
		for(int i=center;i>=left;i--){
			lefts+=a[i];
			if(lefts>s1)s1=lefts;
		}
		for(int j=center+1;j<=right;j++){
			rights+=a[j];
			if(rights>s2)s2=rights;
		}
		midsum=s1+s2;
		if(midsum<leftsum)sum=leftsum;
		else sum=midsum;
		if(sum<rightsum)
			sum=rightsum;
	}
	return sum;

}
int main(){
	int a[10]={
		1,-1,8,-2,9,7,-12,4,5,4
	};
	int max=maxnum(a,2,7);
	cout<<max<<endl;
	return 0;
}
