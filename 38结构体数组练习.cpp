//
// Created by xiaoche on 25-8-23.
//

#include"iostream"
using namespace std;
int main()
{
    system("chcp 65001");
    struct Student {
        string name;
        int age;
        string sex;

    };
    struct Student stu[5];
    for (int i=0;i<5;i++) {
        cout<<"正在录入学生"<<i+1<<"的信息"<<endl;
        cout<<"请输入姓名："<<endl;
        cin>>stu[i].name;
        cout<<"请输入年龄："<<endl;
        cin>>stu[i].age;
        cout<<"请输入性别："<<endl;
        cin>>stu[i].sex;
        cout<<"学生"<<i+1<<"信息录入完毕"<<endl;
        cout<<"--------------------------------------------------"<<endl;
        // cout<<"学生"<<i+1<<"信息如下："<<endl;
        // cout<<"姓名："<<stu[i].name<<endl;
        // cout<<"年龄："<<stu[i].age<<endl;
        // cout<<"性别："<<stu[i].sex<<endl;
        // cout<<"--------------------------------------------------"<<endl;
    }
    for (int i=0;i<5;i++) {
        cout<<"学生"<<i+1<<"的信息"<<endl;
        cout<<"姓名："<<stu[i].name<<endl;
        cout<<"年龄："<<stu[i].age<<endl;
        cout<<"性别："<<stu[i].sex<<endl;
        cout<<"--------------------------------------------------"<<endl;
    }
    cout<<"录入完毕"<<endl;

    return 0;
}
