/*==============================================================================
    > File Name: complex.h
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月27日 星期六 16时52分38秒
 ==========================================================================*/

#ifndef COMPLEX_H
#define COMPLEX_H
class Complex{
	private:
		int real;
		int image;
	public:
		Complex(int m,int n):real(m),image(n){

		}
		~Complex();
		Complex &add(const Complex &other);
		void display()const;
		Complex operator+(const Complex &other);
		friend Complex operator+(const Complex &c1,const Complex &c2);
};
#endif
