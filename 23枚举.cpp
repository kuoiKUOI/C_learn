//
// Created by xiaoche on 25-7-9.
//
#include "iostream"
using namespace std;




int main() {
    system("chcp 65001");
    /*
     * enmu 枚举类型名字{
     * 枚举值1,
     * 枚举值2,
     * 枚举值3
     * }
     */
    //询问小朋友喜欢的颜色
    enum Color {        //本质上就是数字
        RED ,           //以0开始，但数字标号可以自己定义
        GREEN,
        BLUE
    };
    int num ;
    cout << "请输入小朋友喜欢的颜色：0红色，1绿色，2蓝色" << endl;
    cin >> num;
    switch (num) {
        case RED:
            cout << "小朋友喜欢红色" << endl;
            break;
        case GREEN:
            cout << "小朋友喜欢绿色" << endl;
            break;
        case BLUE:
            cout << "小朋友喜欢蓝色" << endl;
            break;
        default:
            cout << "小朋友输入错误" << endl;
            break;
    }

    return 0;

}