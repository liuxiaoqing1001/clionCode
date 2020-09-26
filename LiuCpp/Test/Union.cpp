//
// Created by liu on 19-5-2.
//

#include <iostream>
using namespace std;

union T{
    short a;
    char b[2];
};

int main(){
    union T t;
    t.a=0x6162;
    cout<<malloc(sizeof(T));
}