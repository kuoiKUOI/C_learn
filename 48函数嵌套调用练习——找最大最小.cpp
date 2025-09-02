//
// Created by xiaoche on 25-8-27.
//
#include "iostream"
using namespace std;
int findMax(int a ,int b) {

   return a>b?a:b;
}
int findMin(int a ,int b) {

    return a<b?a:b;
}
struct node {
    int max;
    int min;
};
struct node get_max_and_min(int a, int b) {


    int max = findMax(a,b);
    int min = findMin(a,b);
    struct node v = {max,min};
    //返回一个结构体
    return v;
}
int main() {
    system ("chcp 65001");
    int a,b;
cout<<"请输入两个数字："<<endl;
    cin>>a>>b;
    //函数get_max_and_min返回的是结构体，所以定义结构体v去接收
    struct node v = get_max_and_min(a,b);
    cout<<"最大值为："<<v.max<<endl;
    cout<<"最小值为："<<v.min<<endl;
    return 0;
}