/*==============================================================================
    > File Name: 兰顿蚂蚁.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月04日 星期五 15时05分49秒
 ==========================================================================*/

#include<iostream>
#include<vector>
using namespace std;
int fun(vector <vector <int> > &sqr,int &dir,int &x,int &y){
	if(sqr[x][y]==1){
		dir+=1;
		if(dir>3)
			dir=0;
		sqr[x][y]=0;
	}
	else{
		dir-=1;
		if(dir<0)
			dir=3;
		sqr[x][y]=1;
	}
	switch(dir){
		case 0:
			y-=1;
			break;
		case 1:
			x-=1;
			break;
		case 2:
			y+=1;
			break;
		case 3:
			x+=1;
			break;
		default:
			break;

	}

	return 0;
}
int char_to_int(char tmp){
	int dir;
	if(tmp=='L')
		dir=0;
	if(tmp=='U')
		dir=1;
	if(tmp=='R')
		dir=2;
	if(tmp=='D')
		dir=3;
	return dir;
}
int main(){
	int m,n;
	cin>>m>>n;
	vector <vector <int> > sqr(m,vector <int>(n,0));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>sqr[i][j];
		}
	}
	int x,y;
	cin>>x>>y;
	x-=1;
	y-=1;
	char dir;
	cin>>dir;
	int dir_int;
	dir_int=char_to_int(dir);
	int step_number;
	cin>>step_number;
	for(int i=0;i<step_number;i++){
		fun(sqr,dir_int,x,y);
	}
	x+=1;
	y+=1;
	cout<<x<<" "<<y<<endl;
	return 0;
}
