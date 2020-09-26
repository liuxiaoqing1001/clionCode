//
// Created by liu on 18-5-26.
//

#include<iostream>
using namespace std;




//18-5-26


/*
 * 1)int a[10];
 * for(int i=0;i<10;i++){
 * a[i]=i;
 * }
 * * for(int i=0;i<10;i++){
 * cout<<a[i]<<"\t;
 * }
 * cout<<endl;
 * return 0;
 * 链表表示
 */

//1)
//struct pos;
//void function(pos *);
//typedef void (*fun)(pos *);
//
//struct pos{
//    int x;
//    pos *next;
//    fun dis;
//};
//
//void function(pos *p){
//    cout<<p->x<<"\t";
//}
//
//int main(){
//    int aa=1;
//    aa+1;
//
//    pos *head=NULL;
//    pos *tmp=NULL;
//
//    for(int i=0;i<10;i++){
//        pos *ptr=(pos *)malloc(sizeof(pos));
//
//        ptr->dis=function;
//
//        ptr->x=i;
//        ptr->next=NULL;
//        if(tmp!=NULL){
//            tmp->next=ptr;
//        }else{
//            head=ptr;
//        }
//        tmp=ptr;
//    }
//
//    pos *offset=head;
//    while(offset!=NULL){
//        offset->dis(offset);
//        //cout<<offset->dis<<"\t";
//        pos *tmp=offset->next;
//        free(offset);
//        offset=tmp;
//    }
//
////    pos *offset1=head;
////    while(offset1!=NULL){
////        cout<<offset1->a<<"\t";
////        offset1=offset1->next;
////    }
//
//    cout<<endl;
//    return 0;
//
//}





//18-6-2






//class person{
//public:
//    person(string name, int age){
//        cout<<1<<endl;
//        this->name=name;
//        this->age=age;
//    }
//
//virtual ~person(){
//    cout<<"person end"<<endl;
//}
//
//virtual void x(){
//    cout<<this->name<<"\t"<<this->age<<"\t"<<endl;
//}
//
//void y(){
//    cout<<"y"<<endl;
//}
//
//protected:
//    string name;
//    int age;
//};
//
//class student:public person {
//public:
//    student(string name, int age, string number) : person(name, age) {
//        cout << "2" << endl;
//        this->number = number;
//    }
//
//    ~student() {
//        cout << "end student" << endl;
//    }
//
//    void x() {
//        cout << this->name << "\t" << this->age << "\t" << this->number << endl;
//    }
//
//    void z() {
//        cout << "z" << endl;
//    }
//
//private:
//    string number;
//};
//
//int main(int num, char *args[]){
//    person *p1=new student("liu", 21, "022401702");
//    p1->x();
//    p1->y();
//    delete p1;
//    return 0;
//}





//class classloader{
//public:
//    void loadclass(){
//        cout<<"component loader"<<endl;
//        defineclass();
//        cout<<"endl;"<<endl;
//    }
//
//protected:
//    virtual void defineclass()=0;
//};
//
//class myclassloader1:public classloader{
//protected:
//    void defineclass(){
//        cout<<"define1"<<endl;
//    }
//};
//
//class myclassloader2:public classloader{
//protected:
//    void defineclass(){
//        cout<<"define2"<<endl;
//    }
//};
//int main (int num, char *args[]){
//    classloader *x=new myclassloader2;
//    x->loadclass();
//    return 0;
//}





//class A{
//public:
//    A(){
//        cout<<"A"<<endl;
//    }
//    ~A(){
//        cout<<"~A"<<endl;
//    }
//    int i;
//};
//class B:virtual public A{
//    public:
//    B(){
//        cout<<"B"<<endl;
//    }
//    ~B(){
//        cout<<"~B"<<endl;
//    }
//};
//class C:virtual public A{
//public:
//    C(){
//        cout<<"C"<<endl;
//    }
//    ~C(){
//        cout<<"~C"<<endl;
//    }
//};
//class D:virtual public B,public C{
//public:
//    D(){
//        cout<<"D"<<endl;
//    }
//    ~D(){
//        cout<<"~D"<<endl;
//    }
//};
//int main(int num, char *args[]){
//    D a;
//    a.i=10;
//    cout<<a.i<<endl;
//    return 0;
//}









