//
// Created by xiaoche on 25-8-23.
//
#include "iostream"
using namespace std;


    int main()
    {
        struct Student{
            string name;
            int age = 11;
            string sex;
            double score;
        };
        struct Student stu;
        system("chcp 65001");
        for (int i=0;i<5;i++) {
            cout<<"正在录入学生"<<i+1<<"的信息"<<endl;
            cout<<"请输入姓名："<<endl;
            cin>>stu.name;
            cout<<"请输入性别："<<endl;
            cin>>stu.sex;
            cout<<"请输入成绩："<<endl;
            cin>>stu.score;
            cout<<"学生"<<i+1<<"信息录入完毕"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"学生"<<i+1<<"信息如下："<<endl;
            cout<<"姓名："<<stu.name<<endl;
            cout<<"年龄："<<stu.age<<endl;
            cout<<"性别："<<stu.sex<<endl;
            cout<<"成绩："<<stu.score<<endl;
            cout<<"--------------------------------------------------"<<endl;
        }
        cout<<"录入完毕"<<endl;

        return 0;


    }