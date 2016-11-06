/*==============================================================================
    > File Name: 深度优先遍历.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年11月05日 星期六 20时14分15秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#define vertex int
#define white 0
#define gray 1
#define black 2
#define num_vertex 4
using namespace std;
struct node{
	int val;
	int weight;
	struct node *next;
	node(int v,int w):val(v),weight(w),next(NULL){

	}

};
typedef node* vlist;
struct table_entry{
	vlist header;
	vertex color;
};

typedef table_entry table[num_vertex+1];

void init_table(vertex start,table t){
	vertex outdegree;
	vlist temp=NULL;
	for(int i=1;i<=num_vertex;i++){
		cin>>outdegree;
		t[i].header=NULL;
		t[i].color=white;
		for(int j=0;j<outdegree
	}
}
