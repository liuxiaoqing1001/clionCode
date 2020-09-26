////
//// Created by liu on 18-12-19.
////
//
//#include<stdlib.h>
////#include<iomanip>
////#include<time.h>
//#include<iostream>
//using namespace std;
//#define ElemType int
//const int N=20;
////#define 1+rand(1,100);
////待排序元素用一个数组R表示，数组有n个元素，直接插入排序
//void InsertSort(ElemType R[],int n) {
//    int cn = 0;                                    //比较次数
//    int en = 0;                                    //交换次数
//    for (int i = 1; i < n; i++) {
//        ElemType temp=R[i];
//        int j=i-1;
//        while((j>=0)&&(temp<R[j])){
//            cn++;
//            R[j+1]=R[j];
//            en++;
//            j--;
//        }
//        R[j+1]=temp;
//        en++;
//    }
//    cout << "The number of comparisons：" << cn << "\nThe number of exchanges：" << en << endl;
//
//}
//
////希尔排序
//void ShellSort(ElemType R[], int n) {
//    int cn = 0;
//    int en = 0;
//    int dk[] = {5, 3, 1};
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < n; j++) {
//            for (int k = j + dk[i]; k < n;) {
//                cn++;
//                if (R[j] >R[k]) {
//                    ElemType temp = R[j];
//                    R[j] = R[k];
//                    R[k] = temp;
//                    en++;
//                }
//                k = k + dk[i];
//            }
//        }
//    }
//    cout << "The number of comparisons：" << cn << endl;
//    cout << "The number of exchanges：" << en << endl;
//}
//
//
////冒泡排序
//void BubbleSort(ElemType R[], int n) {
//    int cn = 0;
//    int en = 0;
//    for(int i=n;i>0;i--){
//        for(int j=0;j<i;j++){
//            if(j!=n-1){
//                cn++;
//                if (R[j] >R[j+1]) {
//                    ElemType temp = R[j];
//                    R[j] = R[j+1];
//                    R[j+1] = temp;
//                    en++;
//                }
//            }
//        }
//    }
//    cout << "The number of comparisons：" << cn << endl;
//    cout << "The number of exchanges：" << en << endl;
//}
//
//
////快速排序
//void QuickSort(ElemType R[],int lefl,int right) {
//
//
//}
//
////直接选择排序
//void SelectSort(ElemType R[], int n) {
//    int cn = 0;
//    int en = 0;
//    for(int i=0;i<n;i++){
//        int small=i;
//        for(int j=i+1;j<n;j++){
//            cn++;
//            if(R[small]>R[j]){
//                small=j;
//            }
//        }
//        if(i!=small){
//            ElemType temp = R[i];
//            R[i] = R[small];
//            R[small] = temp;
//            en++;
//        }
//    }
//    cout << "The number of comparisons：" << cn << "\nThe number of exchanges：" << en << endl;
//
//}
//
//
////堆排序
//void HeapSort(ElemType R[], int n) {
//
//}
//
//
////归并排序
//void MergeSort(ElemType R[], int n) {
//
//}
//
//
////基数排序
//void RadixSort(ElemType R[], int n) {
//
//}
//
//
//
//
////输出数组中的元素
//void print(ElemType R[],int n) {
//    cout<<"The List:"<<endl;
//    for(int i=0;i<=n-1;i++) {
//        if(i%10==0) {
//            cout<<endl;
//        }
//        cout<<R[i]<<"\t";
//    }
//    cout<<endl;
//}
//
//
//int main() {
//    ElemType T[N];
//    srand(0);
//    for (int i = 0; i <= N - 1; i++) {
//        T[i] = rand()%100;                        //产生随机数
//    }
//
////    int T[N]={49,38,65,97,76,13,27,48,55,4,83,86,77,15,93,35,86,92,49,21};
//    print(T, N);                                //输出随机数
//
//
////    cout << "InsertSort:"<<endl;
////    InsertSort(T, N);
//
////    cout<<"ShellSort:"<<endl;
////    ShellSort(T, N);
//
////
////    cout << "BubbleSort:"<<endl;
////    BubbleSort(T, N);
//
////
////    cout << "QuickSort:"<<endl
//////    QuickSort(R,left,right);
//////    print(R, N);
////
//    cout << "SelectSort:"<<endl;
//    SelectSort(T, N);
//
//    print(T, N);
////
////    cout<<"HeapSort"<<endl;
////    HeapSort(R,N);
////
////    cout << "MergeSort:"<<endl;
////    MergeSort(R, N);
////    print(R, N);
////
////    cout << "RadixSort:"<<endl;
////    RadixSort(R, N);
////    print(R, N);
//}