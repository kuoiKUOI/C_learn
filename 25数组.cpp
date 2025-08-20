//
// Created by xiaoche on 25-7-13.
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

    int v[10];
    int right = 0;
    cout << "请输入10个数：" << endl;
    for (int i = 0; i < 10; i++) {
        int number = get_random_number(1, 10);

        cout << "请输入第" << i + 1 << "个数：";
        cin >> v[i];
        cout << number << " "<<endl;
        if (number == v[i]) {
            right++;
        }
    }
    cout << "你输入的数中有" << right << "个是正确的" << endl;

    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;

    return 0;
}