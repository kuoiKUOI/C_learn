
#include <iostream>
using namespace std;
//
// Created by xiaoche on 25-8-23.
//
int main(){
    system("chcp 65001");

    struct Student    //结构体声明, 结构体名称为Student（一种新的数据类型）
    {
        string name;
        int age;
        string gender;
    };

    // 结构体变量声明，可以在前面添加struct关键字也可以省略
    struct Student std;
    std = { "小王", 18, "男" };
    //结构体变量是一个整体包装的多个变量，无法直接 cout输出，需要使用结构体成员访问符 .
    //需要访问它的每一个成员进行输出，语法为：结构体变量名.成员变量名
    cout<<std.name<<" "<<std.age<<" "<<std.gender<<endl;
    std::cout << "姓名：" << std.name << "，年龄：" << std.age << "，性别：" << std.gender << std::endl;

    struct Student std1 = {"小王", 18, "男"};
    cout<<"姓名："<<std1.name<<"，年龄："<<std1.age<<"，性别："<<std1.gender<<endl;

    return 0;
}