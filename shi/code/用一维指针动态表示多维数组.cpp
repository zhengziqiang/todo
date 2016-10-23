/*==============================================================================
    > File Name: 用一维指针动态表示多维数组.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月19日 星期五 09时24分03秒
 ==========================================================================*/

#include <iostream>
using namespace std;
int main()
{
 int m=3,n=4,l=2;
 int *p2; //将表示二维数组
 p2=new int[m*n];
 int i,j,k;
 for (i=0;i<m;i++)
 for(j=0;j<n;j++)
 {
 p2[i*n+j]=i+j;
 }
 cout<<"二维数组"<<endl;
 for (i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 cout<<p2[i*n + j]<<" ";
 }
 cout<<endl;
 }
 delete []p2;
 int *p3; //将表示三维数组
 p3=new int[m*n*l];
 for (k=0;k<l;k++)
 for (i=0;i<m;i++)
 for (j=0;j<n;j++)
 {
 p3[k*n*m + i*n + j]=i+j+k;
 }
 cout<<"三维数组"<<endl;
 for (int k=0;k<l;k++)
 {
 for (int i=0;i<m;i++)
 {
 for (int j=0;j<n;j++)
 cout<<p3[k*n*m + i*n + j]<<" " ;
 cout<<endl;
 }
 cout<<endl;
 }
 delete []p3;
 return 0;
}
