//////
////// Created by liu on 18-12-1.
//////
//
////最先(首次)适应算法，循环首次适应算法，最佳适应算法，最坏适应算法实现主存空间的连续分配和回收
//
//#include <iostream>
//using namespace std;
//
//typedef struct Area{
//    int areaNum;
//    int size;
//    int StartAddress;
//    int state;
//    struct Area *next;
//}area,*LinkList;
//
//void PrintS(LinkList &L){
//    Area* p=L->next;
//    cout<<"areaNum\t\tsize\t\tstartAddress\t\tstate"<<endl;
//    while (p){
//        cout<<p->areaNum<<"\t\t\t"<<p->size<<"\t\t\t\t"<<p->StartAddress<<"\t\t\t\t"<<p->state<<endl;
//        p=p->next;
//    }
//}
//
//void Input(LinkList &L,int n){
//    L = new Area;
//    L->next = NULL;
//    cout<<"Please enter "<<n<<" nodes by the order(areaNum size startAddress state):"<<endl;
//    for (int i = 0; i < n; i++) {
//        Area* p = new Area;
//        cin>>p->areaNum>>p->size>>p->StartAddress>>p->state;
//        p->next = L->next;
//        L->next = p;
//    }
//}
//
//void rankSA(LinkList &L){
//    Area *pi;
//    Area *pj;
//    Area *ri = NULL;
//    Area *rj = NULL;
//    int count = 0;
//    for (pi = L->next; pi; pi = pi->next) {
//        rj = NULL;
//        for (pj = pi; pj; pj = pj->next) {
//            if (pi->StartAddress > pj->StartAddress) {
//                if (count > 0) {
//                    ri->next = pj;
//                }
//                Area *p1 = pi;
//                Area *p2 = pj;
//                if (pi->next == pj) {
//                    Area *tmp = p1;
//                    p1->next = p2->next;
//                    p2->next = p1;
//                } else {
//                    rj->next = p1;
//                    Area *tmp = p1->next;
//                    p1->next = p2->next;
//                    p2->next = tmp;
//                }
//                pi = p2;
//                pj = p1;
//                if (count == 0) {
//                    L->next = pi;
//                }
//            }
//            rj = pj;
//        }
//        count++;
//        ri = pi;
//    }
//    PrintS(L);
//}
//
//void RankB(LinkList &L) {
//    Area *pi;
//    Area *pj;
//    Area *ri = NULL;
//    Area *rj = NULL;
//    int count = 0; // 如果count=0，就是链表头部与其他元素交换，否则就是内部元素之间进行交换
//
//// 冒泡进行链表排序(由大到小)
//    for (pi = L->next; pi; pi = pi->next) {
//        rj = NULL;
//        for (pj = pi; pj; pj = pj->next) {
//            if (pi->size < pj->size) {
//                if (count > 0) {
//                    ri->next = pj;
//                }
//                Area *p1 = pi;
//                Area *p2 = pj;
//                if (pi->next == pj) { // 两个元素之间相邻的
//                    // 进行交换
//                    Area *tmp = p1;
//                    p1->next = p2->next;
//                    p2->next = p1;
//                } else { // 两个元素之间不相邻的
//                    // 进行交换
//                    rj->next = p1;
//                    Area *tmp = p1->next;
//                    p1->next = p2->next;
//                    p2->next = tmp;
//                }
//                // 保持pi，pj指向的链表对应下标位置不变
//                pi = p2;
//                pj = p1;
//                // 让头指针指向包含money值最小的元素
//                if (count == 0) {
//                    L->next = pi;
//                }
//            }
//            rj = pj; // 指向pj指向的前一个元素
//        }
//        count++;
//        ri = pi; // 指向pi的前一个元素
//    }
//    PrintS(L);
//}
//
//void RankS(LinkList &L){
//    Area *pi;
//    Area *pj;
//    Area *ri = NULL;
//    Area *rj = NULL;
//    int count = 0;
//    for (pi = L->next; pi; pi = pi->next) {
//        rj = NULL;
//        for (pj = pi; pj; pj = pj->next) {
//            if (pi->size > pj->size) {
//                if (count > 0) {
//                    ri->next = pj;
//                }
//                Area *p1 = pi;
//                Area *p2 = pj;
//                if (pi->next == pj) {
//                    Area *tmp = p1;
//                    p1->next = p2->next;
//                    p2->next = p1;
//                } else {
//                    rj->next = p1;
//                    Area *tmp = p1->next;
//                    p1->next = p2->next;
//                    p2->next = tmp;
//                }
//                pi = p2;
//                pj = p1;
//                if (count == 0) {
//                    L->next = pi;
//                }
//            }
//            rj = pj;
//        }
//        count++;
//        ri = pi;
//    }
//    PrintS(L);
//
//}
//
//void FF(LinkList &L,int n,int y,int x,int r[]) {
//    if (y != x) {
//        Area *p = L->next;
//        int a = 0, b = 0;
//        while (p) {
//            if (a == 1) {
//                p = p->next;
//            } else {
//                if (p->size > r[y]) {
//                    p->size = p->size - r[y];
//                    p->StartAddress = p->StartAddress + r[y];
//                    ++p->state;
//                    a = 1;
//                } else {
//                    p = p->next;
//                    ++b;
//                }
//            }
//        }
//        if (b == n) {
//            cout <<"The "<<++y<< " : No space!" << endl;
//            FF(L, n, y, x, r);
//        } else {
//            FF(L, n, ++y, x, r);
//        }
//    }
//}
//
//void NF(LinkList &L,Area *startQ,int n,int y,int x,int r[]) {
//    if (y < x) {
//        if (startQ == NULL) {
//            startQ = L->next;
//        }
//        Area *p = startQ;
//        int a = 0, b = 0;
//        while (p) {
//            if (a == 1 && y < x) {
//                ++y;
//                startQ = p->next;
//                NF(L, startQ, n, y, x, r);
//            } else {
//                if (p->size > r[y] && p->state == 0) {
//                    p->size = p->size - r[y];
//                    p->StartAddress = p->StartAddress + r[y];
//                    ++p->state;
//                    a = 1;
//                } else {
//                    p = p->next;
//                    ++b;
//                    if (b == n && y < x) {
//                        if (y == 0) {
//                            startQ = L->next;
//                        } else {
//                            if (p == NULL) {
//                                startQ = L->next;
//                            } else {
//                                p = p->next;
//                            }
//                        }
//                        if (y <= 2) {
//                            ++y;
//                            if (y != 3) {
//                                cout << "The " << y << " : No space!" << endl;
//                            } else {
//                                if (!r[y]) {
//                                    cout << "The " << y << " : 1No space!" << endl;
//                                }
//                            }
//                        }
//                        NF(L, startQ, n, y, x, r);
//                    }
//                }
//            }
//        }
//    }
//}
//
//void BF(LinkList &L,int n,int y,int x,int r[]){
//    if (y != x) {
//        Area *p = L->next;
//        int a = 0, b = 0;
//        while (p) {
//            if (a == 1) {
//                p = p->next;
//            } else {
//                if (p->size > r[y]) {
//                    p->size = p->size - r[y];
//                    p->StartAddress = p->StartAddress + r[y];
//                    ++p->state;
//                    a = 1;
//                } else {
//                    p = p->next;
//                    ++b;
//                }
//            }
//        }
//        if (b == n) {
//            cout <<"The "<<++y<< " : No space!" << endl;
//            BF(L, n, y, x, r);
//        } else {
//            BF(L, n, ++y, x, r);
//        }
//    }
//}
//
//void WF(LinkList &L,int n,int y,int x,int r[]){
//    if (y != x) {
//        Area *p = L->next;
//        int a = 0, b = 0;
//        while (p) {
//            if (a == 1) {
//                p = p->next;
//            } else {
//                if (p->size > r[y]) {
//                    p->size = p->size - r[y];
//                    p->StartAddress = p->StartAddress + r[y];
//                    ++p->state;
//                    a = 1;
//                } else {
//                    p = p->next;
//                    ++b;
//                }
//            }
//        }
//        if (b == n) {
//            cout <<"The "<<++y<< " : No space!" << endl;
//            WF(L, n, y, x, r);
//        } else {
//            WF(L, n, ++y, x, r);
//        }
//    }
//}
//
//void Creat(LinkList &L){
//    int n,x;
//    cout<<"Please enter the number of area: ";
//    cin>>n;
//    Input(L,n);
//    cout<<"Please enter the number of request: ";
//    cin>>x;
//    int r[x];
//    cout<<"Please enter the requests: ";
//    for(int i=0;i<x;i++){
//        cin>>r[i];
//    }
//    cout<<"\n";
//
////    rankSA(L);
////    cout<<"\nFirst Fit"<<endl;
////    FF(L,n,0,x,r);
////    PrintS(L);
//
////    rankSA(L);
////    Area *startQ=L->next;
////    cout<<"Next Fit"<<endl;
////    NF(L,startQ,n,0,x,r);
////    PrintS(L);
//
////    RankS(L);
////    Area *startQ=L->next;
////    cout<<"Best Fit"<<endl;
////    BF(L,n,0,x,r);
////    PrintS(L);
//
//    RankB(L);
//    Area *startQ=L->next;
//    cout<<"Worst Fit"<<endl;
//    WF(L,n,0,x,r);
//    PrintS(L);
//}
//
//int main(){
//    LinkList L;
//    Creat(L);
//}