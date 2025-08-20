//
// Created by Kuo on 25-6-23.
//
// cout 可以自由组合<<打印单份或者多份内容到控制台。
#include "iostream"
using namespace std;
int main() {
   /*
    cout << "Hello, World!" << endl;
    cout << "I Love C++" << endl;
    cout << 10 << endl;
    cout << "I am 10 " << "years old!" << endl;
    */
    system("chcp 65001");    // 设置输出中文字体
    cout << "我爱C++" << endl;
    cout << "C++ is " << "the best " << "programming language." << endl;
    cout << "If you " << "want to "<<"learn IT,"<< "come to itheima."<< endl;
    return 0;
}




