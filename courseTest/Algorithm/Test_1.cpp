////
//// Created by liu on 19-3-30.
////
//#include<iostream>
//#include <math.h>
//using namespace std;
//
//void ExchangeMoney(){
//    int count=0;
//    for(int i=1;i<=20;i++){
//        for(int j=1;j<=50;j++){
//            for(int k=1;k<=100;k++){
//                if(5*i+2*j+k==100){
//                    count++;
//                }
//            }
//        }
//    }
//    cout<<"一共有"<<count<<"种兑换方法"<<endl;
//}
//
//void Daffodil(){
//    int a,b,c,d=0;
//    cout<<"\n1000以内的水仙花数为："<<endl;
//    for(int i=123;i<1000;i++){
//        a=i/100;
//        b=i/10%10;
//        c=i%10;
//        if(a*a*a+b*b*b+c*c*c==i){
//            d++;
//            cout<<i<<" ";
//            if(d==10){
//                cout<<endl;
//            }
//        }
//    }
//
//}
//
//void Chicken(){
//    cout<<"\n"<<endl;
//    for(int i=0;i<=20;i++){
//        for(int j=0;j<=33;j++){
//            if((100-i-j)%3==0&&5*i+3*j+(100-i-j)/3==100){
//                cout<<"鸡翁有"<<i<<"只，鸡母有"<<j<<"只，鸡雏有"<<100-i-j<<"只"<<endl;
//            }
//        }
//    }
//}
//
//void Ball(){
//    cout<<endl;
//    for(int i=0;i<=3;i++){
//        for(int j=0;j<=3;j++){
//            for(int k=0;k<=6;k++){
//                if(i+j+k==8){
//                    cout<<"红球有"<<i<<"个，白球有"<<j<<"个，黑球有"<<k<<"个"<<endl;
//                }
//            }
//        }
//    }
//}
//
//void Factorial(){
//    cout<<"\n请输入所求阶乘：";
//    int a=1,n,result=0;
//    cin>>n;
//    for(int i=2;i<=n;i++){
//        result=a*i;
//        a=result;
//    }
//    cout<<result<<endl;
//}
//
//void Fibonaccci_Recursion(){
//    int a=0,b=1;
//    cout<<"\n0 1 ";
//    for(int i=1;i<100;i++){
//        i=a+b;
//        a=b;
//        b=i;
//        cout<<i<<" ";
//    }
//    cout<<" ...\n"<<endl;
//}
//
//void Step(){
//    int a=1,b=2,num;
//    for(int i=3;i<=100;i++){
//        num=a+b;
//        a=b;
//        b=num;
//    }
//    cout<<"100个台阶有"<<num<<"种方法。\n"<<endl;
//}
//
//void EatPeach(){
//    int a=1,num=0;
//    for(int i=6;i>=1;i--){
//        num=(a+1)*2;
//        a=num;
//    }
//    cout<<num<<endl;
//}
//
//void LicensePlateNum(){
//    int m=0;
//    for(int i=1;i<=9;i++){
//        for(int j=1;j<=9;j++){
//            m=i*1000+i*100+j*10+j;
//            for(int k=32;k<100;k++){
//                if(m==k*k){
//                    cout<<"\nThe number of license plate is "<<m<<"( "<<k<<"*"<<k<<" )"<<endl;
//                }
//            }
//        }
//    }
//}
//
//void Traingle(){
//    int t=1;
//    int numP,numT,n;
//    cout<<"\nPlease enter the number of traingle: ";
//    cin>>n;
//    for(int i=2;i<=n;i++){
//        numP=t+i;
//        t=numP;
//        numT=i*i;
//    }
//    cout<<"need the number of pieces :"<<numP<<"\nThe number of traingle :"<<numT<<endl;
//}
//
//int F(int n){
//    if(n<=2){
//        return 1;
//    } else{
//        return F(n-1)+F(n-2);
//    }
//}
//
//void Fibonaccci_Recursive(){
//    int n=0;
//    cout<<"\nPlease enter the scare: n=";
//    cin>>n;
//    cout<<"The number is when n="<<n<<": "<<F(n)<<endl;
//}
//
//void Hanoi(){
//
//}
//
//int main(){
//    //（穷举法）
//
//    //把一元钞票换成五分，二分，一分硬币（每种至少一枚），有哪些换法
//    ExchangeMoney();
//    //水仙花数，一个n（n>=3）位数等于每个数字的n次幂之和，求1000以内的水仙花数（n=3）
//    Daffodil();
//    //百鸡问题，鸡翁一只价值五钱，鸡母一只价值三钱，鸡雏三只价值一钱，百钱买百鸡，问鸡翁，鸡母，鸡雏各几只
//    Chicken();
//    //口袋里12个球（3个红球，3个白球，6个黑球），每次从中任取8个，共有哪些种颜色搭配
//    Ball();
//
//    //（迭代法）（递推法）
//
//    //顺推法
//
//    //阶乘问题：n！=1*2*3*...*n
//    Factorial();
//    //Fibonaccci数列：0,1,1,2,3,5,8,13,21,34,55,89,...
//    Fibonaccci_Recursion();
//    //要爬到一个小山的顶点，需要上100个台阶，可以一步上一个台阶，也可以一步上两个台阶。共有多少种不同的上山方式
//    Step();
//
//    //逆推法
//
//    //猴子吃桃。一只小猴子摘了若干桃子，每天吃现有桃子的一半多一个，到第七天只有一个桃子，原来有多少个桃
//    EatPeach();
//    //一辆卡车违反交通规则，撞人逃跑，现有三个目击证人记下车牌号特征：前两位数相同，后两位数相同，四位数恰好时一个整数的平方，求该车牌号
//    LicensePlateNum();
//    //三角形纸片摆图形所需纸片数量分别是1,3,6,10...所摆成的三角形数量分别是1,4,9,16...求第n个图形所需的三角形纸片数量和所摆成的三角性个数
//    Traingle();
//
//    //（递归法）
//
//    //斐波那契（Fibonaccci）序列
//    Fibonaccci_Recursive();
//    //汉诺（Hanoi）塔问题
//    Hanoi();
//
//}
