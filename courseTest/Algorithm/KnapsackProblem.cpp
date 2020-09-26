////
//// Created by liu on 19-3-21.
////
//
////0-1背包问题的穷举算法：
////输入背包所承受的总重量和物品数量,重量和价值
////
//
//#include<iostream>
//#include <math.h>
//using namespace std;
//int const M=10;
//
//void Bi(int n,int *index){
//    int i;
//    for(i=sizeof(n)-1; i>=0; i--) {
//        if (n & (1 << i)) {
//            index[i] = 1;
//        } else {
//            index[i] = 0;
//        }
//    }
//}
//
//void W(int m,int *weight,int *index){
//    int Wmax=0;
//    for(int i=0;i<m;i++){
//        Wmax+=weight[i]*index[i];
//    }
//    cout<<Wmax;
//}
//
//void V(int m,int *value,int *index){
//    int Vmax=0;
//    for(int i=0;i<m;i++){
//        Vmax+=value[i]*index[i];
//    }
//    cout<<Vmax<<endl;
//}
//
//void wv(int n,int m,int *weight,int *value,int *index){
//    int t=0,x=1;
//    int tw=0,tv=0;
//    for(int i=1;i<pow(2,m);i++){
//        Bi(x,index);
//        int w=0,v=0;
//        x++;
//        for(int j=0;j<m;j++){
//            w+=weight[j]*index[j];
//            v+=value[j]*index[j];
//        }
//        if(tv<v&&w<=n){
//            tv=v;
//            tw=w;
//            t=i;
//        }
//    }
//    cout<<"Use Plan "<<t<<" ( weight:"<<tw<<" value:"<<tv<<" )"<<endl;
//}
//
//void Print_Info(int m,int *weight,int *value){
//    for(int i=0;i<m;i++){
//        cout<<"NO."<<i+1<<":";
//        cin>>weight[i]>>value[i];
//    }
//}
//
//void Print(int m,int *weight,int *value,int *index){
//    int x=1;
//    for(int i=1;i<pow(2,m);i++){
//        cout<<"Plan "<<i<<": ";
//        Bi(x,index);
//        x++;
//        for(int j=m-1;j>=0;j--) {
//            cout << index[j];
//        }
//        cout<<"   Total weight:";
//        W(m,weight,index);
//        cout<<";   Total value:";
//        V(m,value,index);
//    }
//}
//
//void Result(int n,int m,int *weight,int *value,int* index){
//    Print_Info(m,weight,value);
//    Print(m,weight,value,index);
//    wv(n,m,weight,value,index);
//}
//
//void Exhaustion(){
//    int n,m;
//    cout<<"Please enter the weight of bag and the number of goods(eg:n m):";
//    cin>>n>>m;
//    cout<<"Please enter the information of goods(eg:weight value):"<<endl;
//    int weight[m];
//    int value[m];
//    int index[m]={0};
//    Result(n,m,weight,value,index);
//}
//
//void K_DP(int n,int m,int B_W[],int B_V[],int C[][M]){
//    for(int w=0;w<=n;w++){
//        C[0][w]=0;
//    }
//    for(int i=1;i<=m;i++){
//        C[i][0]=0;
//        for(int w=1;w<=n;w++){
//            if(B_W[i-1]<=w){
//                if(B_V[i-1]+C[i-1][w-B_W[i-1]]>C[i-1][w]){
//                    C[i][w]=B_V[i-1]+C[i-1][w-B_W[i-1]];
//                } else{
//                    C[i][w]=C[i-1][w];
//                }
//            } else{
//                C[i][w]=C[i-1][w];
//            }
//        }
//    }
//}
//
//void Print_C(int n,int m,int C[][M]){
//    cout<<"\t";
//    for(int i=0;i<=n;i++){
//        cout<<i<<"\t";
//    }
//    cout<<endl<<"-----------------------------------------------------------------------------"<<endl;
//    for(int i=0;i<=m;i++){
//        cout<<i<<"|"<<"\t";
//        for(int j=0;j<=n;j++){
//            cout<<C[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//}
//
//void Dynamic(){
//    int n,m;
//    cout<<"Please enter the weight of bag and the number of goods(eg:n m):";
//    cin>>n>>m;
//    int B_W[m];
//    int B_V[m];
//    cout<<"Please enter the information of goods(eg:weight value):"<<endl;
//    Print_Info(m,B_W,B_V);
//    int C[M][M];
//    K_DP(n,m,B_W,B_V,C);
//    Print_C(n,m,C);
//
//    //知识点：
//    // 传递二位数组作为参数，有两种方法：
//    //  1 int (*)a[10] 直接传一个指针
//    //  2 int a[][10]第二维维度一定要显示
//
////    for(int i=0;i<m;i++){
////        cout<<B_W[i]<<" ";
////    }
////    cout<<endl;
////    for(int j=0;j<m;j++){
////        cout<<B_V[j]<<" ";
////    }
//}
//
//int main(){
//    //穷举法
////    Exhaustion();
//
//    //动态规划，表格形式递归定义最优解
//    Dynamic();
//
//}