//
// Created by xiaoche on 25-8-26.
//
#include "iostream"
using namespace std;
int get_min(int a,int b,int c)
{

    return a<b?a<c?a:c:b<c?b:c;
}

int main() {
system("chcp 65001");
int min_number = get_min(10,20,30);

cout<<"最小值为："<<min_number<<endl;


}