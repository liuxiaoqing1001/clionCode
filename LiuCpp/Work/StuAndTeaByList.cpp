////
//// Created by liu on 18-6-22.
////
//
////用链表
////每个老师教一种学科，一个老师可以教多个学生
////每个学生可被多个老师教
////每个学科可以被多个老师教，<语文，数学，外语>
////输入科目，搜索到这个学科的所有老师以及教的老师教的所有学生的成绩和平均分
//
//#include <iostream>
//using namespace std;
//#define random(a,b)(rand()%(b-a+1)+a)
//class subject;
//class student;
//class teacher;
//
//class subject{
//public:
//    string subName;
//};
//class student{
//public:
//    string stuName;
//    teacher *t;
//    subject *sub;
//};
//
//class teacher{
//private:
//    string tName;
//    student *stu;
//    subject sub;
//
//public:
//    teacher* querySub(int subNum) {
//        switch (subNum) {
//            case 1:
//                cout << "科目：\n   语文\n" << "教授此课的老师有：" << endl;
//                for (int i = 1; i < 5; i++) {
//                    cout << "   T" << i << "  学生平均分：  " << random(60, 100) << "\n" << endl;
//                }
//                break;
//            case 2:
//                cout << "数学\t" << "教授此课的老师有：\t" << endl;
//                for (int i = 5; i < 8; i++) {
//                    cout << "   T" << i << "  学生平均分：  " << random(60, 100) << "\n" << endl;
//                }
//                break;
//            case 3:
//                cout << "英语\t" << "教授此课的老师有：\t" << endl;
//                for (int i = 8; i < 10; i++) {
//                    cout << "   T" << i << "  学生平均分：  " << random(60, 100) << "\n" << endl;
//                }
//                break;
//        }
//    }
//
//
//
//public:
//    student* getStuFromSub(){
//        this->sub;
//        student *stu=this->stu;
//        if(stu->sub->subName==this->sub.subName){
//            cout<<this->tName<<endl;
//        }
//    }
//
//
//}teas;
//
//
//
//int main(int num, char *args[]){
//    int subNum;
//    cout<<"请输入科目序号：(如：1语文，2数学，3英语):"<<endl;
//    cin>>subNum;
//    teas.querySub(subNum);
//}
//
