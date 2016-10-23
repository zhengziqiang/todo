/*==============================================================================
    > File Name: 堆栈类模板.cpp
    > Author: zzq
    > Mail: zhengziqiang1@gmail.com 
    > Created Time: 2016年08月25日 星期四 20时38分06秒
 ==========================================================================*/

#include<iostream>
using namespace std;
template <class T>
class Tstack{
	int size;
	int top;
	T *stackptr;
	public:
	Tstack(int s=10);
	~Tstack(){
		delete []stackptr;
	}
	Tstack(Tstack&);
	Tstack&operator=(Tstack&);
	bool push(T&);
	bool pop(T&);
	int get_count()const{
		return top+1;
	}
	int get_size(){
		return size;
	}
	bool is_empty(){
		return top==-1;
	}
	bool is_full(){
		return top==size-1;
	}
};
template <class T>
Tstack<T>::Tstack(int s){
	size=s>0?s:10;
	top=-1;
	stackptr=new T[size];
}
template <class T>
Tstack <T>::Tstack(Tstack &ts){
	top=ts.top;
	size=ts.size;
	stackptr=new T[size];
	for(int i=0;i<size;i++){
		stackptr[i]=ts.stackptr[i];
	}
}
template <class T>
Tstack<T>&Tstack<T>::operator=(Tstack<T>&ts){
	delete []stackptr;
	top=ts.size;
	size=ts.size;
	for(int i=0;i<size;i++){
		stackptr[i]=ts.stackptr[i];
	}
	return *this;
}
template <class T>
bool Tstack<T>::push(T &push_value){
	if(!is_full()){
		stackptr[++top]=push_value;
		return true;
	}
	return false;
}
template <class T>
bool Tstack<T>::pop(T &pop_value){
	if(is_empty()){
		pop_value=stackptr[top--];
		return true;
	}
	return false;
}
