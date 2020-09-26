////
//// Created by liu on 19-5-1.
////
//
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//int const M=10;
//
//void LCS_length(int m,int n,char X[],char Y[],int b[][M],int l[][M]){
//    for(int i=1;i<=m;i++){
//        l[i][0]=0;
//    }
//    for(int j=1;j<=n;j++){
//        l[0][j]=0;
//    }
//    for(int i=1;i<=m;i++){
//        for(int j=1;j<=n;j++){
//            if(X[i-1]==Y[j-1]){
//                l[i][j]=l[i-1][j-1]+1;
//                b[i][j]=2;
//            } else{
//                if(l[i-1][j]>=l[i][j-1]){
//                    l[i][j]=l[i-1][j];
//                    b[i][j]=1;
//                } else{
//                    l[i][j]=l[i][j-1];
//                    b[i][j]=3;
//                }
//            }
//        }
//    }
//}
//
//int Output_LCS(int b[][M],char X[],int i,int j){
//    if(i==0||j==0){
//        return 0;
//    } else{
//        if(b[i][j]==2){
//            Output_LCS(b,X,i-1,j-1);
//            cout<<X[i-1]<<" ";
//        } else if(b[i][j]==1){
//            Output_LCS(b,X,i-1,j);
//        } else{
//            Output_LCS(b,X,i,j-1);
//        }
//    }
//}
//
//void Print(int m,int n,int b[][M],int l[][M]){
//    cout<<"\nb 表（记录使得l[i][j]取得最优值的最优子问题）:"<<endl;
//    cout<<"\t";
//    for(int i=0;i<=n;i++){
//        cout<<i<<"\t";
//    }
//    cout<<endl<<"-------------------------------";
//    for(int i=0;i<=m;i++){
//        cout<<"\n"<<i<<"|"<<"\t";
//        for(int j=0;j<=n;j++){
//            cout<<b[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    cout<<"\nl 表（序列X[i]和Y[j]的LSC长度）:"<<endl;
//    cout<<"\t";
//    for(int i=0;i<=n;i++){
//        cout<<i<<"\t";
//    }
//    cout<<endl<<"-------------------------------";
//    for(int i=0;i<=m;i++){
//        cout<<"\n"<<i<<"|"<<"\t";
//        for(int j=0;j<=n;j++){
//            cout<<l[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//}
//
//int main(){
//    int m,n;
//    cout<<"Please enter the length of sequence:(eg: m,n (X[m],Y[n]))";
//    cin>>m>>n;
//    char X[m],Y[n];
//    cout<<"Please enter the sequence of X:";
//    for(int i=0;i<m;i++) {
//        cin >> X[i];
//    }
//    cout<<"Please enter the sequence of Y:";
//    for(int i=0;i<n;i++) {
//        cin >> Y[i];
//    }
//    int b[M][M]={0};
//    int l[M][M]={0};
//
//    //最长公共子序列
//    // X={'A','B','C','B','D','A','B'}
//    // Y={'B','D','C','A','B','A'}
//    LCS_length(m,n,X,Y,b,l);
//    cout<<"最长公共子序列为： ";
//    Output_LCS(b,X,m,n);
//    Print(m,n,b,l);
//}