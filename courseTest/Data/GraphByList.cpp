////
//// Created by liu on 18-11-24.
////
//
//#include<stdio.h>
//#define MAXNODE 10
////#define NULL 0
////#include <iostream>
////using namespace std;
//
//typedef struct ArcNode{
//    int adjvex;
//    struct ArcNode *nextarc;
//} ArcNode;
//
//typedef struct VNode {
//    char data;
//    struct ArcNode *firstarc;
//}VNode, AdjList[MAXNODE];
//
//
//void DFS(AdjList g,int k,int visited[]){
//    ArcNode *p;
//    int w;
//    visited[k]=1;
//    printf("%c",g[k].data);
//    p=g[k].firstarc;
//    while(p){
//        w=p->adjvex;
//        if(visited[w]==0){
//            DFS(g,w,visited);
//        }
//        p=p->nextarc;
//    }
//}
//
//void BFS(AdjList g,int k,int visited[],int n) {
//    ArcNode *p;
//    int m = 0;
//    int a[m];
//    if (visited[k] == 0) {
//        visited[k] = 1;
//        printf("%c", g[k].data);
//    }
//    p = g[k].firstarc;
//    while (p) {
//        m++;
//        if (visited[p->adjvex] == 0) {
//            visited[p->adjvex] = 1;
//            printf("%c", g[p->adjvex].data);
//        }
//        a[m - 1] = p->adjvex;
//        p = p->nextarc;
//    }
//    for (int i = 0; i < m; i++) {
//        BFS(g, a[i], visited, n);
//    }
//}
//
//int main() {
//    int i, j, n, k, visited[MAXNODE];
//    ArcNode *p, *q;
//    AdjList g;
//
//    printf("Please enter the number of vertex : ");
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        visited[i] = 0;
//    }
//
//    for (k = 0; k < n; k++) {
//        printf("Number %d : ", k + 1);
//        scanf("%s", &g[k].data);
//        g[k].firstarc = NULL;
//    }
//
//    printf("Please enter all the edge about the graph by head insert(eg:0-1  over:-1--1):\n");
//    for (;;) {
//        scanf("%d-%d", &i, &j);
//        if (i == -1 && j == -1) {
//            break;
//        }
//        q = new ArcNode;
//        q->adjvex = j;
//        q->nextarc = g[i].firstarc;
//        g[i].firstarc = q;
//// 		p=new ArcNode;
//// 		p->adjvex=i;
//// 		p->nextarc=g[j].firstarc;
//// 		g[j].firstarc=p;
//    }
//
//    printf("DFS: ");
//    DFS(g, 0, visited);
//
//    for (int i = 0; i < n; i++) {
//        visited[i] = 0;
//    }
//
//    printf("\nBFS: ");
//    BFS(g, 0, visited, n);
//    printf("\n");
//
//}
