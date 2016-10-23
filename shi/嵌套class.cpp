/*************************************************************************
    > File Name: 嵌套class.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月07日 星期日 21时18分23秒
 ************************************************************************/

#include<iostream>
#include<vector>
template <typename Dtype>
struct Node{
	vector  <double> error;
};
class layer{
	public:
		vector <Node> nodes;
		int init(vector <Node> &nodes);
};
template <typename Dtype>
int layer::init(vector <Dtype> &nodes){
	for(int i=0;i<2;i++){
		struct Node node1;
		node1.error.push_back(5);
		nodes.push_back(node1);
	}
}
int main(){
	return 0;
}
