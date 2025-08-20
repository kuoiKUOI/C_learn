//
// Created by xiaoche on 25-7-9.
//
#include "iostream"
#include "random"
using namespace std;





int main() {
    system("chcp 65001");
    int k=1;
    int sum=0;
    while (k<=100) {
        // cout<<k<<" ";
        sum = sum+k;
        k++;


    }
    cout<<"1-100的和为："<<sum<<endl;
    return 0;
}