//
// Created by xiaoche on 25-8-23.
//
#include"iostream"
using namespace std;
int main()
{
    system("chcp 65001");
    struct student{
        string name;
        int age;
        string sex;

    };
    struct student stu;
    for (int i=0;i<3;i++) {
        cout<<"正在录入学生"<<i+1<<"的信息"<<endl;
        cout<<"请输入姓名："<<endl;
        cin>>stu.name;
        cout<<"请输入年龄："<<endl;
        cin>>stu.age;
        cout<<"请输入性别："<<endl;
        cin>>stu.sex;
        cout<<"学生"<<i+1<<"信息录入完毕"<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<"学生"<<i+1<<"信息如下："<<endl;
        cout<<"姓名："<<stu.name<<endl;
        cout<<"年龄："<<stu.age<<endl;
        cout<<"性别："<<stu.sex<<endl;
        cout<<"--------------------------------------------------"<<endl;
    }
cout<<"录入完毕"<<endl;

return 0;
}
