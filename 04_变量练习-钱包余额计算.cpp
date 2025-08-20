//
// Created by Kuo on 25-6-24.
//
#include "iostream"
using namespace std;
int money = 50;


int main() {
     system("chcp 65001");
    // cout<<"小明余额"<<money<<"元。"<<endl;
    // money = money - 5 ;
    // cout<<"购买冰激凌花费5元，剩余余额"<<money<<"元。"<<endl;
    // money = money + 10;
    // cout<<"转手卖出奶茶得到10元，剩余余额"<<money<<"元。"<<endl;
    // money = money - 2;
    // cout<<"购买彩票花费2元，剩余余额"<<money<<"元。"<<endl;
    // money = money * 2;
    // cout<<"彩票中奖余额翻倍，剩余余额"<<money<<"元。"<<endl;


    //赋值运算
    cout<<"小明余额"<<money<<"元。"<<endl;
    money -= 5;
    cout<<"购买冰激凌花费5元，剩余余额"<<money<<"元。"<<endl;
    money += 10;
    cout<<"转手卖出奶茶得到10元，剩余余额"<<money<<"元。"<<endl;
    money -= 2;
    cout<<"购买彩票花费2元，剩余余额"<<money<<"元。"<<endl;
    money *= 2;
    cout<<"彩票中奖余额翻倍，剩余余额"<<money<<"元。"<<endl;
    return 0;
}