//
// Created by xiaoche on 25-7-9.
//
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
    int number = get_random_number(1, 100);
    cout<<number<<endl;
    int guess_num;
    int guess_count = 1;
    cout<<"请猜测一个数字（1-100），请输入你猜测的数字："<<endl;
    cin >> guess_num;

    while (guess_num!=number) {
        guess_count++;
        cout<<"你猜的数字是："<<guess_num<<"不好意思你猜错了!"<<endl;
    if (guess_num< number) {
        cout<<"猜测的数字小了,请继续猜测"<<endl;
        cin >> guess_num;
    }else {
        cout<<"猜测的数字大了，请继续猜测"<<endl;
        cin >> guess_num;
    }
    }
    cout<<"你猜的数字是："<<guess_num<<"恭喜你猜对了!"<<endl;
    cout<<"你一共猜了"<<guess_count<<"次"<<endl;
    return 0;
}