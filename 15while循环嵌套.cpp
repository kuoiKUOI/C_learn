//
// Created by xiaoche on 25-7-10.
//
#include <algorithm>

#include "iostream"
#include "random"
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
    int is_continue = true;
    int count = 1 ;
    while (is_continue) {
        cout<<"今天又是新的一天，开始向小美表白。"<<endl;
        cout<<"小美我喜欢你！"<<endl;
        int number = get_random_number(1, 10);
        cout<<number<<endl;

        int i = 0;
        while (i < 3) {
            cout<<"送给小美一朵玫瑰花！！！"<<endl;
            i++;
        }
        int num = 1;
        if (num == number) {
            cout<<"表白成功！！！"<<endl;
            is_continue = false;
        }else {
            cout<<"小美拒绝了，请重新开始！"<<endl;
            count++ ;
        }

    }
    cout<<"一共表白了"<< count <<"次"<<endl;
    return 0;
}