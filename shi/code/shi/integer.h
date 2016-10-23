/*==============================================================================
    > File Name: integer.h
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月27日 星期六 21时47分42秒
 ==========================================================================*/

#ifndef INTEGER
#define INTEGER
class Integer{
	private:
		int n;
	public:
		Integer(int m):n(m){

		}
		~Integer(){

		}
		Integer &operator++();
		Integer operator++(int n);
		void display() const;
};
#endif
