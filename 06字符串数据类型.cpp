//
// Created by xiaoche on 25-7-1.
//
#include "iostream"
using namespace std;
int main() {
    //c语言风格字符串
    char s1[] = "Hello World";  //字符数组的形式，通过赋值语句不可更改变量值
    char *s2 = "itheima";       //指针形式的字符串
    //C++语言风格的字符串
    string s3 = "c++ string";

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    //输入输出
    string str;
    cin >> str;
    cout << str << endl;
    return 0;
}