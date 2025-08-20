//
// Created by xiaoche on 25-7-25.
//
#include "iostream"
using namespace std;
int main(){
    int * pArr = new int[10]{3,5,1,11,99,66,22,2,8,6};
    int * pArrNew = new int[8];
    //移除第0号和第5号元素，并赋给新数组
    int count = 0;
    for(int i = 0; i < 10; i++){
        if (i != 0 && i != 5 ){
            pArrNew[count] = pArr[i];
            cout << i <<" ";
            cout <<count<< " "<<endl;
            count++;
        }
    }

    for(int i = 0; i < 8; i++){
        cout << pArrNew[i] << " ";
    }
    delete [] pArr;
    delete [] pArrNew;

    return 0;
}