//
// Created by xiaoche on 25-9-1.
//
#include "iostream"
using namespace std;

void func(int a[], int length)
{
      int min,min_index ;
      for (int i = 0; i < length; i++)
      {
            for (int j = i; j < length; j++)
            {

                  if (j==i) {
                        min = a[j];
                        min_index = j;
                  }
                  if (a[j] < min) {
                        min = a[j];
                        min_index = j;
                  }
                  cout << "i:" << i << " j:" << j << " min:" << min << " min_index:" << min_index << endl;
            }
            int tmp = a[i];
            a[i] = a[min_index];
            a[min_index] = tmp;
      }

}

int main() {
      int a[6] = {66,55,33,1,3,2};
      func(a, 6);
      for (int i = 0; i < 6; i++)
      {
            cout << a[i] << " ";
      }

      return 0;
}