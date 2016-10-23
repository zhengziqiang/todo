
#include<iostream>
#include<map>
using namespace std;
int main(){
    map <int,int> m1;
    map <int,int>::iterator ma;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(3,30));
    for(ma=m1.begin();ma!=m1.end();ma++)
        cout<<ma->first<<" "<<ma->second<<endl;
    return 0;
}

//map的基本操作函数：
//      C++ Maps是一种关联式容器，包含“关键字/值”对
//      begin()          返回指向map头部的迭代器
//      clear(）         删除所有元素
//      count()          返回指定元素出现的次数
//      empty()          如果map为空则返回true
//      end()            返回指向map末尾的迭代器
//      equal_range()    返回特殊条目的迭代器对
//      erase()          删除一个元素
//      find()           查找一个元素
//      get_allocator()  返回map的配置器
//      insert()         插入元素
//      key_comp()       返回比较元素key的函数
//      lower_bound()    返回键值>=给定元素的第一个位置
//      max_size()       返回可以容纳的最大元素个数
//      rbegin()         返回一个指向map尾部的逆向迭代器
//      rend()           返回一个指向map头部的逆向迭代器
//      size()           返回map中元素的个数
//      swap()            交换两个map
//      upper_bound()     返回键值>给定元素的第一个位置
//      value_comp()      返回比较元素value的函数
