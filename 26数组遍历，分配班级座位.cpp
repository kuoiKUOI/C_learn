//
// Created by xiaoche on 25-7-16.
//
#include "iostream"
#include "random"
using namespace std;

int get_random_number(int min, int max) {
    //创建一个随机数生成器
    static random_device rd;
    static mt19937 gen(rd());
    //创建一个均匀分布的整数范围
    uniform_int_distribution<> dis(min, max);
    //生成一个随机数
    int random_number = dis(gen);
    return dis(gen);
}
int main() {
    system("chcp 65001");
    cout << "分配班级座位" << endl;
    cout << "--------------------------------------" << endl;

    string v2[2][2][5];
    string name[50] = { "张三", "李四", "王五", "赵六", "孙七", "周八", "吴九", "郑十", "王十一", "张十二",
        "王十三", "王十四", "王十五", "王十六", "王十七", "王十八", "王十九", "王二十", "王二十一", "王二十二",
        "王二十三", "王二十四", "王二十五", "王二十六", "王二十七", "王二十八", "王二十九", "王三十", "王三十一",
        "王三十二", "王三十三", "王三十四", "王三十五", "王三十六", "王三十七", "王三十八", "王三十九", "王四十",
        "王四十一", "王四十二", "王四十三", "王四十四", "王四十五", "王四十六", "王四十七", "王四十八", "王四十九",
        "王五十", "王五十一", "王五十二"};
    // cout << name[0] << endl;

    for (int i = 0; i < sizeof(v2) / sizeof(v2[0]); i++) {
        for (int j = 0; j < sizeof(v2[i]) / sizeof(v2[i][0]); j++) {
            for (int k = 0; k < sizeof(v2[i][j]) / sizeof(v2[i][j][0]); k++) {

                string major = i==0?"物理" : "计算机";
                string class_name = j==0?"一班" : "二班";
                int student_id = k+1;
                string student_name = name[get_random_number(0, sizeof(name) / sizeof(name[0])-1)];
                string msg =  major + "专业," + class_name + ", " +"座位号为:" + to_string(student_id) + "的学生, 姓名为:"+ student_name;
                v2[i][j][k] = msg;
            }
        }
    }

    cout << "座位分配完毕，开始输出" << endl;
    for (int i = 0; i < sizeof(v2) / sizeof(v2[0]); i++) {
        for (int j = 0; j < sizeof(v2[i]) / sizeof(v2[i][0]); j++) {
            for (int k = 0; k < sizeof(v2[i][j]) / sizeof(v2[i][j][0]); k++) {
                cout << v2[i][j][k] << endl;




            }
        }
    }



    return 0;
}