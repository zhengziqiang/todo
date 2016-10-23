/*==============================================================================
    > File Name: class_block.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月19日 星期五 16时03分23秒
 ==========================================================================*/

#include<iostream>
using namespace std;
class Block{
public:
    class igate{
    public:
        vector <double> wil;
        vector <double> whl;
        vector <double> wcl;
        vector <double> alt;
        vector <double> blt;
        vector <double> dwil;
        vector <double> dwhl;
        vector <double> dwcl;
        double dib;
        double ib;
        igate(int inum,int hnum,int t){
            get_rng(wil,inum);
            get_rng(whl,hnum);
            vector <double> param(t,0.0);
            alt=param;
            blt=param;
            get_rng(wcl,hnum);
            ib=getrand();
            dib=0;
            dwil=param;
            dwhl=param;
            dwcl=param;
        }
    };
    class fgate{
    public:
        vector <double> wif;
        vector <double> whf;
        vector <double> wcf;
        vector <double> dwif;
        vector <double> dwhf;
        vector <double> dwcf;
        vector <double> aft;
        vector <double> bft;
        double fb;
        double dfb;
        fgate(int inum,int hnum,int t){
            get_rng(wif,inum);
            get_rng(whf,hnum);
            vector <double> param(t,0.0);
            aft=param;
            bft=param;
            get_rng(wcf,hnum);
            fb=getrand();
            dfb=0;
            dwif=param;
            dwhf=param;
            dwcf=param;
        }
    };
    class wgate{
    public:
        vector <double> wiw;
        vector <double> whw;
        vector <double> wcw;
        vector <double> dwiw;
        vector <double> dwhw;
        vector <double> dwcw;
        vector <double> awt;
        vector <double> bwt;
        double wb;
        double dwb;
        wgate(int inum,int hnum,int t){
            get_rng(wiw,inum);
            get_rng(whw,hnum);
            vector <double> param(t,0.0);
            awt=param;
            bwt=param;
            get_rng(wcw,hnum);
            wb=getrand();
            dwb=0;
            dwiw=param;
            dwhw=param;
            dwcw=param;
        }
    };
    class cell{
     public:
        vector <double> wic;
        vector <double> whc;
        vector <double> dwic;
        vector <double> dwhc;
        vector <double> act;
        vector <double> sct;
        vector <double> bct;
        double cb;
        double dcb;
        cell(int inum,int hnum,int t){
            get_rng(wic,inum);
            get_rng(whc,hnum);
            vector <double> param(t,0.0);
            act=param;
            sct=param;
            bct=param;
            dwic=param;
            dwhc=param;
            cb=getrand();
            dcb=0;
        }
    };
    int nb;
    vector <igate> ig;
    vector <fgate> fg;
    vector <wgate> wg;
    vector <cell> cl;
    struct dparam dam;
    vector <vector <double> > weight_co;
    vector <vector <double> > dwco;
    void init_dam(struct dparam &dam,int t,int m);
    Block(int m,int inum,int onum,int t){
        nb=m;
        init_weight(weight_co,onum,hnum);
        vector <vector <double> > param(onum,vector <double>(hnum,0.0));
        dwco=param;
        for(int i=0;i<nb;i++){
            igate input_gate(inum,nb,t);
            fgate forget_gate(inum,nb,t);
            wgate output_gate(inum,nb,t);
            cell cell_param(inum,nb,t);
            ig.push_back(input_gate);
            fg.push_back(forget_gate);
            wg.push_back(output_gate);
            cl.push_back(cell_param);
        }
    }
};
