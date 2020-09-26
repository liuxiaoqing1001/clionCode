//
// Created by liu on 18-8-29.
//
#include <stdio.h>
#include <string.h>

char *s[]={"a=1",
           "if",
           "a==2",
           "then",
           "print",
           "2",
           "else",
           "print",
           "1",
           "end"};

void doIt(char *string[]){
    for(int i=0;i<100;i++){
        switch (i){
            case 0:
                printf("%s;\n",string[0]);
                break;
            case 1:
                printf("%s(",string[1]);
                break;
            case 2:
                printf("%s)",string[i]);
                break;
            case 3:
                printf("{\n");
                break;
            case 4:
                printf("   %s(\"",string[4]);
                break;
            case 5:
                printf("%s\");\n",string[5]);
                break;
            case 6:
                printf("}%s{\n",string[6]);
                break;
            case 7:
                printf("   %s(\"",string[7]);
                break;
            case 8:
                printf("%s\");\n",string[8]);
                break;
            case 9:
                printf("}");
                break;
        }
    }
}

void message(){
    char *str="a=1\n"
              "if a==2 then\n"
              "print 2\n"
              "else\n"
              "print 1\n"
              "end";
    printf("%s\n解释结果为：\n",str);
}

//int main(){
//    message();
//    doIt(s);
//
////    while(scanf("%s",s)==1){
////    for(int i=0;i<100;i++){
////        if(strcmp(s[i],"end")==0){
////            break;
////        }
////    }
//
//    return 0;
//}

