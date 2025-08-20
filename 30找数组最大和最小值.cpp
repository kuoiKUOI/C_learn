//
// Created by xiaoche on 25-7-15.
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

    int arr[10];
    for (int i = 0; i < 10; i++) {
        int number = get_random_number(1, 100);
        arr[i]= number;
        // cout << "第" << i + 1 << "个随机数：" << number << endl;
        // cout << "数组：" << arr[i] << endl;
    }
    int max = arr[0] , min = arr[0];
    for (int num : arr) {
        cout << num << " ";
        if (num > max) {
            max = num;
        }else if (num < min) {
            min = num;
        }
    }
    cout << endl << "最大值：" << max << endl << "最小值：" << min << endl;
    return 0;
}