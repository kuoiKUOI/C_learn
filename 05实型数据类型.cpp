//
// Created by xiaoche on 25-6-30.
//
#include "iostream"
using namespace std;
int main() {
 float num1 = 1234567890;   //只提供了7位的准确输出
 float num2 = 1.234567890;
 cout <<fixed;   //设置小数显示
 cout.width(20);   //设置显示宽度
 cout << num2 <<","<<sizeof(num2) << endl;
 double num3 = 1234567890.1234567890;     //16个有效位数，不同的编译器也会有差异
 cout << num3 <<" , "<<sizeof(num3) << endl;

 return 0;
}