////
//// Created by liu on 19-3-31.
////
//
//#include<iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//
//int Search(int *Bi,int x,int l,int r){
//    int mid=0;
//    if(l>r){
//        return 0;
//    } else{
//        mid=(l+r)/2;
//        if(x==Bi[mid]){
//            return mid;
//        } else if(x>Bi[mid]){
//            return Search(Bi,x,mid+1,r);
//        } else{
//            return Search(Bi,x,l,mid-1);
//        }
//    }
//}
//
//void BinarySearch(){
//    int n=0,x=0;
//    cout<<"Please enter the length of array:";
//    cin>>n;
//    int Bi[n];
//    cout<<"Initialize the array:";
//    for(int i=0;i<n;i++){
//        cin>>Bi[i];
//    }
//    cout<<"Please enter the number of your want to find:";
//    cin>>x;
//    int low=0;
//    int high=n-1;
//    cout<<"The number in Bi["<<Search(Bi,x,low,high)<<"]\n"<<endl;
//}
//
//void Rec(int *A,int l,int r,int &fmax,int &fmin){
//    int lmax,lmin,rmax,rmin;
//    int mid=0;
//    if(l==r){
//        fmax=A[l];
//        fmin=A[l];
//    } else if(l==(r-1)){
//        if(A[l]>A[r]){
//            fmax=A[l];
//            fmin=A[r];
//        } else{
//            fmax=A[r];
//            fmin=A[l];
//        }
//    } else{
//        mid=(l+r)/2;
//        Rec(A,l,mid,lmax,lmin);
//        Rec(A,mid+1,r,rmax,rmin);
//        fmax=max(lmax,rmax);
//        fmin=min(lmin,rmin);
//    }
//}
//
//void MaxMin(){
//    int n,l=0;
//    cout<<"Please enter the length of array:";
//    cin>>n;
//    int A[n];
//    cout<<"Initialize the array:";
//    for(int j=0;j<n;j++){
//        cin>>A[j];
//    }
//    int fmax=0,fmin=0;
//    Rec(A,l,n-1,fmax,fmin);
//    cout<<"max= "<<fmax<<"\nmin= "<<fmin<<"\n"<<endl;
//}
//
//int KeyIndex(int *A, int l, int r){
//    int x=0;
//    int tem;
//    x=A[r];
//    int k=0;
//    k=l-1;
//    for(int i=l;i<=r-1;i++){
//        if(A[i]<=x){
//            k=k+1;
//            tem=A[k];
//            A[k]=A[i];
//            A[i]=tem;
//        }
//    }
//    tem=A[k+1];
//    A[k+1]=A[r];
//    A[r]=tem;
//    return k+1;
//}
//
//int t1=1;
//void Partition(int *A, int l, int r){
//    if(l<r){
//        int index= KeyIndex(A, l, r);
//        cout<<"Partition "<<t1<<": ";
//        t1++;
//        for(int i=0;i<= sizeof(A)+1;i++) {
//            cout << A[i] << " ";
//        }
//        cout<<endl;
//        Partition(A, l, index - 1);
//        Partition(A, index + 1, r);
//    }
//}
//
//void QuickSort(){
//    int n,l=0;
//    cout<<"Please enter the length of array:";
//    cin>>n;
//    int A[n];
//    cout<<"Initialize the array:";
//    for(int i=0;i<n;i++){
//        cin>>A[i];
//    }
//    Partition(A, l, n - 1);
//    cout<<"Result；";
//    for(int i=0;i<n;i++){
//        cout<<A[i]<<" ";
//    }
//    cout<<"\n"<<endl;
//}
//
//void Merge(int *A,int l,int mid,int r){
//    int n1=mid-l+1;
//    int n2=r-mid;
//    int L[n1+1];
//    int R[n2+1];
//    for(int i=0;i<n1;i++){
//        if(i==0){
//            L[i]=A[l];
//        } else{
//            L[i]=A[l+i];
//        }
//    }
//    for(int j=0;j<n2;j++){
//        if(j==n2-1){
//            R[j]=A[r];
//        } else {
//            R[j] = A[mid + j+1];
//        }
//    }
//    L[n1]=32767;
//    R[n2]=32767;
//    int i=0,j=0;
//    for(int k=l;k<=r;k++){
//        if(L[i]<R[j]) {
//            A[k] = L[i];
//            i++;
//        } else {
//            A[k] = R[j];
//            j++;
//        }
//    }
//}
//
//int t2;
//void Merger(int *A, int l, int r){
//    if(l<r){
//        int mid=(l+r)/2;
//        Merger(A, l, mid);
//        Merger(A, mid + 1, r);
//        Merge(A,l,mid,r);
//
//        cout<<"Merge "<<t2<<": ";
//        t2++;
//        for(int i=0;i<= sizeof(A)+1;i++) {
//            cout << A[i] << " ";
//        }
//        cout<<endl;
//    }
//}
//
//void MergingSort(){
//    int n,l=0;
//    cout<<"Please enter the length of array:";
//    cin>>n;
//    int A[n];
//    cout<<"Initialize the array:";
//    for(int i=0;i<n;i++){
//        cin>>A[i];
//    }
//    Merger(A, l, n - 1);
//    cout<<"Result；";
//    for(int i=0;i<n;i++){
//        cout<<A[i]<<" ";
//    }
//    cout<<endl;
//}
//
//
//int Random(int l, int r) {
//    int number;
//    srand((unsigned)time(NULL));
//    number=rand()%(r-l+1)+l;
//    return number;
//}
//
//int Rand_Partition(int *A,int l,int r){
//    int i=Random(l,r);
//    int tem=A[r];
//    A[r]=A[i];
//    A[i]=tem;
//    return KeyIndex(A,l,r);
//}
//
//int Rand_Select(int *A,int l,int r,int key){
//    if(l==r){
//        return A[l];
//    }
//    int p=Rand_Partition(A,l,r);
//    int q=p-l+1;
//    if(key==q){
//        return A[p];
//    } else if(key<q){
//        return Rand_Select(A,l,p-1,key);
//    } else {
//        return Rand_Select(A, p + 1, r, key - q);
//    }
//
//}
//
//void Randomized(){
//    int n,l=0,x=0;
//    cout<<"\nPlease enter the length of array:";
//    cin>>n;
//    int A[n];
////    int A[]={2,6,18,1,4,10,20,6,22,13,9,5,24,3,7,12,16,11,20,28,23,14,15,21,125,34,19};
//    cout<<"Initialize the array:";
//    for(int i=0;i<n;i++){
//        cin>>A[i];
//    }
//    cout<<"Please enter the lowest number:";
//    cin>>x;
//    cout<<"The "<<x<<" smallest number: "<<Rand_Select(A,l,n-1,x)<<endl;
//}
//
//int main(){
//
//    //（分治法）
//
//    //二叉查找A={5，7，12，25，34，37，43，46，58，80，92，105}
////    BinarySearch();
//    //分治法找出最大和最小值A={12,2,16,30,8,28,4,10,20,6}
////    MaxMin();
//    //快速排序(使序列升序有序)A={12,2,16,30,8,28,4,10,20,6}
//    QuickSort();
//    //归并排序(使序列升序有序)A={12,2,16,30,8,28,4,10,20,6}
////    MergingSort();
//    //线性时间选择算法，求序列第8个元素。A={2,6,18,1,4,10,20,6,22,13,9,5,24,3,7,12,16,11,20,28,23,14,15,21,125,34,19}
//    Randomized();
//
//}