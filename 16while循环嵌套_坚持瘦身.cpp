//
// Created by xiaoche on 25-7-10.
//

#include <algorithm>

#include "iostream"
#include "random"
using namespace std;

// int get_random_number(int min, int max) {
//     //创建一个随机数生成器
//     static random_device rd;
//     static mt19937 gen(rd());
//     //创建一个均匀分布的整数范围
//     uniform_int_distribution<> dis(min, max);
//     //生成一个随机数
//     int random_number = dis(gen);
//     return dis(gen);
// }
int main() {

    system("chcp 65001");
    cout << "小明有点胖，需要减掉10斤体重，计时5天，每天目标2斤。加油！！！" << endl;
    int day = 1;
    int weight = 0;
    while(day <= 5) {

        int time = 1;
        int count = 1;
        cout << "第" << day << "天，开始减重" << endl;
        while(time <= 3) {
            cout << "开始减肥第" << day << "天的第"<<time<<"个俯卧撑; ";
            time++;
        }
        weight += 1;
        cout<<endl;
        cout<<"第"<<day<<"天的3个俯卧撑做完,体重减少1斤，目前累计减少体重"<<weight << "斤"<<endl;
        while (count<=3) {
            cout << "开始减肥第" << day << "天的第"<<count<<"个400米冲刺跑! ";
            count++;
        }
        weight += 1;
        cout<<endl;
        cout<<"第"<<day<<"天的3个400米冲刺跑做完,体重减少"<<weight << "斤" <<endl;
        day++;
    }
    cout <<"5天减肥已完成，小明已经累计成功减掉"<<weight<<"斤体重，恭喜！" << endl;

    return 0;
}