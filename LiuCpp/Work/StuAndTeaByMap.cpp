////
//// Created by liu on 18-6-24.
////
//
////用Map
////每个老师教一种学科，一个老师可以教多个学生
////每个学生可被多个老师教
////每个学科可以被多个老师教，<语文，数学，外语>
////输入科目，搜索到这个学科的所有老师以及教的老师教的所有学生的成绩和平均分
//
//#include <iostream>
//#include <map>
//using namespace std;
//#define random(a,b) (rand()%(b-a+1)+a)
//
//class teacher{
//public:
//    string tName;
//    string tSub;
//    bool operator < (teacher const& t) const {//这个函数指定排序策略，按iID排序，如果iID相等的话，按strName排序
//        if(tName < t.tName){
//            return true;
//        } else{
//            return false;
//        }
//    }
//};
//
//class student{
//public:
//    string sName;
//    int score;
//    bool operator < (student const& t) const {//这个函数指定排序策略，按iID排序，如果iID相等的话，按strName排序
//        if(sName < t.sName){
//            return true;
//        } else{
//            return false;
//        }
//    }
//};
//
//class subject{
//public:
//    string subName;
//    int sub(){
//        subName="（如1语文 ";
//        cout<<subName;
//        subName="2数学 ";
//        cout<<subName;
//        subName="3英语）";
//        cout<<subName<<endl;
//    };
//};
//
//int mapTInfo(int num) {
//    map<teacher, string> mapT;
//    teacher tInfo;
//    tInfo.tName = "T";
//    switch (num) {
//        case 1:
//            for (int i = 1; i < 5; i++) {
//                mapT[tInfo] = "语文老师";
//                cout << tInfo.tName << i << " " << mapT[tInfo] << endl;
//            }
//            break;
//        case 2:
//            for (int i = 5; i < 8; i++) {
//                mapT[tInfo] = "数学老师";
//                cout << tInfo.tName << i << " " << mapT[tInfo] << endl;
//            }
//            break;
//        case 3:
//            for (int i = 8; i < 10; i++) {
//                mapT[tInfo] = "英语老师";
//                cout << tInfo.tName << i << " " << mapT[tInfo] << endl;
//            }
//            break;
//    }
//}
//
//int mapStu(int num){
//    map<student, int> mapS;
//    student stuInfo;
//    stuInfo.sName="S";
//    switch (num) {
//        case 1:
//            for (int i = 1; i < 5; i++) {
//                cout <<"老师T"<<i<<" 学生有:";
//                mapS[stuInfo]=random(60,100);
//                for(int j=1;j<random(1,40);j++){
//                    cout<<" "<<stuInfo.sName<<j;
//                }
//                cout<<" 平均成绩为："<<mapS[stuInfo] << endl;
//            }
//            break;
//        case 2:
//            for (int i = 5; i < 8; i++) {
//                cout <<"老师T"<<i<<" 学生有:";
//                mapS[stuInfo]=random(60,100);
//                for(int j=1;j<random(1,40);j++){
//                    cout<<" "<<stuInfo.sName<<j;
//                }
//                cout<<" 平均成绩为："<<mapS[stuInfo] << endl;
//            }
//            break;
//        case 3:
//            for (int i = 8; i < 10; i++) {
//                cout <<"老师T"<<i<<" 学生有:";
//                mapS[stuInfo]=random(60,100);
//                for(int j=1;j<random(1,40);j++){
//                    cout<<" "<<stuInfo.sName<<j;
//                }
//                cout<<" 平均成绩为："<<mapS[stuInfo] << endl;
//            }
//            break;
//    }
//
//};
//
////    map<teacher, string>::iterator tI=mapT.begin();
////    for(;tI!=mapT.end();tI++){
////        cout<<tI->first.tName<<" "<<tI->first.tsub<<" "<<tI->second<<endl;
////    }
////    return 0;
//
//
////class subject;
////class student;
////class teacher;
////
////class subject{
////public:
////    string subName;
////};
////
////class teacher{
////private:
////    string tName;
////    student *stu;
////    subject sub;
////};
////
////class student{
////public:
////    string stuName;
////    teacher *t;
////    subject *sub;
////};
////
//int main(int num, char *args[]){
//    int tNum;
//    cout<<"请输入科目序号:"<<endl;
//    subject subs;
//    subs.sub();
//    cin>>tNum;
//    mapTInfo(tNum);
//    mapStu(tNum);
//
//}
