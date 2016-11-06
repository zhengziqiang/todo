/*==============================================================================
    > File Name: string匹配_kmp.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月02日 星期三 20时32分06秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
void compute(char *pattern,int next[]){
	int i;
	int j=-1;
	int m=strlen(pattern);
	next[0]=j;
	for(i=1;i<m;i++){
		while(j>-1&&pattern[j+1]!=pattern[i])
			j=next[j];
		if(pattern[i]==pattern[j+1])
			j++;
		next[i]=j;
	}
}
int kmp(char *text,char *pattern){
	int i;
	int j=-1;
	int n=strlen(text);
	int m=strlen(pattern);
	if(n==0&&m==0)
		return 0;
	if(m==0)
		return 0;
	int *next=(int*)malloc(sizeof(int)*m);
	compute(pattern,next);
	for(i=0;i<n;i++){
		while(j>-1&&pattern[j+1]!=text[i])
			j=next[j];
		if(text[i]==pattern[j+1])
			j++;
		if(j==m-1){
			free(next);
			return i-j;
		}
	}
	free(next);
	return -1;
}
int str(string &haystr,string str){
	return kmp(haystr.c_str(),str.c_str());
}
int main(){
	string haystr="helloworld";
	string str="hello";
	cout<<str(haystr,str)<<endl;
	return 0;
}
