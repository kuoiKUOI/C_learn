//
// Created by xiaoche on 25-7-10.
//
#include <algorithm>

#include "iostream"

using namespace std;


int main() {

    system("chcp 65001");
    int i=1;
    while (i<=9) {

        int j= 1;
        while (j<=i) {

            cout << i << "×" << j << "=" << i*j << "\t";

            j++;

        }
        i++;
        cout << endl;
    }

    return 0;
}