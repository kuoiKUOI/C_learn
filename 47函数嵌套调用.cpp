//
// Created by xiaoche on 25-8-27.
//
#include "iostream"
using namespace std;
void send_food() {
    cout << "小美，我给你买了早餐！" << endl;
}

void send_flower() {
    cout << "小美，我给你买了花！" << endl;
}
void send_message() {
    cout << "小美，我喜欢你！" << endl;
}
void watch_movie() {
    cout << "小美，我们一起看电影吧！" << endl;
}
void i_like_you(int num) {
    switch (num) {
        case 1:
            send_food();
            send_flower();
            send_message();
            break;
        case 2:
            send_flower();
            send_message();
            watch_movie();
            break;
        case 3:
            watch_movie();
            send_flower();
            send_message();
            break;
        case 4:
            watch_movie();
            break;
        default:
            cout << "小美，你喜欢我吗？呜呜呜~~~~" << endl;
            break;
    }
}
int main() {
    system("chcp 65001");
    cout << "今天心情不错执行方案1：" << endl;
    i_like_you(1);
    cout << "今天心情一般执行方案2：" << endl;
    i_like_you(2);
    cout << "今天心情一般执行方案3：" << endl;
    i_like_you(3);
    cout << "今天心情一般执行方案4：" << endl;
    i_like_you(4);
    cout << "失败了，怀疑自己" << endl;
    i_like_you(5);
    return 0;
}
