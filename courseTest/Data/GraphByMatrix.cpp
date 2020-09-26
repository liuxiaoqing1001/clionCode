////
//// Created by liu on 18-11-24.
////
//
//#include <stdio.h>
//
//const int MaxSize=10;
//char vertex[MaxSize];
//int arc[MaxSize][MaxSize];
//int vertexNum, arcNum;
//int visited[4]={0};
//
//void CreateMGraph(char a[ ], int n, int e) {
//    int i,j,k;
//    vertexNum=n;
//    arcNum=e;
//    for (i=0; i<vertexNum; i++){
//        vertex[i]=a[i];
//    }
//    for (i=0; i<vertexNum; i++){
//        for (j=0; j<vertexNum; j++){
//            arc[i][j]=0;
//        }
//    }
//    printf("Please enter all the edge about the graph(eg:0-1):\n");
//    for (k=0; k<arcNum; k++) {
//        scanf("%d-%d",&i,&j);
//        arc[i][j]=1;
//        arc[j][i]=1;
//    }
//}
//
//
//void DFSTraverse(int v) {
//    printf("%c",vertex[v]);
//    visited[v]=1;
//    for (int j=0; j<vertexNum; j++){
//        if (arc[v][j]==1 && visited[j]==0){
//            DFSTraverse( j );
//        }
//    }
//}
//
//void BFSTraverse(int v) {
//    if (v != vertexNum) {
//        printf("%c", vertex[v]);
//        visited[v] = 1;
//        for (int j = 0; j < vertexNum;) {
//            if (arc[v][j] == 1 && visited[j] == 0) {
//                visited[j] = 1;
//                j++;
//            } else {
//                j++;
//            }
//        }
//        v++;
//        BFSTraverse(v);
//    }
//}
//
//int main(){
//    char a[4]={'a','b','c','d'};
//    CreateMGraph(a,4,4);
//    printf("DFS: ");
//    DFSTraverse(0);
//    printf("\nBFS: ");
//    BFSTraverse(0);
//}