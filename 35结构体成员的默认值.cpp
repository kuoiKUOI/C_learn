//
// Created by xiaoche on 25-8-23.
//
#include "iostream"
using namespace std;
int main()
{
    system("chcp 65001");
    struct student
    {
        string name;
        string  major_code = "030030";
        float num = 1;
    };
    struct student s1 = {"小王"};
    struct student s2 = {"小虎","030031", 18};
    cout <<"学生1信息："<< s1.name << " " << s1.major_code << " " << s1.num << endl;
    cout <<"学生2信息："<< s2.name << " " << s2.major_code << " " << s2.num << endl;

    return 0;
}