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
        int age =11;
        string sex = "男";

    };
    struct Student stu[3] = {{"小王"},{"林俊杰"},{"蔡依林"}};
    struct Student *p1 = stu;    //不用加地址符号，因为数组的对象本质上就是地址

    cout <<"数组的第一个元素记录的name是"<< p1[0].name << endl;
    cout <<"数组的第二个元素记录的name是"<< p1[1].name << endl;
    cout <<"数组的第三个元素记录的name是"<< p1[2].name << endl;
    struct Student *p2 = new Student [3]  {{"小王"},{"林俊杰"},{"蔡依林"}};
    cout <<"数组2的name是"<< p2[0].name << endl;
    cout <<"数组2的name是"<< p2[1].name << endl;
    cout <<"数组2的name是"<< p2[2].name << endl;
    delete []p2;
    return 0;
}
