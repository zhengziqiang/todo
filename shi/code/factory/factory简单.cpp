/*==============================================================================
    > File Name: factory简单.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月27日 星期六 22时53分37秒
 ==========================================================================*/

#include<iostream>
using namespace std;
enum PRODUCTTYPE{SFJ,XSL,NAS};//enum后面必须要有分号
class soap_base{
	public:
		virtual ~soap_base(){};
		virtual void show()=0;
};
class sfj_soap:public soap_base{
	public:
		void show(){
			cout<<"this is sfj soap"<<endl;
		}
};
class xsl_soap:public soap_base{
	public:
		void show(){
			cout<<"this is xsl soap"<<endl;
		}
};
class nas_soap:public soap_base{
	public:
		void show(){
			cout<<"this is nas soap"<<endl;
		}
};
class Factory{
	public:
		soap_base *create_soap(PRODUCTTYPE type){
			switch(type){
				case SFJ:
					return new sfj_soap();
					break;
				case XSL:
					return new xsl_soap();
					break;
				case NAS:
					return new nas_soap();
					break;
				default:
					break;
			}
		}
};
int main(){
	Factory factory;
	soap_base *psoap1=factory.create_soap(SFJ);
	psoap1->show();
	soap_base *psoap2=factory.create_soap(NAS);
	psoap2->show();
	delete psoap1;
	delete psoap2;
	return 0;
}
