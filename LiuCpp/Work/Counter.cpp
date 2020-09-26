////////
//////// Created by liu on 18-5-26.
////////
////
//////splic方法
//
////计算器
//#include<iostream>
//using namespace std;
//extern int mycounter();
//
////typedef int (*ptr)(int,int);
//
////struct count{
////
////};
//
//double getMethod1(double &a, double b, string str) {
//    double c;
//    if(str[a]>='0'&&str[a]<='9') {
//        c = str[a++] - '0';
//        while (a<b && str[a] >= '0'&&str[a] <= '9') {
//            c *= 10;
//            c += str[a++] - '0';
//        }
//    }
//    return c;
//}
//
//
//double getMethod2(double &a, double b, string str) {
//    double c;
//    c = getMethod1(a, b, str);
//    while (1) {
//        if (a < b&&str[a] == '*') {
//            c*=getMethod1(++a,b,str);
//        }
//        else if (a<b && str[a] == '/') {
//            c /= getMethod1(++a, b, str);
//        }
//        else {
//            return c;
//        }
//    }
//}
//
//double getMethod3(double a, double b, string str) {
//    double sum = 0;
//    if (str[a] != '-')
//    {
//        sum = getMethod2(a, b, str);
//        while (a < b) {
//            if (str[a] == '+') {
//                sum += getMethod2(++a, b, str);
//            }
//            if (str[a] == '-') {
//                sum -= getMethod2(++a, b, str);
//            }
//        }
//    }
//    return sum;
//}
//
//int mycounter() {
//    cout<<"请输入计算表达式，回车确认:\n";
//    string x;
//    while (cin >> x) {
//        cout << getMethod3(0, x.length(),x) << endl;
//        cout<<"\n";
//        mycounter();
//    }
//}
//int main(int num,char *args[]) {
//    mycounter();
//    return 0;
//}
//
//
