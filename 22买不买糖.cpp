//
// Created by xiaoche on 25-7-3.
//
#include "iostream"
using namespace std;
int main() {
    system("chcp 65001");
    int num1, num2;
    cout <<"讨厌鬼参加了两次考试，只要第二次考试分数高于第一次分数，就给她买糖。"<<endl;
    cout <<"请输入讨厌鬼第一次的考试成绩(0-100)"<<endl;
    cin >> num1;
    cout <<"请输入讨厌鬼第二次的考试成绩(0-100)"<<endl;
    cin >> num2;
    string value = num1 > num2? "不买糖":"买糖";
    cout <<"对讨厌鬼的成绩进行判断,结果是："<<value<<endl;

    return 0;
}