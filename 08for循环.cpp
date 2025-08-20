//
// Created by xiaoche on 25-7-10.
//
#include <algorithm>
#include "random"
#include "iostream"

using namespace std;
int get_random_number(int min, int max) {
    //创建一个随机数生成器
    static random_device rd;
    static mt19937 gen(rd());
    //创建一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);
    //生成一个随机数
    int random_number = dis(gen);
    return dis(gen);
}

int main() {

    system("chcp 65001");

    /*九九乘法表*/
    // for (int i=1;i<10;i++) {
    //     for (int j=1;j<=i;j++) {
    //         cout <<i<<"*"<<j<<"="<<i*j<<"\t";
    //     }
    //     cout << endl;
    // }


    /*for和while循环嵌套的九九乘法表*/
    // for (int i=1;i<10;i++) {
    //     int j=1;
    //     while (j<=i) {
    //
    //         cout <<i<<"*"<<j<<"="<<i*j<<"\t";
    //         j++;
    //     }
    //     cout << endl;
    // }


    /*1-100偶数之和*/
    // int sum=0;
    // for (int i=0;i<=100;i+=2) {
    //
    //     sum += i;
    //
    // }
    // cout << sum <<"\t";
    /*1-100偶数之和*/


    int number = get_random_number(1,10);
    cout << number << endl;
    int num;
    cout << "请输入你猜的数字：" << endl;

    // cin >> num;
    for (bool i=false;!i;) {
        cin >> num;
        if (num == number) {
            cout << "恭喜你猜对了" << endl;
            i=true;
        }else if (num > number) {
            cout << "你猜的数字太大了,请重新猜测：" << endl;
            // cin >> num;
        }else {
            cout << "你猜的数字太小了，请重新猜测：" << endl;

        }

    }
    return 0;
}