//////
////// Created by liu on 18-12-5.
//////
//
//#include<iostream>
//using namespace std;
//
//int BinarySearch(int a[],int x,int n)
//{
//    int left=0;
//    int right=n-1;
//    while(left<=right)
//    {
//        int middle=(left+right)/2;
//        if(a[middle]==x)
//            return middle;
//        if(x>=a[middle])
//            left=middle+1;
//        else
//            right=middle-1;
//    }
//    return -1;
//}
//int main() {
//    int a[20] = {0, 1, 2, 10, 15, 16, 22, 24, 32, 35, 45, 47, 59, 62, 70, 73, 80, 88, 95, 99};
//    int x, p;
//    for (int i = 0; i < 20; i++) {
//        cout << a[i] << " ";
//    }
//    cout << "\n";
//    cout << "Please enter the number you want:";
//    cin >> x;
//    p = BinarySearch(a, x, 20);
//    if (p == -1)
//        cout << "该数不存在！" << endl;
//    else
//        cout << "成功！"  << endl;
//    return 0;
//}
