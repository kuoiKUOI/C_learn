//
// Created by Kuo on 25-6-24.
//
#include "iostream"
using namespace std;
int main() {
    system("chcp 65001");

    //1.变量的声明（定义），变量类型 变量名;
    int age;        //整型的变量
    float height;   //实型的变量
    char gender;    //字符型的变量
    string name;    //字符串型变量
    int bmi;

    //2.变量的赋值，变量名 = 变量值;
    age = 21;
    height = 180;
    gender = 'M';
    name = "小明";
    cout<<name<<"的年龄："<<age<<endl;
    cout<<name<<"的性别："<<gender<<endl;
    cout<<name<<"的身高："<<height<<endl;
    //变量存储的数据是可以发生改变的;
    bmi = 30;
    cout<<"小明现在的BMI："<<bmi<<endl;
    //再一次使用赋值语句，就可以修改变量内记录的值
    bmi = 25;
    cout<<"经过一个月的减肥，小明的BMI："<<bmi<<endl;
    //进行数学计算，可以用：+、-、*/
    bmi = bmi - 2;
    cout<<"经过又一段时间的减肥，小明的BMI下降了2点，小明现在的BMI是："<<bmi<<endl;

    /*变量的快速定义*/
    //01、变量声明和赋值同步进行：
    int num = 10;
    string kind = "变量";
    //02、一次性声明多个变量
    int a,b,c ;
    a = 1;
    b = 2;
    c = 3;
    //03、一次性声明多个变量的同时进行赋值
    int q = 10, w = 20, e = 30;
    /*变量的快速定义*/
    cout << a <<","<< b <<","<< c << endl;
    cout << q <<","<< w <<","<< e << endl;

    return 0;
}
