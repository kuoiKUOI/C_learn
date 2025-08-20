//
// Created by xiaoche on 25-7-4.
//
#include "iostream"
using namespace std;
int main() {
    system("chcp 65001");
    cout<<"小明今天发工资了"<<endl;
    int money ;
    cout<<"请输入小明的工资："<<endl;
    cin>>money;

    if (money>=10000)
    {
        cout<<"买个新电脑去！！花了9900元。"<<endl;
        money-=9900;
    }

    cout<<"今天发的工资还剩下"<<money<<"元。"<<endl;




    return 0;
}