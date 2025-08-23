//
// Created by xiaoche on 25-8-23.
//
#include "iostream"
using namespace std;


int main() {
    system("chcp 65001");
    struct Student{
        string name;
        string sex;
        double sge;
    };

    struct Student stu[3];
    stu[0]={"周杰伦","男",18};
    stu[1]={"王力宏","男",19};
    stu[2]={"张学友","男",20};
    for (int i=0;i<3;i++) {
        cout<<"当前下标："<<i<<"姓名："<<stu[i].name<<",性别："<<stu[i].sex<<",年龄："<<stu[i].sge<<endl;


    }
    struct Student stu2[3]={
        {"蔡徐坤","男",18},
        {"东北雨姐","女",19},
        {"王德法","男",20}
    };
    for (int i=0;i<3;i++) {
        cout<<"结构体数组2的当前下标："<<i<<"姓名："<<stu2[i].name<<",性别："<<stu2[i].sex<<",年龄："<<stu2[i].sge<<endl;
    }
    return 0;
}