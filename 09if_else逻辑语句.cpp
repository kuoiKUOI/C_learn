//
// Created by xiaoche on 25-7-4.
//

#include "iostream"
using namespace std;
int main() {
    system("chcp 65001");
    cout<<"欢迎来到黑马动物园"<<endl;
    int height ;
    cout<<"请输入你的身高（cm)："<<endl;
    cin>>height;

    if (height>120)
    {
        cout<<"您的身高超出120cm,游玩需要购票10元"<<endl;

    }else
    {
        cout<<"您的身高未超出120cm,可以免费游玩。"<<endl;
    }

    cout<<"祝您游玩愉快！"<<endl;




    return 0;
}