//
// Created by xiaoche on 25-8-21.
//

#include "iostream"

using namespace std;
/*数组排序正序*/

// int main(){
//     system("chcp 65001");
//     int * parr = new int[10] {3,5,1,11,99,66,22,2,8,6};
//     int min;        //最小值
//     int min_index = 0;  //最小值下标
//
//
//     for(int i = 0; i < 9; i++)
//     {
//         // 找到最小值，执行9次
//         for (int j= i ; j < 10; j++)
//         {
//             if (j==i)
//             {// 第一次循环，min=parr[i]
//                 min = parr[j];  // 保存最小值
//                 min_index = j;  // 保存最小值下标
//             }
//             if (parr[j] < min)
//             {
//                 min = parr[j];
//                 min_index = j;
//             }
//
//         }
//         // 找到最小值后，将最小值和parr[i]交换位置
//         int temp = parr[i];
//         parr[i] = parr[min_index];
//         parr[min_index] = temp;
//
//         cout << "第" << i+1 << "轮排序：" << endl;
//         // cout << "最小值：" << temp << " 最小值下标：" <<  << endl;
//         for(int i = 0; i < 10; i++){
//             cout << parr[i] << " ";
//
//         }
//         cout << endl;
//     }
//     for(int i = 0; i < 10; i++){
//         cout << parr[i] << " ";
//     }

    /*数组排序正序*/


/*数组排序倒序*/
int main(){
    system("chcp 65001");
    int * parr = new int[10] {3,5,1,11,99,66,22,2,8,6};
    int max;        //最大值
    int max_index = 0;  //最大值下标


    for(int i = 0; i < 9; i++)
    {
        // 找到最大值，执行9次
        for (int j= i ; j < 10; j++)
        {
            if (j==i)
            {// 第一次循环，min=parr[i]
                max= parr[j];  // 保存最大值
                max_index = j;  // 保存最大值下标
            }
            if (parr[j] > max)
            {
                max = parr[j];
                max_index = j;
            }

        }
        // 找到最大值后，将最小值和parr[i]交换位置
        int temp = parr[i];
        parr[i] = parr[max_index];
        parr[max_index] = temp;

        cout << "第" << i+1 << "轮排序：" << endl;
        // cout << "最小值：" << temp << " 最小值下标：" <<  << endl;
        for(int i = 0; i < 10; i++){
            cout << parr[i] << " ";

        }
        cout << endl;
    }
    for(int i = 0; i < 10; i++){
        cout << parr[i] << " ";
    }

    return 0;
}