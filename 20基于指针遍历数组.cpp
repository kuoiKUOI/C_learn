//
// Created by xiaoche on 25-7-25.
//
#include "iostream"
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    char b[] = {'a','b','c','d','e'};
    int *p = a;
    char *q= b;
    for (int i=0; i < 10; i++) {
        cout << *p << " ";

        *p++;

    }
    cout<<endl;
    for (int j=0; j < 5; j++) {
        cout << *q << " ";
        *q++;

    }

    return 0;
}