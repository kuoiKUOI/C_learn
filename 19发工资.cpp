//
// Created by xiaoche on 25-7-11.
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
    // int random_number = dis(gen);
    return dis(gen);
}

int main() {
       system("chcp 65001");
   cout<<"账户余额1W元，给20名员工发工资。"<<endl;
    int balance = 10000;
    for (int i = 1; i <= 20; i++) {
        int score = get_random_number(1, 10);
        if (score < 5) {
            cout << "员工" << i << "的得分是" << score << "，低于5,不发放工资。下一位" << endl;
            continue;
        }
            cout << "员工" << i << "的得分是" << score << "，发放工资。" << endl;
            balance -= 1000;
            cout << "向员工" << i << "发放工资1000元，账户余额还剩余" << balance << "元。" << endl;

        if (balance <= 0) {
            cout << "账户余额不足，结束发放。" << endl;
            break;
        }
    }

    return 0;
}
