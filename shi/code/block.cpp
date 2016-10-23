/*==============================================================================
    > File Name: block.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月18日 星期四 21时06分36秒
 ==========================================================================*/

#include<iostream>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
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
void get_rng(vector <double> &param,int m){
    for(int i=0;i<m;i++){
        double a=getrand();
        param.push_back(a);
    }
}
class Block{
public:
    class igate{
    public:
        vector <double> wil;
        vector <double> whl;
        double wcl;
        vector <double> alt;
        vector <double> blt;
        double ib;
        igate(int inum,int hnum,int t){
            get_rng(wil,inum);
            get_rng(whl,hnum);
            vector <double> param(t,0.0);
            alt=param;
            blt=param;
            wcl=getrand();
            ib=getrand();
        }
    };
    class fgate{
    public:
        vector <double> wif;
        vector <double> whf;
        double wcf;
        vector <double> aft;
        vector <double> bft;
        double fb;
        fgate(int inum,int hnum,int t){
            get_rng(wif,inum);
            get_rng(whf,hnum);
            vector <double> param(t,0.0);
            aft=param;
            bft=param;
            wcf=getrand();
            fb=getrand();
        }
    };
    class wgate{
    public:
        vector <double> wiw;
        vector <double> whw;
        double wcw;
        vector <double> awt;
        vector <double> bwt;
        double wb;
        wgate(int inum,int hnum,int t){
            get_rng(wiw,inum);
            get_rng(whw,hnum);
            vector <double> param(t,0.0);
            awt=param;
            bwt=param;
            wcw=getrand();
            wb=getrand();
        }
    };
    class cell{
     public:
        vector <double> wic;
        vector <double> whc;
        vector <double> act;
        vector <double> sct;
        vector <double> bct;
        double cb;
        cell(int inum,int hnum,int t){
            get_rng(wic,inum);
            get_rng(whc,hnum);
            vector <double> param(t,0.0);
            act=param;
            sct=param;
            bct=param;
            cb=getrand();
        }
    };
    int nb;
    vector <igate> ig;
    vector <fgate> fg;
    vector <wgate> wg;
    vector <cell> cl;
    vector <vector <double> > weight_co;
    Block(int m,int inum,int hnum,int onum,int t){
        nb=m;
        igate input_gate(inum,hnum,t);
        fgate forget_gate(inum,hnum,t);
        wgate output_gate(inum,hnum,t);
        cell cell_param(inum,hnum,t);
        for(int i=0;i<nb;i++){
            ig.push_back(input_gate);
            fg.push_back(forget_gate);
            wg.push_back(output_gate);
            cl.push_back(cell_param);
        }
    }
};
int main(){
	Block block(3,3,3,4,5);
	cout<<block.ig[0].wil[0]<<endl;
	return 0;
}
