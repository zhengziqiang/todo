/*==============================================================================
    > File Name: 二分查找.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月31日 星期一 20时49分08秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int search(vector <int> num,int target){
	int first=0;
	int last=num.size();
	while(first!=last){
		const int mid=first+(last-first)/2;
		if(num[mid]==target){
			return mid;
		}
		if(num[first]<=num[mid]){
			if(num[first]<=target&&target<num[mid])
				last=mid;
			else
				first=mid+1;
		}
		else{
			if(num[mid]<target && target<=num[last-1])
				first=mid+1;
			else
				last=mid;
		}
		
	}
	return -1;
}
int main(){
	vector <int> vec;
	for(int i=0;i<10;i++)
		vec.push_back(i);
	cout<<search(vec,5)<<endl;
	return 0;
}
