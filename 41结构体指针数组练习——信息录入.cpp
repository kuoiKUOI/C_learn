//
// Created by xiaoche on 25-8-26.
//
#include "iostream"
using namespace std;



int main() {
    system("chcp 65001");
    struct Student{
        string  name;
        int age;
        string  sex;
        float score;
    };
    struct Student *p =  new Student[5];


    for(int i = 0; i < 5; i++){
    cout << "请输入第" << i+1 << "个学生的信息：" << endl;
    cout << "姓名：";
        cin >> p[i].name;
    cout << "年龄：";
        cin >> p[i].age;
    cout << "性别：";
        cin >> p[i].sex;
    cout << "成绩：";
        cin >> p[i].score;
    cout<<"信息录入完毕！"<<endl;

    }
    for (int i = 0; i < 5; i++) {
        cout << "第" << i+1 << "个学生的信息为：" << endl;
        cout << "姓名：" << p[i].name <<"，年龄："<<p[i].age<<"，性别："<<p[i].sex<<"，成绩："<<p[i].score<< endl;
    }

    delete []p;

    return 0;
}