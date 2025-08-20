//
// Created by xiaoche on 25-7-5.
//
#include "iostream"
using namespace std;
int main() {
    system("chcp 65001");
    cout<<"猜一猜心里想的数字(1-10),有三次机会。"<<endl;
    int guess_num ;
    int num = 5;
    cout<<"请输入你猜的数字："<<endl;
    cin>>guess_num;

    if (guess_num==num)
    {
        cout<<"恭喜你一次就猜对了！！！"<<endl;

    }else
    {
        cout<<"不好意思你猜错了，请第二次猜测。"<<endl;
        cin>>guess_num;
        if (guess_num == num)
        {
            cout<<"恭喜你第二次猜对了！！！"<<endl;
        }else{
            cout<<"不好意思你猜错了，请最后一次次猜测。"<<endl;
            cin>>guess_num;
            if (guess_num == num) {
                cout<<"恭喜你第三次猜对了！！！"<<endl;
            }else {
                cout<<"不好意思你全都猜错了，三次机会用完。我想的数字是:"<<num<<endl;
            }
        }
    }

    return 0;
}