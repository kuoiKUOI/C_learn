//
// Created by xiaoche on 25-9-1.
//
#include"iostream"
using namespace std;

void query_money(string *name,int *money) {
    cout<<"----------------查询余额----------------"<<endl;
    cout<<*name<<",您好，您的的余额为："<<*money<<"元"<<endl;

}
void save_money(string *name,int *money,int save_money) {
    cout<<"----------------存款----------------"<<endl;

    cout<<*name<<",您好，您存款："<<save_money<<"元成功"<<endl;
    *money+=save_money;
    cout<<*name<<",您好，您的的余额为："<<*money<<"元"<<endl;

}
void get_money(string *name,int *money,int get_money) {
    cout<<"----------------取款----------------"<<endl;

    cout<<*name<<",您好，您取款："<<get_money<<"元成功"<<endl;
    *money-=get_money;
    cout<<*name<<",您好，您的的余额为："<<*money<<"元"<<endl;

}

int menu(string *name) {
    cout<<"----------------主菜单----------------"<<endl;
    cout<<*name<<",您好，欢迎来到Kuo——ATM系统，请选择操作："<<endl;
    cout<<"1.查询余额"<<endl;
    cout<<"2.存款"<<endl;
    cout<<"3.取款"<<endl;
    cout<<"4.退出"<<endl;
    cout<<"请选择：";
    int choice;
    cin>>choice;
    return choice;
}
int main() {
    system("chcp 65001");
    string name;
    cout<<"请输入用户名：";
    cin>>name;
    int *money = new int;
    *money = 500000;
    bool flag=true;
    while(flag) {
       int choice = menu(& name);
        switch (choice) {
            case 1:
                query_money(& name, money);
                break;
            case 2:
                int num_for_save_money;
                cout<<"请输入存款金额：";
                cin>>num_for_save_money;
                save_money(& name,money,num_for_save_money);
                break;
            case 3:
                int num_for_get_money;
                cout<<"请输入取款金额：";
                cin>>num_for_get_money;
                get_money(& name,money,num_for_get_money);
                break;
            case 4:
                cout<<"欢迎下次光临"<<endl;
                flag=false;
                break;
            default:
                cout<<"输入错误，请重新输入"<<endl;

        }

    }


    delete money;
    return 0;
}