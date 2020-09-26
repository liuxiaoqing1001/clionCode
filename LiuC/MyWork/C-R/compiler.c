//
// Created by liu on 18-8-29.
//
//编译器

//引入头文件
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <stdbool.h>
//#include <conio.h>

////////////////////
//variable在英语中是变量的意思
//定义结构体variable
struct variable{
    //计数变量
    signed int i;
    //字符串长度变量
    signed int Len;
    //技术变量
    signed int j;
    //寄存器下标
    signed int r;
    //字符串接收变量
    char*String;
    //字符变量
    char Char[10];
    //接收数字字符串变量
    char*str;
    //判断条件的数组
    bool boolean[10];
}Nect;
//Nect.boolean = false;
//Nect.cty = false;
//character在英语中是字符的意思
//字符分割函数,i是寄存器
void Token(char character,int i){
    switch(character){
        //如果为+则字符的ascll码+1
        case '+':
            Nect.Char[i]++;
            break;
            //如果为-则字符的ascll码-1
        case '-':
            Nect.Char[i]--;
            break;
            //打印字符
        case 'P':
            putchar(Nect.Char[i]);
            break;
            //接受一个用户输入字符
        case 'I':
            Nect.Char[i] = getchar();
            break;
            //如果都没有则直接退出,如果不这么做则会返回字符
        default:
            return;
            break;
    }
    return;
}
//清空指针
char*NullChar(char*Cha,int j){
    int i = 0;
    for(i = 0;i < j;i++){
        Cha[i] = 0;
    }
    return Cha;
}
//检查字符是否为数字字符

char Ichar(char ch){
    switch(ch){
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '-':
            break;
        default:
            return '0';
            break;
    }
    return ch;
}
//将字符转转换函数
int Int(int b){
    switch((char)b){
        case '1':
            b = 1;
            break;
        case '2':
            b = 2;
            break;
        case '3':
            b = 3;
            break;
        case '4':
            b = 4;
            break;
        case '5':
            b = 5;
            break;
        case '6':
            b = 6;
            break;
        case '7':
            b = 7;
            break;
        case '8':
            b = 8;
            break;
        case '9':
            b = 9;
            break;
        default:
            b = 0;
            break;
    }
    return b;
}

//代码执行函数
int user(char token[99999]){
    //定义一个结构体指针并分配内存
    struct variable*Next = (struct variable*)malloc(sizeof(struct variable));
    //分配内存
    Next -> String = (char*)malloc(sizeof(char));
    Next -> str =  (char*)malloc(sizeof(char));
    //将获取的字符串转存入String变量
    Next -> String = (char*)token;
    signed int j = 0;
    //获取代码的字符个数
    Next -> Len = strlen(Next -> String);
    //便利字符串
    for(Next -> i = 0;(Next -> i) <= (Next -> Len);Next -> i++){
        //如果有'+['则后面的数字都为要增加的ascll码
        //不超过十,如果比如要给字符增加11,需要这样:+[11]
        switch(Next -> String[Next -> i]){
            case 'I':
                Next -> r = Int(Next -> String[Next -> i+1]);
                break;
            case 'R':
                if((Next -> String[Next -> i+2]) == '='){
                    Nect.Char[Int(Next -> String[Next -> i+1])] = (Next -> String[Next -> i+3]);
                    Next -> i += 4;
                }
                break;
            case '+':
                if((Next -> String[Next -> i+1]) == '['){
                    //当前遍历的字符位置+1
                    Next -> i+= 3;
                    //boolean[0]为true
                    Nect.boolean[0] = true;
                    Next -> r = Int(Next -> String[Next -> i-1]);
                }
                break;
                //类似上面的if,只不过这个是-字符的ascll码
            case '-':
                if((Next -> String[Next -> i+1]) == '['){
                    Next -> i += 3;
                    Nect.boolean[1] = true;
                    //获取寄存器下标，如果不是数字则默认为0,如:+[0 123456]
                    //ps:可以不空格
                    Next -> r = Int(Next -> String[Next -> i-1]);
                    //如果为]则数组boolean全部为false
                }
                break;
            case ']':
                if(Nect.boolean[0] == true){
                    Nect.Char[Next -> r] += atol(Next -> str);
                    Nect.boolean[0] = false;
                }else if(Nect.boolean[1] == true){
                    Nect.Char[Next -> r] -= atol(Next -> str);
                    Nect.boolean[1] = false;
                }
                j = 0;
                NullChar(Next -> str , 10);
                /*
                Next -> str[0] = 0;
                Next -> str[1] = 0;
                Next -> str[2] = 0;
                Next -> str[3] = 0;
                Next -> str[4] = 0;
                */
                break;
            case 'P':
                //获取要打印的寄存器下标,如:P1
                Next -> r = Int(Next -> String[Next -> i+1]);
                break;
            case 'n':
                //清空指定寄存器,如:n0
                Nect.Char[Int(Next -> String[Next -> i+1])] = 0;
                break;
                //所有寄存器变量的内容全部清空
            case 'N':
                for(j = 0;j < 10;j++){
                    Nect.Char[j] = 0;
                }
                break;

        }

        if(Nect.boolean[1] == true || Nect.boolean[0] == true){
            //Nect.Char[Next -> r] -= Int(Next -> String[Next -> i]);
            Next -> str[j++] = Ichar(Next -> String[Next -> i]);
            //否则就把字符的ascll码加上括号内的数
        }else{
            Token(Next -> String[Next -> i],
                  Next -> r);
        }
    }
    //释放指针
    free(Nect.String);
    free(Nect.str);
    //释放结构体指针
    free(Next);
    return 0;
}

//主体部分
//int main() {
//    FILE*fp = NULL;
//    int i = 0;
//    char*str = (char*)malloc(sizeof(char)*1024);
////    if(!(fp = fopen("AAIF.f","r"))){
////        printf("%s:%d",__FILE__,__LINE__-1);
////        free(str);
////        exit(0);
////    }
//    for(i = 0;!(feof(fp));i++)
//        fscanf(fp,"%c",&str[i]);
//    //这里是要执行的代码
//    user(str);
//    fclose(fp);
//    free(str);
//    return 0;
//}