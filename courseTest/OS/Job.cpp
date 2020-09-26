////
//// Created by liu on 18-11-5.
////
//#include <iostream>
//using namespace std;
//
//struct Job {
//    char name;
//    float submitTime;
//    float runTime;
//    float startTime;
//    float finishTime;
//};
//
//void PrintJob(Job *job,int n){
//    cout<<"number\t\tname\tsubmitTime\trunTime\t\tstartTime\tfinishTime"<<endl;
//    for(int i=0;i<n;i++){
//        cout<<"\t"<<i+1<<"\t\t"<<job[i].name<<"\t\t\t"<<job[i].submitTime<<"\t\t\t"<<job[i].runTime
//            <<"\t\t\t"<<job[i].startTime<<"\t\t\t"<<job[i].finishTime<<endl;
//    }
//    cout<<"\n";
//}
//
//void ScanfJob(Job *job, int n) {
//    cout<<"Please enter the Job (By job name,job submitTime,job runTime):\n"<<"eg:\n"<<" x 0 0 "<<endl;
//    for(int i=0;i<n;i++){
//        cout<<"Serial number "<<i+1<<" :"<<endl;
//        cin>>job[i].name>>job[i].submitTime>>job[i].runTime;
//    }
//    PrintJob(job,n);
//}
//
//void InPut(Job *job, int n){
//    cout<<"The result : "<<endl;
//    for(int i=0;i<n;i++){
//        cout<<job[i].name<<" ";
//    }
//    cout<<"\n\n";
//}
//
//void RankJob(Job *job,int n){
//    for(int i=0;i<n;i++){
//        if(i==0){
//            job[i].startTime=job[i].submitTime;
//            job[i].finishTime=job[i].submitTime+job[i].runTime;
//        }else{
//            job[i].startTime=job[i-1].finishTime;
//            job[i].finishTime=job[i].startTime+job[i].runTime;
//        }
//    }
//}
//
//void Rank(Job *job,int n) {
//    for(int i=0;i<n;i++){
//        if(i==n-1){
//            job[i].runTime=job[i].runTime;
//        }else{
//            job[i].runTime-=job[i+1].submitTime-job[i].submitTime;
//
//        }
//    }
//}
//
//void RankSJF_PJob(Job *job,int n){
//    for(int i=0;i<n;i++){
//        if(i==0){
//            job[i].startTime=job[i].submitTime;
//            if(job[i].runTime==0){
//                job[i].finishTime=job[i].submitTime+job[i].runTime+1;
//            }else{
//                job[i].finishTime=job[i].submitTime+job[i].runTime;
//            }
//
//        }else{
//            job[i].startTime=job[i-1].finishTime;
//            job[i].finishTime=job[i].startTime+job[i].runTime;
//        }
//    }
//}
//
//void RankBySubmit(Job *job,int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<=i;j++){
//            if(job[i].submitTime<job[j].submitTime){
//                Job p=job[i];
//                job[i]=job[j];
//                job[j]=p;
//            }
//        }
//    }
//}
//
//void RankByRun(Job *job,int n){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<=i;j++){
//            if(job[i].runTime<job[j].runTime){
//                Job p=job[i];
//                job[i]=job[j];
//                job[j]=p;
//            }
//        }
//    }
//}
//
//void FIFO(Job *job,int n) {
//    cout<<"The FIFO algorithm is as follows:"<<endl;
//    RankBySubmit(job,n);
//    RankJob(job,n);
//    PrintJob(job,n);
//    InPut(job, n);
//}
//
//void SJF(Job *job,int n){
//    cout<<"The SJF(non-preemptive) algorithm is as follows:"<<endl;
//    RankByRun(job,n);
//    RankJob(job,n);
//    PrintJob(job,n);
//    InPut(job,n);
//}
//
//
//void SJF_Preemptive(Job *job,int n){
//    cout<<"The SJF(preemptive) algorithm is as follows:"<<endl;
//    RankBySubmit(job,n);
//    Rank(job,n);
//    RankByRun(job,n);
//    RankSJF_PJob(job,n);
//    PrintJob(job,n);
//    InPut(job,n);
//}
//
//int main(){
//    Job *job=new Job[100];
//    int n=0;
//    cout<<"Please enter the number of jobs:"<<endl;
//    cin>>n;
//    ScanfJob(job, n);
//    FIFO(job,n);
//    SJF(job,n);
//    SJF_Preemptive(job,n);
//}