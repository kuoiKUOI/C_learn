//
// Created by xiaoche on 25-8-23.
//
#include"iostream"
using namespace std;
int main() {
    system("chcp 65001");
    struct Student {
        string name;
        int age;
        string sex;

    };

    //创建结构体对象
    struct Student stu = {"小练", 18, "女"};
    //创建结构体指针，指向结构体对象
    struct Student * p = &stu;
    //通过结构体指针，访问结构体指针成员，要使用的符号是->
    cout << p->name << " " << p->age << " " << p->sex << endl;

    //通过new操作符创建结构体指针，申请结构体空间
    struct Student * p2 = new Student  {"小郭", 18, "男"};
    cout << p2->name << " " << p2->age << " " << p2->sex << endl;
    //释放结构体空间
    delete p2;


    return 0;
}