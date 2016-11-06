/*==============================================================================
    > File Name: number_.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年10月31日 星期一 19时16分29秒
 ==========================================================================*/

#include<iostream>
#include<math.h>
using namespace std;

int fun(int n){
	int ans=0;
	int m=(int)sqrt(1.0*n);
	if(m*m==n){
		ans++;
		m--;
	}

	for(int i=1;i<=m;i++){
		if(m%i==0)
			ans+=2;
	}
	return ans;
}
int factor_num(int m){
	int limit=m;
	int count=0;
	for(int i=1;i<limit;i++){
		if(m%i==0){
			limit=m/i;
			if(limit!=i){
				count++;
			}
			count++;
		}
	}
	return count;
}
int main(){
	int T;
	cin>>T;
	int m[T],n[T];
	for(int i=0;i<T;i++){
		cin>>m[i]>>n[i];
	}
	for(int i=0;i<T;i++){
		int ans=1;
		for(int j=1;j<=n[i];j++){
			for(int k=1;k<=m[i];k++){
				ans+=factor_num(j*k);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
