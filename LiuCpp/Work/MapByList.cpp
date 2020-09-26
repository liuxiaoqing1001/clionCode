////
//// Created by liu on 18-6-24.
////
//
////用链表实现一个Map（动态扩容）
//
//#include <iostream>
//#include <map>
//#define random(a,b) (rand()%(b-a+1)+a)
//using namespace std;
//
//class student{
//public:
//    int id;
//    string sName;
//    bool operator<(student const &s) const {
//        if (id < s.id) {
//            return true;
//        }else {
//            return false;
//        }
//    }
//};
//
//int mapStu(){
//    map<student, int>mapStu;
//    student stu;
//    for(int i=1;i<10;i++){
//        stu.id=i;
//        stu.sName="mapstudent"+i;
//        mapStu[stu]=random(50,100);
//    }
//    map<student, int>::iterator a=mapStu.begin();
//    for(;a!=mapStu.end();a++){
//        cout<<a->first.id<<" "<<a->first.sName<<" "<<a->second<<endl;
//    }
//    return 0;
//}
//
//int main(){
//    mapStu();
//}
//
//
//
//
//
//
//
//
////#include <string.h>
////
////struct Student//学生结构
////{
////    char Name[10];//姓名
////    int Age;//年龄
////    int No;//学号
////
////};
////
////
////typedef struct Node//结点
////{
////    struct Student st;//数据域
////
////    struct Node *pNext;//指针域
////}NODE, *PNODE;
/////*
////NODE等价于struct Student st
////PNODE等价于struct Node *pNext
////*/
////
//////输入函数,用于输入学生信息
////PNODE InputStudent(void);
////
//////输出学生信息
////void OutputStudent(PNODE pHead);
////
//////删除学生信息
////void DeleteStudent(PNODE pHead);
////
//////查找学生信息
////void SearchStudent(PNODE pHead);
////
//////修改学生信息
////void ChangeStudent(PNODE pHead);
////
//////增加学生信息
////void InsertStudent(PNODE pHead);
////
////int main()
////{
////
////    cout<<"请选择要操作的命令：\n1  输入学生信息     2  输出学生信息\n3  删除学生信息     4  查找学生信息\n"
////            <<"5  修改学生信息     6  增加学生信息"<<endl;
////
////    int Item;//保存操作命令
////
////    PNODE pHead = NULL;//定义一个指针
////
////    while(1)
////    {
////        printf("请选择操作命令:");
////        scanf("%d",&Item);
////
////        system("cls");//清屏
////
////        switch(Item)
////        {
////            case 1://输入学生信息
////            {
////                pHead = InputStudent();
////            }
////                break;
////
////            case 2://输出学生信息
////            {
////                OutputStudent(pHead);
////            }
////                break;
////
////            case 3://删除学生信息
////            {
////                DeleteStudent(pHead);
////            }
////                break;
////
////            case 4://查找学生信息
////            {
////                SearchStudent(pHead);
////            }
////                break;
////
////            case 5://修改学生信息
////            {
////                ChangeStudent(pHead);
////            }
////                break;
////
////            case 6://增加学生信息
////            {
////                InsertStudent(pHead);
////            }
////                break;
////            default:
////                break;
////        }
////    }
////
////    system("pause");
////}
////
////
//////输入函数,用于输入学生信息
////PNODE InputStudent(void)
////{
////    int len;//学生的人数
////
////    NODE stu;//学生结构
////
////    //定义一个头结点并且为头结点分配内存
////    PNODE pHead = (PNODE)malloc(sizeof(NODE));
////
////    //判断内存是否为空
////    if(NULL == pHead)
////    {
////        printf("内存分配失败,程序终止!\n");
////
////        exit(-1);
////    }
////
////    //定义一个指向头结点的指针
////    PNODE pTail = pHead;
////    pTail->pNext = NULL;//清空指针域
////
////    printf("请输入学生的人数:");
////    scanf("%d",&len);
////
////    for(int i=0; i<len; i++)
////    {
////        system("cls");//清屏
////
////        printf("请输入第%d个学生的姓名:", i+1);
////        scanf("%s", stu.st.Name);
////
////        printf("请输入第%d个学生的年龄:", i+1);
////        scanf("%d", &stu.st.Age);
////
////        printf("请输入第%d个学生的学号:", i+1);
////        scanf("%d", &stu.st.No);
////
////
////
////        //为新节点分配内存
////        PNODE pNew = (PNODE)malloc(sizeof(NODE));
////
////        //判断内存是否为空
////        if(NULL == pNew)
////        {
////            printf("内存分配失败,程序终止!\n");
////
////            exit(-1);
////        }
////
////        //初始化结点的数据域
////        pNew->st = stu.st;
////
////        //将新结点挂到老结点后
////        pTail->pNext = pNew;
////
////        //清空新结点的指针域
////        pNew->pNext = NULL;
////
////        //将pTail移到新结点上
////        pTail = pNew;
////    }
////
////    return pHead;
////}
////
//////输出学生信息
////void OutputStudent(PNODE pHead)
////{
////    //定义一个指针用于遍历学生信息
////    PNODE p = pHead->pNext;
////
////    printf("姓名  学号  \n");
////
////    while(NULL != p)
////    {
////        printf("%s  %d  %d  \n", p->st.Name, p->st.Age, p->st.No);
////
////        p = p->pNext;
////    }
////}
////
//////删除学生信息
////void DeleteStudent(PNODE pHead)
////{
////    PNODE p = pHead;
////
////    int i = 0;
////
////    int pos;
////
////    printf("请输入你需要删除的学生的编号:");
////    scanf("%d",&pos);
////
////    while(NULL != p->pNext && i<pos-1)
////    {
////        p = p->pNext;
////
////        i++;
////    }
////
////    if(NULL == p->pNext || i>pos-1)
////    {
////        printf("没找到需要删除的学生的编号!\n");
////
////        return;
////    }
////
////    PNODE q = p->pNext;
////
////    p->pNext = q->pNext;
////
////    free(q);
////    q == NULL;
////
////    printf("你已经成功删除了第%d个学生的信息!\n",pos);
////}
//////查找学生信息
////void SearchStudent(PNODE pHead)
////{
////    char Name[10];
////
////    printf("请输入你需要查找的学生的姓名:");
////    scanf("%s",Name);
////
////    PNODE p = pHead->pNext;
////
////    while(NULL != p)
////    {
////        if(0 == strcmp(Name,p->st.Name))
////        {
////            printf("%s %d %d \n",p->st.Name, p->st.Age, p->st.No);
////        }
////
////        p = p->pNext;
////    }
////}
////
//////修改学生信息
////void ChangeStudent(PNODE pHead)
////{
////    char Name[10];
////
////    printf("请输入你需要修改的学生的姓名:");
////    scanf("%s",&Name);
////
////    PNODE p = pHead->pNext;//定义一个指针用于遍历学生信息
////
////
////    while(NULL != p)
////    {
////        if(0 == strcmp(Name, p->st.Name))
////        {
////            printf("姓名 年龄  学号  语文  数学  英语  总分 平均分\n");
////
////            printf("修改前的学生信息!\n");
////            printf("%s %d %d \n",p->st.Name, p->st.Age, p->st.No);
////
////            system("pause");
////            system("cls");//清屏
////
////            printf("请输入新的学生姓名:");
////            scanf("%s", p->st.Name);
////
////            printf("请输入新的学生年龄:");
////            scanf("%d", &p->st.Age);
////
////            printf("请输入新的学生学号:");
////            scanf("%d", &p->st.No);
////
////
////
////            break;
////        }
////
////        p = p->pNext;
////    }
////}
////
//////增加学生信息
////void InsertStudent(PNODE pHead)
////{
////    PNODE p = pHead;
////
////    int i = 0;
////
////    struct Student stu;//学生结构
////
////    int pos;//插入结点的位置
////
////    printf("请输入插入学生的位置:");
////    scanf("%d",&pos);
////
////    while(NULL != p && i<pos-1)
////    {
////        p = p->pNext;
////
////        i++;
////    }
////
////    if(NULL == p || i>pos)
////    {
////        printf("插入结点的位置不存在!\n");
////
////        return;
////    }
////
////    printf("你将在第%d个学生后面插入一个学生\n",pos-1);
////
////    printf("请输入第%d个学生的姓名:",pos);
////    scanf("%s",stu.Name);
////
////    printf("请输入第%d个学生的年龄:",pos);
////    scanf("%d",&stu.Age);
////
////    printf("请输入第%d个学生的学号:",pos);
////    scanf("%d",&stu.No);
////
////
////    PNODE pNew = (PNODE)malloc(sizeof(NODE));
////
////    if(NULL == pNew)
////    {
////        printf("动态内存分配失败,程序终止!\n");
////
////        exit(-1);
////    }
////
////    pNew->st = stu;
////    PNODE q = p->pNext;
////    p->pNext = pNew;
////    pNew->pNext = q;
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
////
////class Entry<K, V> {
////    K Key;
////    V Value;
////
////public Entry(K key, V value) {
////        super();
////        Key = key;
////        Value = value;
////    }
////
////}
////
////public class RealizeMap<K, V, E> {
////    @SuppressWarnings("unchecked")
////    TestLinkedList<Entry<K, V>> arr[] = new TestLinkedList[165];
////    int size;
////
////    RealizeMap() {
////        size = 0;
////    }
////
////public void put(K key, V value) {
////        // 注意不能漏了->处理键值覆盖
////        Entry<K, V> e = new Entry<>(key, value);
////        int hash = key.hashCode() % 165;
////        if (arr[hash] == null) {
////            TestLinkedList<Entry<K, V>> list = new TestLinkedList<>();
////            arr[hash] = list;
////            list.addLast(e);
////        }else {
////            for(int i=0;i<arr[hash].size;i++) {
////                Entry<K, V> E = arr[hash].get(i);//由于E在此取义为该链表键对应节点的地址，所以直接改E即可覆盖之
////                if(E.Key.equals(key)) {
////                    E.Value = value;
////                    return;
////                }
////            }
////            arr[hash].addLast(e);
////        }
////    }
////
////public V get(K key) {
////        int hash = key.hashCode();
////        if (arr[hash] != null) {
////            for (int i = 0; i < arr[hash].size; i++) {
////                if (arr[hash].get(i).Key.equals(key))
////                    return arr[hash].get(i).Value;
////            }
////        }
////        return null;
////    }
////
////public static void main(String[] args) {
////        RealizeMap<String, String, Entry<String, String>> map = new RealizeMap<>();
////        map.put("1", "张三");
////        map.put("2", "李四");
////        map.put("2", "黎明");
////        map.put("3", "王五");
////        map.put("4", "马六");
////        System.out.println(map.get("2"));
////    }
////
////}

