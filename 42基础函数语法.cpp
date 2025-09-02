//
// Created by xiaoche on 25-8-26.
//
#include "iostream"
using namespace std;

    int get_maxnum(int a, int b)
    {
        int max = a > b ? a : b;
        // int max = a;
        // if (b > max)
        // {
        //     max = b;
        // }
        return max;

    }


int main() {
    system("chcp 65001");
    int max_num = get_maxnum(10, 20);
        cout <<"最大值为："<< max_num << endl;



    return 0;
}