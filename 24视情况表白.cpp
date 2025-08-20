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
    int random_number = dis(gen);
    return dis(gen);
}

int main() {
    int num = 1;
    int num_2=1;
    system("chcp 65001");
    for (int i = 1; i <= 30; i++) {
        cout << "第 " << i << " 天：" << endl;
        int number_1 = get_random_number(1,10);
        int number_2 = get_random_number(0,1);
        // cout << number_1 << endl;
        // cout << number_2 << endl;
        cout<<"给小美送花。"<<endl;
        if (number_1 == num) {
            cout<<"小美愤怒了！！！,表白计划彻底失败"<<endl;
            break;
        }
        if (number_2 == num_2) {
            cout<<"小美不高兴了！！！第二天继续表白"<<endl;
            continue;

        }
        cout << "说喜欢小美。" << endl;
        cout << "邀请小美一起看电影。" << endl;
        cout << "今天的表白很顺利。" << endl;

    }

    return 0;
}