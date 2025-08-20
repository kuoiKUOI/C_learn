//
// Created by xiaoche on 25-7-16.
//
#include "iostream"
using namespace std;
int main() {
    system("chcp 65001");
    cout << "多维数组的遍历：" << endl;

    int arr[2][3] = {
        {1,2,3},
        {4,5,6}

    };

    // //while
    // int i = 0;
    // while (i < sizeof(arr) / sizeof(arr[0])) {
    //     cout << "while循环取出内容："<<arr[i] << endl;
    //     i++;
    // }
    // for循环
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        //cout << "for循环取出内容："<<arr[i] << endl;
        for (int j = 0; j < sizeof(arr[i]) / sizeof(arr[i][0]); j++)
        {

        cout << "二维数组取出内容："<<arr[i][j] << endl;

        }
    }
    cout << "-----------------------------" << endl;
    int v2[2][2][3] = {
        {{1,2,3},{4,5,6}},

        {{7,8,9},{10,11,12}}
    };

    for (int i = 0; i < sizeof(v2) / sizeof(v2[0]); i++) {
        for (int j = 0; j < sizeof(v2[i]) / sizeof(v2[i][0]); j++) {
            for (int k = 0; k < sizeof(v2[i][j]) / sizeof(v2[i][j][0]); k++) {
                cout << "三维数组取出内容："<<v2[i][j][k] << endl;
            }
        }
    }
    // // for的高级形式
    // for (int k : arr) {
    //     cout << "高级for循环取出内容："<<k << endl;
    // }
    return 0;
}