//
// Created by xiaoche on 25-7-5.
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
    int num = get_random_number(1, 10);

    string color = get_random_number(0,1)? "红色":"黑色";
    string shape;
    if (color == "红色") {
        shape = get_random_number(0,1)? "红桃":"方块";
    }
    else {
        shape = get_random_number(0,1)? "黑桃":"梅花";
    }
    cout<<num<<":"<<color<<":"<<shape<<endl;



    int guess_num;
    cout<<"请猜测扑克牌的数字（1-10），颜色，花色。"<<endl;
    cout << "请输入猜测的数字：" << endl;
    cin >> guess_num;
    if (guess_num == num) {
        cout << "恭喜你，猜对了！请猜测颜色（红色或黑色）：" << endl;
        string guess_color;
        cin >> guess_color;
        if (guess_color == color) {
            string guess_shape;
            if (color=="红色") {
                cout << "恭喜你，猜对了！请猜测花色（红桃或者方块）：" << endl;
               // string guess_shape;
                cin >> guess_shape;
                if (guess_shape == shape) {
                    cout << "恭喜你，全都猜对了！太棒啦！！！！"<<endl;
                }else {
                    cout<<"猜错了，游戏结束，花色是"<<shape<<endl;
                }
            }else {
                cout << "恭喜你，猜对了！请猜测花色（黑桃或者梅花）：" << endl;
                //string guess_shape;
                cin >> guess_shape;
                if (guess_shape == shape) {
                    cout << "恭喜你，全都猜对了！太棒啦！！！！"<<endl;
                }else {
                    cout<<"猜错了，游戏结束，花色是"<<shape<<endl;
                }
            }
        }else {
            cout<<"猜错了，游戏结束，颜色是"<<color<<endl;
        }
    }else {
        cout<<"猜错了，游戏结束。数字是"<<num<<endl;
    }
    //cout<<"游戏结束，完整的答案是："<<num<<":"<<color<<":"<<shape<<endl;
    return 0;
}