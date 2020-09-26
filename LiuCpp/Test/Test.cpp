////
//// Created by liu on 19-5-2.
////
////c 面向对象
/// 结构体，union，引用&(c++填的)：int swa(int &a,int &b)
//// malloc(sizeof())分配推内存
//// sizeof关键字
//
//#include <iostream>
//using namespace std;
//
//struct Datal;
//typedef int (*Opt)(int,int);
//typedef Datal* (*funptr)(struct Datal *,Opt,int);
//struct Datal* fmap(struct Datal *,Opt,int);
//
//int add(int a,int b){
//    return a+b;
//}
//
//struct Datal{
//    int *data;
//    funptr map;
//    int length;
//};
//
//struct Datal* fmap(struct Datal *mythis,Opt opt,int j){
//    struct Datal *res=(struct Datal *)malloc(sizeof(struct Datal));
//    res->length=mythis->length;
//    res->data=(int *)malloc(sizeof(4*res->length));
//    for(int i=0;i<mythis->length;i++){
//        res->data[i]=opt(*((mythis->data)+i),j);
//    }
//    cout<<endl;
//    return res;
//}
//
//int main(){
//    struct  Datal *d=(struct Datal *)malloc(sizeof(struct Datal));
//    int a[]={1,2,3,4};
//    d->data=a;
//    d->length=4;
//    d->map=fmap;
//    struct Datal *ptr=d->map(d,add,1);
//    for(int i=0;i<ptr->length;i++){
//        cout<<ptr->data[i]<<"\t";
//    }
//    free(ptr->data);
//    free(ptr);
//    cout<<endl;
//    return 0;
//}