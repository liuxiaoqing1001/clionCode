////
//// Created by liu on 18-10-26.
////
//
//#include <iostream>
//using namespace std;
//
//typedef struct JobNode {
//    int number;
//    struct JobNode *next;
//} LNode, *LinkList;
//LinkList  L;
//
//void CreateList_L(LinkList &L, int n) {
//
//    cout<<"Please enter "<<n<<" nodes in the list:"<<endl;
//    L = new JobNode;
//    L->next = NULL;
//    for (int i = n; i > 0; --i) {
//        JobNode* p = new JobNode;
//        cin>>p->number;
//        p->next = L->next;
//        L->next = p;
//    }
//} // CreateList_L
//
//
//void PrintList_L(LinkList L) {
//    JobNode* p=L->next;
//    while(p->next) {
//        cout<<p->number<<"->";
//        p=p->next;
//    }
//    cout<<p->number<<endl;
//}
//
//
//void DeleteList(LinkList &L,int i){
//    JobNode *p=L;
//    for(int a=1;a<=i;a++){
//        if(a==i){
//            p->next=p->next->next;
//        }
//        p=p->next;
//    }
//    cout<<"Delect the list "<<" at the "<<i<<" position:"<<endl;
//}
//
//
//void InsertList(LinkList &L,int i, int x){
//    JobNode *p=L;
//    JobNode *s=new JobNode;
//    s->number=x;
//    for(int a=1;a<=i;a++){
//        if(a==i){
//            s->next=p->next;
//            p->next=s;
//        }
//        p=p->next;
//    }
//    cout<<"Insert the list of "<<x<<" at the "<<i<<" position:"<<endl;
//}
//
//void QueryList(LinkList &L,int i){
//    JobNode *p=L;
//    int x=0;
//    for(int a=1;a<=i;a++){
//        if(a==i){
//            x=p->next->number;
//        }
//        p=p->next;
//    }
//    cout<<"Find the value of the "<<i<<" position in the list:\n"<< x<<endl;
//}
//
//void ChangeList(LinkList &L,int i,int x){
//    JobNode *p=L;
//    for(int a=1;a<=i;a++){
//        if(a==i){
//            p->next->number=x;
//        }
//        p=p->next;
//    }
//    cout<<"Change the value of the "<<i<<" position in the list to"<< x<<":"<<endl;
//}
//
//void CountList(LinkList &L){
//    JobNode *p=L;
//    int x=0;
//    while(p->next!=NULL){
//        p=p->next;
//        x++;
//    }
//    cout<<"The count of list:\n"<<x;
//}
//
//int main() {
//    LinkList L;
//    CreateList_L(L,6);
//    PrintList_L(L);
//    InsertList(L,2,8);
//    PrintList_L(L);
//    DeleteList(L,3);
//    PrintList_L(L);
//    QueryList(L,5);
//    ChangeList(L,4,10);
//    PrintList_L(L);
//    CountList(L);
//}