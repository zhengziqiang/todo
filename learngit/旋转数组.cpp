#include<iostream>
using namespace std;
void full(int number,int begin,int size){
	int i,j,k;
	if(size==0)
		return ;
	if(size==1){
		data[begin][begin]=number;
		return ;
	}
	i=begin;
	j=begin;
	for(k=0;k<size-1;k++){
		data[i][j]=number;
		number++;
		i++;
	}
	for(k=0;k<size-1;k++){
		data[i][j]=number;
		number++;
		j++;
	}
	for(k=0;k<size-1;k++){
		data[i][j]=number;
		number++;
		i--;
	}
	for(k=0;k<size-1;k++){
		data[i][j]=number;
		number++;
		j--;
	}
	full(number,begin+1,size-2);
}
int main(){
	return 0;
}
