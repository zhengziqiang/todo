#include <iostream> //头文件
#include <math.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#define PI 3.14159265
#define e 2.718281828
#define n 2 //定义两层隐含层
#define databasenumber 300 //定义训练数据为300
#define learning_rate 0.01
#define n_in 30
#define n_fhidenlayer 30
#define n_shidenlayer 10
#define n_out 2 //n_in是输入数据的维数,n_fhidenlayer是第一个隐含层的节点数，n_shidenlayer是第二个隐含层节点数，n_out是输出层的节点数；
using namespace std; //使用std命名空间
double input[n];
double matrix_1[n_in][n_fhidenlayer],matrix_2[n_fhidenlayer][n_shidenlayer],matrix_3[n_shidenlayer][n_out];//定义三个权重矩阵
double layer1_node_sum,layer2_node_sum,output_node_sum,bias1[n_fhidenlayer],bias2[n_shidenlayer],bias_out[n_out]; //定义第一、二隐含层,输出层节点数值和偏置项；
double layer1_node[n_fhidenlayer],layer1_node_output[n_fhidenlayer],layer2_node[n_shidenlayer],layer2_node_output[n_shidenlayer],output_node[n_out]; //定义长度为第一、二隐含层和输出层节点数的数组；
double sigmoid(double x)
{
    double sigmoid;
   sigmoid = 1.0/(1.0+exp(-x));//define sigmoid function as activation function.
    return sigmoid;
}
double label;//定义标签
double feedforward();
double feedback();
double error();

/***************************************************
 main function
 ***************************************************/
int main()
{
int i,j,k;
for(i=0;i<3000;i++)
{
    double feedforward();
    double feedback();
    double m;
    double error=error(m);
    cout<<"matrix1="<<matrix_1[n_in][n_fhidenlayer]<<endl;
    cout<<"matrix2="matrix_2[n_fhidenlayer][n_shidenlayer]<<endl;
    cout<<"matrix3="matrix_3[n_shidenlayer][n_out]<<endl;
    cout<<"bias1="bias1[n_fhidenlayer]<<endl;
    cout<<"bias2="bias2[n_shidenlayer]<<endl;
    cout<<"bias_out="bias_out[n_out]<<endl;
}
    return o;
}
    //定义正态分布，获取随机权重和偏置
double weight(double matrix_1[n_in][n_fhidenlayer])
    {
        static double V1, V2, S;
        static int phase = 0;
        double X;
        for (i=0;i<n_in;i++)
        {
            for (j=0;j<n_fhidenlayer;j++)
            {
        if ( phase == 0 ) {
            do {
                double U1 = (double)rand() / RAND_MAX;
                double U2 = (double)rand() / RAND_MAX;
                V1 = 2 * U1 - 1;
                V2 = 2 * U2 - 1;
                S = V1 * V1 + V2 * V2;
            } while(S >= 1 || S == 0);
            X = V1 * sqrt(-2 * log(S) / S);
            else
            X = V2 * sqrt(-2 * log(S) / S);
        phase = 1 - phase;
            matrix_1[i][j]=X;
            return matrix_1;
}

double feedforward ()
{
    double weight(double matrix_1);
    double weight(double matrix_2);
    double weight(double matrix_3);
    double weight(double bias1);
    double weight(double bias2);
    double weight(double bias_out);
    double input[n_in];
    ifstream file;
    file.open("data.txt");
    for(i=0;i<n_in;i++)
    {
        file>>input;
    }
    file.close();
    //求解第一层隐含层节点的值
    for(i=0;i<n_fhidenlayer;i++)
       ｛
        for(j=0;j<n_in;j++)
        ｛
            layer1_node_sum+=matrix_1[i][j]*x;
            return layer1_node_sum+bias1[i];
           }
        layer1_node[i]=layer1_node_sum;
        layer1_node_output[i]=sigmoid(layer1_node[i]);
          ｝
  //求解第二层隐含层节点的值
    for(i=0;j<n_shidenlayer;i++)
    {
        for(j=0;j<n_fhidenlayer;j++)
        {
            layer2_node_sum+=matrix_2[i][j]*layer1_node_output[j];
            layer2_node_sum+=bias2[i];
        }
        layer2_node[i]=layer2_node_sum;
        layer2_node_output[i]=sigmoid(layer2_node[i]);
    }
 //求解输出层节点的值
    for(i=0;i<n_out;i++)
    {
        for(j=0;j<n_shidenlayer;j++)
        {
            output_node_sum+=matrix_3[i][j]*layer2_node_output[j];
            output_node_sum+=bias_out[i];
        }
        output_node[i]=layer3_node_sum;
        output_node_output[i]=sigmoid(output_node[i]);
     }
}
//定义筛选输出层的最大值函数
double out_max()
{
    double out_max=output_node_output[1];
	for (i=o;i<n_out;i++)
	{
    	if(out_max<output_node_output[i])
        	out_max=output_node_output[i];
	}
    return out_max;
}
//定义softmax分母（累加值）函数
double softmax_denominator()
{
    double softmax_denominator=0.0;
	for(i=0;i<n_out;i++)
 ｛
    	softmax_denominator+=pow(e,output_node_output[i]-out_max);
    }
    return softmax_denominator;
}
//定义softmax函数
double softmax()
{
    double output_p[n_out];
	for (i=0;i<n_out;i++)
	{
    	output_p[i]=pow(e,output_node_output[i]-out_max)/softmax_denominator；
	}
    return output_p[n_out];
}
//define cost function
double error(double x)
｛
        error=-log(x);
        return error;
   ｝
//定义errorGrad函数
double errorGrad()
{
    double errorGrad[n_out];
	for (i=0;i<n_out;i++)
	{
	double errorGrad[i] = output_p[i]-label；
    }
    return errorGrad[n_out];
}
double feedback()
{
    	double Grad_who[n_shidenlayer][n_out],Grad_whh[n_fhidenlayer][n_shidenlayer],Grad_wih[n_in][n_fhidenlayer];
//优化第二隐含层到输出层的权重
    	for (i=0;i<n_shidenlayer;i++) //更新最后一层隐藏层到输出层的权重
    	{
          for(j=0;j<n_out;j++)
          {
              Grad_who[i][j]=errorGrad[j]*layer2_node_output[i];//定义第二隐藏层到输出层的梯度
               matrix_3[i][j]-=learning_rate*Grad_who[i][j];//定义更新的权重值：原权重－学习率乘梯度
          }
        }
    //更新优化第一层隐藏层权重时的第二隐藏层各节点的偏导值
    double Grad_hidenlayer2[n_shidenlayer];//定义第二隐藏层的梯度函数
    for(i=0;i<n_shidenlayer;i++)
    {
        for(j=0;j<n_out;j++)
        {
            Grad_hidenlayer2[i]+=errorGrad[j]*matrix_3[i][j];
        }
    }
    //优化第一层隐含层第二隐含层的权重
    for(i=0;i<n_fhidenlayer;i++)
｛
        for(j=0;j<n_shidenlayer;j++)
        {
            Grad_whh[i][j]=Grad_hidenlayer2[j]*layer2_node_output[j]*(1-layer2_node_output[j])*layer1_node_output[i];//定义第一隐藏层到第二隐藏层的梯度
            matrix_2[i][j]-=learning_rate*Grad_whh[i][j];
        }
    ｝
    //更新在优化输入层权重时的第一隐藏层各节点的偏导值
    double Grad_hidenlayer1[n_fhidenlayer]
    for(i=0;i<n_fhidenlayer;i++)
    {
        for (j=0;j<n_shidenlayer;j++)
        {
            Grad_hidenlayer2[i]+=Grad_hidenlayer1[j]*matrix_2[i][j];//调用第二层隐含层的偏导值求第一层隐含层偏导的累加结果
        }
    }
    //优化从输入层到第一层隐含层权重
    for (i=0;i<n_in;i++)
    {
        for(j=0;j<n_fhidenlayer;j++)
        {
            Grad_wih[i][j]=Grad_hidenlayer1[j]*layer1_node_output[j]*(1-layer1_node_output[j]*layer1_node_output[i])*input[n_in];
            matrix_1[i][j]-=learning_rate*Grad_wih[i][j];
        }
    }//权重优化结束！
    double Grad_b_out[n_out],Grad_b_hiden2[n_shidenlayer],Grad_b_hiden1[n_fhidenlayer];
    //更新输出层偏置
    for (i=0;i<n_out;i++)
    {
        Grad_b_out[i]=errorGrad[i]*output_node_output[i]*(1-output_node_output[i]);
        bias_out[i]-=Grad_b_out[i];
    }
    //更新第二层隐藏层的偏置
    double layer2_node_grad[n_shidenlayer];
    for (i=0;i<n_shidenlayer;i++)
    {
        for (j=0;j<n_out;j++)
        {
            layer2_node_grad[i]+=matrix_3[i][j]*errorGrad[j]*output_node_output[j]*(1-output_node_output[j]);
        }
    }
    for (i=0;i<n_shidenlayer;i++)
    {
            Grad_b_hiden2[i]=layer2_node_grad[i]*layer2_node_output[i]*(1-layer2_node_output[i]);
        bias2[i]-=learning_rate*Grad_b_hiden2[i];
        return bias2;
    }
    //更新第一层隐藏层的偏置
    double layer1_node_grad[n_fhidenlayer],layer1_2_node_grad[n_shidenlayer];
    for (i=0;i<n_fhidenlayer;i++)
    {
        for (j=0;j<n_shidenlayer;j++)
        {
            for (k=0;k<n_out;k++)
            {
                layer1_2_node_grad[j]+=matrix_3[j][k]*errorGrad[k]*output_node_output[k]*(1-output_node_output[k]);
            }
            layer1_node_grad[i]+=matrix_2[i][j]*layer1_2_node_grad[j]*layer2_node_output[j]*(1-layer2_node_output[j])；
        }
        Grad_b_hiden1[i]=layer1_node_grad[i]*layer1_node_output[i]*(1-layer1_node_output[i]);
        bias1[i]-=learning_rate*Grad_b_hiden1[i];
    }
    //偏置更新完毕
｝
