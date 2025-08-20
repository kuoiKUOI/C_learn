//
// Created by xiaoche on 25-7-15.
//
#include "iostream"
using namespace std;
int main() {
    system("chcp 65001");
    cout << "数组的遍历：" << endl;

    int arr[] = {1, 2, 3, 4, 5};

    //while
    int i = 0;
    while (i < sizeof(arr) / sizeof(arr[0])) {
        cout << "while循环取出内容："<<arr[i] << endl;
        i++;
    }
    // for循环
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << "for循环取出内容："<<arr[i] << endl;

    }


    // for的高级形式
    for (int k : arr) {
        cout << "高级for循环取出内容："<<k << endl;
    }
    return 0;
}