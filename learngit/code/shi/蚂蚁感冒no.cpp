/*==============================================================================
    > File Name: 蚂蚁感冒.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 18时32分09秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int mysort(vector <int> &a,vector <int> &b,vector <int> &c){
	int n=a.size();	
	int tmp1,tmp2,k,tmp3;
	for(int i=0;i<n-1;i++){
		k=i;
		for(int j=i+1;j<n;j++){
			if(a[k]>a[j])
				k=j;
		}
		tmp1=a[i];
		a[i]=a[k];
		a[k]=tmp1;
		tmp2=b[i];
		b[i]=b[k];
		b[k]=tmp2;
		tmp3=c[i];
		c[i]=c[k];
		c[k]=tmp3;
	}
	return 0;
}
int fun(vector <int> &a,vector <int> &dir,vector <int> &is_val){
	int left=0;
	while(dir[left]==-1){
		left++;
	}
	int right=a.size()-1;
	while(dir[right]==1){
		right--;
	}
	is_val.find(1)


}
int main(){
	int n;
	cin>>n;
	vector <int> a(n,0);
	vector <int> dir(n,1);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0){
			dir[i]=-1;
			a[i]=-a[i];
		}
	}
	vector <int> is_val(n,0);
	is_val[i]=1;
	mysort(a,dir);

}
