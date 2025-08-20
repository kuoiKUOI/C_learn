//
// Created by xiaoche on 25-7-5.
//
#include "iostream"
using namespace std ;
int main()
{
    system("chcp 65001");
    /*int num;
    cout << "请输入一个数字（1-7）：";
    cin >> num;
    switch (num)
    {
        case 1:
            cout << "星期一" << endl;
          break;
        case 2:
            cout << "星期二" << endl;
            break;
        case 3:
            cout << "星期三" << endl;
           break;
        case 4:
            cout << "星期四" << endl;
           break;
        case 5:
            cout << "星期五" << endl;
           break;
        case 6:
            cout << "星期六" << endl;
           break;
        default:
            cout << "星期日" << endl;

    }*/
    int num;
    cout << "请选择直播场景，输入对应的场景代码数字。"<< endl;
    cout << "1. 仅输出屏幕,2.输出屏幕+摄像头与画面,3.仅输出摄像头：" << endl;
    cin >> num;
    switch (num) {
        case 1:
            cout << "已经切换为场景1，用户只能看到屏幕画面。" << endl;
            break;
        case 2:
            cout << "已经切换为场景2，输出屏幕+摄像头与画面" << endl;
            break;
        case 3:
            cout << "已经切换为场景3,仅输出摄像头" << endl;
            break;
        default:
            cout << "输入错误，请重新输入！" << endl;
    }
    return 0;
}