////
//// Created by liu on 19-4-8.
////
//
////
//// Created by liu on 19-4-8.
////
//
////
//// Created by liu on 19-3-31.
////
//
//#include<iostream>
//#include <math.h>
//using namespace std;
//
//void Rec(int *A,int i,int j,int &fmax,int &fmin){
//    int lmax,lmin,rmax,rmin;
//    int mid=0;
//    if(i==j){
//        fmax=A[i];
//        fmin=A[i];
//    } else if(i==(j-1)){
//        if(A[i]>A[j]){
//            fmax=A[i];
//            fmin=A[j];
//        } else{
//            fmax=A[j];
//            fmin=A[i];
//        }
//    } else{
//        mid=(i+j)/2;
//        Rec(A,i,mid,lmax,lmin);
//        Rec(A,mid+1,j,rmax,rmin);
//        fmax=max(lmax,rmax);
//        fmin=min(lmin,rmin);
//    }
//}
//
//void MaxMin(){
//    int n,i=0;
//    cout<<"Please enter the length of array:";
//    cin>>n;
//    int A[n];
//    cout<<"Initialize the array:";
//    for(int j=0;j<n;j++){
//        cin>>A[j];
//    }
//    int fmax=0,fmin=0;
//    Rec(A,i,n-1,fmax,fmin);
//    cout<<"max= "<<fmax<<"\nmin= "<<fmin<<endl;
//}
//
//int main(){
//    MaxMin();
//}