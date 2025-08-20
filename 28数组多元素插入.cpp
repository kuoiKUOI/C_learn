//
// Created by xiaoche on 25-7-26.
//
#include "iostream"
using namespace std;
int main(){
    int * pArr = new int[5]{1,3,5,7,9};
    int * pArrNew = new int[7];

    int count = 0;
    for(int i = 0; i < 7; i++){
        if (i == 1 ){
            pArrNew[i] = 11;
            count++;
            continue;
        } else if (i == 3)
        {
            pArrNew[i] = 66;
            count++;
            continue;

        }
        pArrNew[i] = pArr[i-count];
        cout << i << ":" << pArrNew[i] << " ";
        cout <<i-count << ":" << pArr[i-count] << endl;
    }

    for(int i = 0; i < 7; i++){
        cout << pArrNew[i] << " ";
    }
    delete [] pArr;
    delete [] pArrNew;

    return 0;
}