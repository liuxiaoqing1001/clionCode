////
//// Created by liu on 19-4-8.
////
////
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//const int INT_MAX=2147483647;
//int const M=10;
//
//void Matrix_Chain_Order(int *p,int n,int m[][M],int s[][M]){
//    int q;
//    int y= n-1;
//    for(int i=1;i<=y;i++){
//        m[i][i]=0;
//    }
//    for(int l=2;l<=y;l++){
//        for(int i=1;i<=y-l+1;i++){
//            int j=i+l-1;
//            m[i][j]=INT_MAX;
//            for(int k=i;k<=j-1;k++){
//                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
//                if(q<m[i][j]){
//                    m[i][j]=q;
//                    s[i][j]=k;
//                }
//            }
//        }
//    }
//}
//
//void Print_Optimal_Parens(int s[][M], int i, int j)
//{
//    if(i == j){
//        cout<<"A"<<i;
//    } else {
//        cout<<"(";
//        Print_Optimal_Parens(s, i, s[i][j]);
//        Print_Optimal_Parens(s, s[i][j] + 1, j);
//        cout<<")";
//    }
//}
//
//void PrintM(int x,int m[][M]){
//    cout<<"\t";
//    for(int i=1;i<=x;i++){
//        cout<<i<<"\t\t";
//    }
//    cout<<endl<<"-----------------------------------------------------";
//    for(int i=1;i<=x;i++){
//        cout<<"\n"<<i<<"|"<<"\t";
//        for(int j=1;j<=x;j++){
//            if(m[i][j]==0){
//                cout<<m[i][j]<<"\t\t";
//            } else if(m[i][j]>=1000){
//                cout<<m[i][j]<<"\t";
//            } else{
//                cout<<m[i][j]<<"\t\t";
//            }
//        }
//    }
//    cout<<endl;
//}
//
//void PrintS(int x,int s[][M]){
//    cout<<"\t";
//    for(int i=1;i<=x;i++){
//        cout<<i<<"\t";
//    }
//    cout<<endl<<"-------------------------------";
//    for(int i=1;i<=x;i++){
//        cout<<"\n"<<i<<"|"<<"\t";
//        for(int j=1;j<=x;j++){
//            cout<<s[i][j]<<"\t";
//        }
//    }
//    cout<<endl;
//}
//
//void Print(int x,int m[][M],int s[][M]){
//    cout<<"m 表:"<<endl;
//    PrintM(x,m);
//    cout<<"s 表:"<<endl;
//    PrintS(x,s);
//}
//
//int main(){
//    int x,n;
//    cout<<"Please enter the length of sequence:";
//    cin>>n;
//    int p[n];
//    cout<<"Please enter the sequence of P:";
//    for(int i=0;i<n;i++) {
//        cin >> p[i];
//    }
//    int m[M][M]={0};
//    int s[M][M]={0};
//    cout<<"Please enter the number of matrix:";
//    cin>>x;
//
//    //矩阵链乘问题
//    Matrix_Chain_Order(p,n,m,s);
//    Print(x,m,s);
//    cout<<"当n="<<x<<"时最优解为: \n\t"<<m[1][x]<<endl;
//    cout<<"括号化方案为：\n\t";
//    Print_Optimal_Parens(s, 1, x);
//
//}