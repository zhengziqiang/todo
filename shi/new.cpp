/*************************************************************************
    > File Name: new.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月07日 星期日 21时49分34秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<fstream>
#include<time.h>
#include<string.h>
#include<vector>
using namespace std;

//生成随机数函数
double getrand(){
	static double V1, V2, S;
	static int phase = 0;
	double X;
	if (phase == 0) {
		do {
			double U1 = (double) rand() / RAND_MAX;
			double U2 = (double) rand() / RAND_MAX;
			V1 = 2 * U1 - 1;
			V2 = 2 * U2 - 1;
			S = V1 * V1 + V2 * V2;
		} while (S >= 1 || S == 0);
		X = V1 * sqrt(-2 * log(S) / S);
	} else
		X = V2 * sqrt(-2 * log(S) / S);
	phase = 1 - phase;
	double x=X*0.1;
	return x;
}
//sigmoid函数
inline double sigmoid(double x){
	return 1.0/(1.0+exp(-x));
}
//sigmoid的导函数
inline double fsigmoid(double x){
	return x*(1-x);
}
//主类,layer
class layer{
	public:
		int num_node;
		int patum;
		vector <double> weights;
		vector <double> delta;
		vector <double> delta_weight;
		vector <double> delta_weightall;
		int set_numnode(int m){
			num_node=m;
		}
		int get_numnode(){
			return num_node;
		}
		int set_patum(int m){
			patum=m;
		}
		int get_patum(){
			return patum;
		}
		int init_weight(int end,int first,vector <double> &weights);
		int init_delta(int num_node,vector <double> &delta);
		int init_deltaweight(int end,int first,vector <double> &delta_weight);
		int init_deltaweightall(int end,int first,vector <double> &delta_weightall);
};
int layer::init_delta(int num_node,vector <double> &delta){
		for(int j=0;j<num_node;j++){
			delta.push_back(0.0);
		}
}
int layer::init_deltaweight(int end,int first,vector <double> &delta_weight){
	for(int i=0;i<end;i++){
		for(int j=0;j<first;j++){
			delta_weight.push_back(0.0);
		}
	}
}
int layer::init_deltaweightall(int end,int first,vector <double> &delta_weightall){
	for(int i=0;i<end;i++){
		for(int j=0;j<first;j++){
			delta_weightall.push_back(0.0);
		}
	}
}
int layer::init_weight(int end,int first,vector <double> &weights){
	for(int i=0;i<end;i++){
		for(int j=0;j<first;j++){
			double a;
			a=getrand();
			weights.push_back(a);
		}
	}
	return 0;
}
//
//
//这是输入层的类
class Ilayer:public layer{
	public:
		vector <double> input_data;
		int init_inputdata(int patum,int num_node,vector <double> &input_data);
};
int Ilayer::init_inputdata(int patum,int num_node,vector <double> &input_data){
	cout<<"please input the data"<<endl;
	for(int i=0;i<patum;i++){
		cout<<"please input the data on "<<i<<"th batch"<<endl;
		for(int j=0;j<num_node;j++){
			cout<<"请输入与input_layer个数相等的数据"<<endl;
			double data;
			cin>>data;
			input_data.push_back(data);
		}
	}
	return 0;
}

class Hlayer:public layer{
	public:
		vector <double> hidden_val;
		vector <double> sigmoid_val;
		vector <double> bias;
		vector <double> delta_bias;
		vector <double> delta_biasall;
		int init_deltabias(int num_node,vector <double> &delta_bias);
		int init_hiddenval(int num_node,vector <double> &hidden_val);
		int init_sigmoidval(int num_node,vector <double> &sigmod_val);
		int init_bias(int num_node,vector <double> &bias);
		int init_deltabiasall(int num_mode,vector <double> &delta_biasall);
		int change_bias(int num_node,double lr,vector <double> &bias);
};
int Hlayer::init_deltabias(int num_node,vector <double> &delta_bias){
	for(int i=0;i<num_node;i++){
		delta_bias.push_back(0.0);
	}
}
int Hlayer::init_deltabiasall(int num_node,vector <double> &delta_biasall){
	for(int i=0;i<num_node;i++){
		delta_biasall.push_back(0.0);
	}
}
//初始化bias
//
int Hlayer::init_bias(int num_node,vector <double> &bias){
		for(int j=0;j<num_node;j++){
			double m=getrand();
			bias.push_back(m);
		}
}
//初始化hidden_val
//
int Hlayer::init_hiddenval(int num_node,vector <double> &hidden_val){
		for(int j=0;j<num_node;j++){
			hidden_val.push_back(0.0);
		}
}
//初始化sigmoidval
//
int Hlayer::init_sigmoidval(int num_node,vector <double> &sigmod_val){
		for(int j=0;j<num_node;j++){
			sigmoid_val.push_back(0.0);
		}
}


//output_layer的类
class Olayer:public layer{
	public:
		vector <double> output;
		vector <double> label;
		int init_output(int num_node,vector <double> &output);
		int init_label(int num_node,vector <double> &label);
};
int Olayer::init_output(int num_node,vector <double> &output){
		for(int j=0;j<num_node;j++){
			output.push_back(0.0);
		}
}
int Olayer::init_label(int num_node,vector <double> &label){
	cout<<"请设置实际值"<<endl;
	cout<<"实际值个数为"<<num_node<<endl;
	for(int i=0;i<num_node;i++){
		double data;
		cin>>data;
		label.push_back(data);
	}
}
//获取epoch
//
int get_epoch(){
	int epoch;
	cout<<"请输入epoch"<<endl;
	cin>>epoch;
	return epoch;
}
//获取batchsize
//
int get_patum(){
	int patum;
	cout<<"请输入patum"<<endl;
	cin>>patum;
	return patum;
}
//获取学习率
//
double get_lr(){
	double lr;
	cout<<"请输入学习率"<<endl;
	cin>>lr;
	return lr;
}
//隐藏层层数
//
int init_numhiddenlayer(){
	int num_hiddenlayer;
	cout<<"请输入隐藏层层数"<<endl;
	cin>>num_hiddenlayer;
	return num_hiddenlayer;
}
//初始化input_layer
Ilayer init_inputlayer(int patum){
	Ilayer input_layer;
	cout<<"请输入输入层的节点数"<<endl;
	int inum;
	cin>>inum;
	input_layer.set_numnode(inum);
	input_layer.init_inputdata(patum,inum,input_layer.input_data);
	return input_layer;
}
//初始化output_layer
Olayer init_outputlayer(){
	cout<<"请输入输出层的节点数"<<endl;
	int onum;
	cin>>onum;
	Olayer output_layer;
	output_layer.set_numnode(onum);
	output_layer.init_output(onum,output_layer.output);
	output_layer.init_label(onum,output_layer.label);
	return output_layer;
}
//初始化隐藏层参数
int init_hiddenparam(Hlayer &hidden_layer){
	cout<<"初始化隐藏层参数"<<endl;
	int hidden_numnode=hidden_layer.get_numnode();
	hidden_layer.init_hiddenval(hidden_numnode,hidden_layer.hidden_val);
	hidden_layer.init_sigmoidval(hidden_numnode,hidden_layer.sigmoid_val);
	return 0;
}
//input_layer和hidden_layer之间的连接
int data_trainIH(int patumth,int patum,int first,int end,vector <double> &data,vector <double> &weights,vector <double> &hidden_val,vector <double> &sigmoid_val,vector <double> &bias){
		for(int j=0;j<end;j++){//相当于后一个节点的个数,weight节点
			hidden_val[j]=0.0;
			for(int k=0;k<first;k++){//相当于前一个节点的个数,数据节点点
				hidden_val[j]=hidden_val[j]+data[patumth*patum+k]*weights[j*end+k];
			}
		hidden_val[j]=hidden_val[j]+bias[j];
		sigmoid_val[j]=sigmoid(hidden_val[j]);
		}
	return 0;
}
//隐藏层之间的连接
int data_trainHH(int first,int end,vector <double> &sig1,vector <double> &val,vector <double> &weights,vector <double> &sig2,vector <double> &bias){
		for(int j=0;j<end;j++){//相当于后一个节点的个数,weight节点
			val[j]=0.0;
			for(int k=0;k<first;k++){//相当于前一个节点的个数,数据节点点
				val[j]=val[j]+sig1[k]*weights[k+j*end];
			}
		val[j]+=bias[j];
		sig2[j]=sigmoid(sig1[j]);
		}
	return 0;
}
//隐藏层和输出层之间的连接
int data_trainHO(int first,int end,vector <double> &sig1,vector <double> &weights,vector <double> &output){
		for(int j=0;j<end;j++){//相当于后一个节点的个数,weight节点
		output[j]=0.0;
			for(int k=0;k<first;k++){//相当于前一个节点的个数,数据节点点

				output[j]=output[j]+sig1[k]*weights[j*end+k];
			}
		output[j]=sigmoid(sig1[j]);//就是yn
	}
	return 0;
}
int cal_delta(int num_node,vector <double> &delta,vector <double> &output,vector <double> &label){
		for(int j=0;j<num_node;j++){
			delta[j]=label[j]-output[j];
		}
}
int delta_bias_weight(int first,int end,vector <double> &deltafirst,vector <double> &sigmoid_val,vector <double> &weights,vector <double> &deltalast,vector <double> &delta_bias,vector <double> &delta_weight,vector <double> &delta_weightall,vector <double> &delta_biasall){
		for(int j=0;j<end;j++){
			for(int k=0;k<first;k++){
				deltalast[j]=weights[k*end+j]*deltafirst[k];//在这里deltalast又给该层的delta赋值.
				delta_weight[k*end+j]=sigmoid_val[j]*deltafirst[k];
				delta_weightall[k*end+j]+=delta_weight[k*end+j];
			}
			delta_bias[j]=fsigmoid(sigmoid_val[j])*deltalast[j];
			delta_biasall[j]+=delta_bias[j];//得到delta_weight_all
		}
	return 0;

}
int delta_weight(int patumth,int patum,int first,int end,vector <double> &delta,vector <double> &data,vector <double> delta_weight,vector <double> delta_weightall){
	for(int j=0;j<end;j++){
		for(int k=0;k<first;k++){
			delta_weight[k*end+j]=data[patumth*patum+j]*delta[k];
			delta_weightall[k*end+j]+=delta_weight[k*end+j];
		}
	}
	return 0;
}
int weight_changeIH(double lr,int patum,Ilayer &input_layer){
	int m=input_layer.weights.size();
	for(int i=0;i<m;i++){
		input_layer.weights[i]=input_layer.weights[i]-lr*(input_layer.delta_weightall[i]/patum);
	}
	return 0;
}
int weight_changeHH(double lr,int patum,Hlayer &hidden_layer){
	int m=hidden_layer.weights.size();
	for(int i=0;i<m;i++){
		hidden_layer.weights[i]=hidden_layer.weights[i]-lr*(hidden_layer.delta_weightall[i]/patum);
	}
	return 0;
}
int bias_change(double lr,int patum,Hlayer &hidden_layer){
	int m=hidden_layer.num_node;
	for(int i=0;i<m;i++){
		hidden_layer.bias[i]=hidden_layer.bias[i]-lr*(hidden_layer.delta_biasall[i]/patum);
	}
}
template <typename Dtype>
int writeweight(Dtype layerparam){
	ofstream ofile;
	ofile.open("param.txt",ios::app);
	int m=layerparam.weights.size();
	for(int i=0;i<m;i++){
		ofile<<layerparam.weights[i]<<endl;
	}
	ofile<<flush;
	ofile.close();
}
template <typename Dtype>
int writebias(Dtype layerparam){
	ofstream ofile;
	ofile.open("param.txt",ios::app);
	int m=layerparam.bias.size();
	for(int i=0;i<m;i++){
		ofile<<layerparam.bias[i]<<endl;
	}
	ofile<<flush;
	ofile.close();
}
class File{
	public:
		int epoch;
		int patum;
		int num_hiddenlayer;
		int num_node;
		double lr;
		Ilayer input_layer;
		Olayer output_layer;
		Hlayer hidden_layer;
		int fget_epoch(){
			return epoch;
		}
		int fget_patum(){
			return patum;
		}
		double fget_lr(){
			return lr;
		}
		int fget_numnode(){
			return num_node;
		}
		int fget_numhiddenlayer(){
			return num_hiddenlayer;
		}
		int fset_epoch(int m){
			epoch=m;
		}
		int fset_patum(int m){
			patum=m;
		}
		int fset_numnode(int m){
			num_node=m;
		}
		int fset_lr(double m){
			lr=m;
		}
		int fset_numhiddenlayer(int m){
			num_hiddenlayer=m;
		}
		Ilayer finput(int patum,int num_node,Ilayer &input_layer);
		Olayer foutput(int num_node,Olayer &output_layer);
		Hlayer fhidden(int num_node);
};

Ilayer File::finput(int patum,int num_node,Ilayer &input_layer){
	input_layer.set_patum(patum);
	input_layer.set_numnode(num_node);
}
Olayer File::foutput(int num_node,Olayer &output_layer){
	output_layer.set_numnode(num_node);
}
Hlayer File::fhidden(int num_node){
	Hlayer hidden_layer;
	hidden_layer.set_numnode(num_node);
	return hidden_layer;
}
int init_fromfile(File &file){
	ifstream ifile;
	ifile.open("param.txt");
	int epoch;
	ifile>>epoch;
	file.fset_epoch(epoch);
	int patum;
	ifile>>patum;
	file.fset_patum(patum);
	double lr;
	ifile>>lr;
	file.fset_lr(lr);
	int num_hiddenlayer;
	ifile>>num_hiddenlayer;
	file.fset_numhiddenlayer(num_hiddenlayer);
	int inum;
	ifile>>inum;
	int hnum[num_hiddenlayer];
	for(int i=0;i<num_hiddenlayer;i++){
		ifile>>hnum[i];
	}
	int onum;
	ifile>>onum;
	Hlayer hidden_layer[num_hiddenlayer];
	for(int 
}
//主函数
int main(){
	cout<<"是否从文件读取参数,请输入y或者n"<<endl;
	char s;
	cin>>s;
	bool copyfromfile;
	if(s=='y'){
		copyfromfile=true;
	}
	if(copyfromfile){
		File file;
		init_fromfile(file);

	}
	int epoch=get_epoch();
	int patum=get_patum();
	double lr=get_lr();
	Ilayer input_layer=init_inputlayer(patum);
	int num_hiddenlayer=init_numhiddenlayer();
	Hlayer hidden_layer[num_hiddenlayer];
	cout<<"请输入每个隐藏层节点数"<<endl;
	for(int i=0;i<num_hiddenlayer;i++){
		cout<<"请输入第"<<i+1<<"层隐藏层的节点数"<<endl;
		int hnum;
		cin>>hnum;
		hidden_layer[i].set_numnode(hnum);
	}
	Olayer output_layer=init_outputlayer();
	cout<<"初始化权值"<<endl;
	input_layer.init_weight(input_layer.num_node,hidden_layer[0].num_node,input_layer.weights);
	for(int i=0;i<num_hiddenlayer-1;i++){
		hidden_layer[i].init_weight(hidden_layer[i].num_node,hidden_layer[i+1].num_node,hidden_layer[i].weights);
	}
	hidden_layer[num_hiddenlayer-1].init_weight(hidden_layer[num_hiddenlayer-1].num_node,output_layer.num_node,hidden_layer[num_hiddenlayer-1].weights);
	
	for(int i=0;i<num_hiddenlayer;i++){
		init_hiddenparam(hidden_layer[i]);
	}
	for(int i=0;i<epoch;i++){
		for(int j=0;j<patum;j++){
		cout<<"前向计算"<<endl;
		data_trainIH(j,patum,input_layer.num_node,hidden_layer[0].num_node,input_layer.input_data,input_layer.weights,hidden_layer[0].hidden_val,hidden_layer[0].sigmoid_val,hidden_layer[0].bias);
		for(int k=0;k<num_hiddenlayer-1;k++){
			data_trainHH(hidden_layer[k].num_node,hidden_layer[k+1].num_node,hidden_layer[k].sigmoid_val,hidden_layer[k+1].hidden_val,hidden_layer[k].weights,hidden_layer[k+1].sigmoid_val,hidden_layer[k+1].bias);
		}
		data_trainHO(hidden_layer[num_hiddenlayer-1].num_node,output_layer.num_node,hidden_layer[num_hiddenlayer-1].sigmoid_val,hidden_layer[num_hiddenlayer-1].weights,output_layer.output);
		cout<<"后向计算"<<endl;
		cal_delta(output_layer.num_node,output_layer.delta,output_layer.output,output_layer.label);//计算首层的残差
		delta_bias_weight(output_layer.num_node,hidden_layer[num_hiddenlayer-1].num_node,output_layer.delta,hidden_layer[num_hiddenlayer-1].sigmoid_val,hidden_layer[num_hiddenlayer-1].weights,hidden_layer[num_hiddenlayer-1].delta,hidden_layer[num_hiddenlayer-1].delta_bias,hidden_layer[num_hiddenlayer-1].delta_weight,hidden_layer[num_hiddenlayer-1].delta_weightall,hidden_layer[num_hiddenlayer-1].delta_biasall);//计算输出层与隐藏层之间的delta_weight,delta__bias
		for(int i=num_hiddenlayer-1;i>1;i--){//计算隐藏层之间的delta_weight
			delta_bias_weight(hidden_layer[i].num_node,hidden_layer[i-1].num_node,hidden_layer[i].delta,hidden_layer[i-1].sigmoid_val,hidden_layer[i-1].weights,hidden_layer[i-1].delta,hidden_layer[i-1].delta_bias,hidden_layer[i-1].delta_weight,hidden_layer[i-1].delta_weightall,hidden_layer[i-1].delta_biasall);
		}
		delta_weight(j,patum,hidden_layer[0].num_node,input_layer.num_node,hidden_layer[0].delta,input_layer.input_data,input_layer.delta_weight,input_layer.delta_weightall);//改变隐藏层和输入层之间的连接

		//升级权值和bias
		weight_changeIH(lr,patum,input_layer);
		for(int i=0;i<num_hiddenlayer;i++){
			weight_changeHH(lr,patum,hidden_layer[i]);
			bias_change(lr,patum,hidden_layer[i]);
		}
		}
	}

	//将数据写入文件
	ofstream ofile;
	ofile.open("param.txt");
	ofile<<epoch<<endl;
	ofile<<patum<<endl;
	ofile<<lr<<endl;
	ofile<<num_hiddenlayer<<endl;
	ofile<<input_layer.num_node<<endl;
	for(int i=0;i<num_hiddenlayer;i++){
		ofile<<hidden_layer[i].num_node<<endl;
	}
	ofile<<output_layer.num_node<<endl;
	writeweight(input_layer);
	for(int i=0;i<num_hiddenlayer;i++){
		writeweight(hidden_layer[i]);
		writebias(hidden_layer[i]);
	}
	//数据写入完毕
	return 0;

}


