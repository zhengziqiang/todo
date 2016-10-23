
#include <iostream>
using namespace std;

class A {
public:
    static int num;    //    统计创建了多少个实例
    A () {num++};    //    每创建一个实例，就让num自增1

    //    返回通过构造函数所创建过的A类实例的数目
    static int how_many_instance() {
        return num;
    }
}

static A::num = 0;    //    需要在类申明的外部单独初始化！


int main() {
    cout << A::how_many_instance() << endl;
    A a, b, c, d;
    cout << A::how_many_instance() << endl;
    system("pause");
}
