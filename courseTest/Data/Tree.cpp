////
//// Created by liu on 18-11-2.
////
//#include <iostream>
//using namespace std;
//
//typedef struct BiTNode {
//    char data;
//    BiTNode *lchild,*rchild;
//}BiTNode,*BiTree;
//
//int CreateBiTree(BiTree &T) {
//    char ch;
//    cin>>ch;
//    if(ch=='*') T=NULL;
//    else
//    {
//        T=new BiTNode;
//        T->data=ch;
////              T->lchild=NULL;
////              T->rchild=NULL;
//        CreateBiTree(T->lchild);
//        CreateBiTree(T->rchild);
//    }
//    return 1;
//}
//
//void PreOrderTraverse(BiTree T) {
//    if(T){
//        cout<<T->data<<" ";
//        PreOrderTraverse(T->lchild);
//        PreOrderTraverse(T->rchild);
//
//    }
//}
//
//void InOrderTraverse(BiTree T) {
//    if(T) {
//        InOrderTraverse(T->lchild);
//        cout<<T->data<<" ";
//        InOrderTraverse(T->rchild);
//    }
//}
//
//void PostOrderTraverse(BiTree T) {
//    if(T) {
//        PostOrderTraverse(T->lchild);
//        PostOrderTraverse(T->rchild);
//        cout<<T->data<<" ";
//    }
//
//}
//
//int CountNum(BiTree T) {
//    if(!T){
//        return 0;
//    }
//    return CountNum(T->lchild)+CountNum(T->rchild)+1;
//}
//
//int CountLeafNum(BiTree T,int &count) {
//    if(T){
//        CountLeafNum(T->lchild,count);
//        if(T->lchild==NULL&&T->rchild==NULL){
//            count++;
//        }
//        CountLeafNum(T->rchild,count);
//    }else{
//        return 0;
//    }
//
//}
//
//int Depth (BiTree T ) {
//    if(!T){
//        return 0;
//    }else{
//        int hl=Depth(T->lchild);
//        int hr=Depth(T->rchild);
//        return (hl>hr?hl:hr)+1;
//    }
//
//}
//
//
//int main() {
//    BiTree T;
//    cout<<"Please enter the order of root,leftRoot and rightRoot,using '*' sign the another root : "<<endl;
//    CreateBiTree(T);
//
//    cout<<"root->left->right: "<<endl;
//    PreOrderTraverse(T);
//    cout<<"\n";
//
//    cout<<"left->root->right: "<<endl;
//    InOrderTraverse(T);
//    cout<<"\n";
//
//    cout<<"left->right->root: "<<endl;
//    PostOrderTraverse(T);
//    cout<<"\n";
//
//    cout<<"The number of the BiTree's root: "<<endl;
//    cout<<CountNum(T)<<endl;
//
//    int c=0;
//    cout<<"The number of the BiTree's leaf :"<<endl;
//    CountLeafNum(T,c);
//    cout<<c<<endl;
//
//    cout<<"The depth of the BiTree :"<<endl;
//    cout<<Depth(T)<<endl;
//}