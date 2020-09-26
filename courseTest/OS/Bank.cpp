////
//// Created by liu on 18-11-20.
////
//#include <iostream>
//using namespace std;
//
//struct ARource{
//    char aPName;
//    float aMax;
//    float aAllocation;
//    float aAvailable;
//};
//
//float aAvailableF;
//
//void APrint(ARource *ar,int m){
//    cout<<"Name\tMax\t\tAllocation"<<endl;
//    for(int i=0;i<m;i++) {
//        cout<<ar[i].aPName<<"\t\t"<<ar[i].aMax<<"\t\t\t"<<ar[i].aAllocation<<endl;
//    }
//    cout<<"\n";
//}
//void APrintR(ARource *ar,int m){
//    cout<<"Name\tMax\t\tAllocation\tAvailable"<<endl;
//    for(int i=0;i<m;i++) {
//        cout<<ar[i].aPName<<"\t\t"<<ar[i].aMax<<"\t\t\t"<<ar[i].aAllocation<<"\t\t\t"<<ar[i].aAvailable<<endl;
//    }
//    cout<<"\n";
//}
//
//void AInput(ARource *ar,int m){
//    cout<<"Please enter the Progress (By aPName,aMax,aAllocation):\n"<<"eg:\n"<<" x 0 0 "<<endl;
//    for(int i=0;i<m;i++){
//        cout<<"Serial number "<<i+1<<" :"<<endl;
//        cin>>ar[i].aPName>>ar[i].aMax>>ar[i].aAllocation;
//    }
////    APrint(ar,m);
//}
//
//void APrintResult(ARource *ar,int m){
//    cout<<"The list : ";
//    for(int i=0;i<m;i++) {
//        cout<< ar[i].aPName<< " ";
//    }
//    cout<<"\n\n";
//}
//
//void ARankF(ARource *ar,int m,float aAvailableF){
//    int tag=0;
//    for(int i=0;i<m;i++){
//        if(ar[i].aMax-ar[i].aAllocation<=aAvailableF){
//            if(i==0){
//                ar[i].aAvailable=aAvailableF+ar[i].aAllocation;
//                tag++;
//            } else{
//                    ARource ar1 = ar[i];
//                    ar[i] = ar[i-1];
//                    ar[i-1] = ar1;
//
//                ar[0].aAvailable=aAvailableF+ar[0].aAllocation;
//                tag++;
//            }
//            if(tag==1){
//                i=m;
//            }
//        } else{
//            if(i==m-1&&tag==0){
//                cout << "No safe !" << endl;
//            }
//        }
//
//    }
//}
//
//void ARankS(ARource *ar,int m,int s) {
//    int tag = s;
//    if (m != s) {
//        for (int j = s; j < m; j++) {
//            if (ar[s - 1].aAvailable >= ar[j].aMax - ar[j].aAllocation) {
//                if (j == s) {
//                    ar[j].aAvailable = ar[j - 1].aAvailable + ar[j].aAllocation;
//                    tag++;
//                } else {
//                    ARource ar1 = ar[s];
//                    ar[s] = ar[j];
//                    ar[j] = ar1;
//                    ar[s].aAvailable = ar[j - 1].aAvailable + ar[s].aAllocation;
//                    tag++;
//                }
//                if (tag == s + 1) {
//                    j = m;
//                }
//            }
//        }
//        if (tag == s) {
//            cout << "No safe !" << endl;
//        } else {
//            s++;
//            ARankS(ar, m, s);
//        }
//    }
//}
//
//void ARank(ARource *ar,int m,float aAvailableF){
//    ARankF(ar,m,aAvailableF);
//    ARankS(ar,m,1);
////    APrintR(ar,m);
//    APrintResult(ar,m);
//}
//
//struct BankerAlgorithm{
//    char pName;
//    float max[3];
//    float allocation[3];
//    float need[3];
//    float available[3];
//    float work[3];
//    float workAndAllocation[3];
//};
//
//float availableFirst[3];
//float request[3];
//float availableRequest[3];
//
//void Print(BankerAlgorithm *p, int n) {
//    cout<<"pName\t\tmax\t\tallocation\t\t\tneed\t\tavailable"<<endl;
//    for(int i=0;i<n;i++) {
//        cout << " " << p[i].pName;
//        int j = 0;
//        cout << "\t\t\t" << p[i].max[j] << " " << p[i].max[j + 1] << " " << p[i].max[j + 2]
//             << "\t\t" << p[i].allocation[j] << " " << p[i].allocation[j + 1] << " " << p[i].allocation[j + 2]
//             << "\t\t\t" << p[i].need[j] << " " << p[i].need[j + 1] << " " << p[i].need[j + 2];
//        if (i == 0) {
//            cout << "\t\t\t" << p[0].available[j]
//                 << " " << p[0].available[j + 1]
//                 << " " << p[0].available[j + 2]<< endl;
//        } else {
//            cout << "\n";
//        }
//    }
//    cout<<"\n";
//}
//
//void PrintRank(BankerAlgorithm *p, int n) {
//    cout<<"When the request come: \n"<<"pName\t\twork\t\tneed\t\t\tallocation\t\twork+allocation"<<endl;
//    for(int i=0;i<n;i++) {
//        cout << " " << p[i].pName;
//        int j = 0;
//        cout << "\t\t\t" << p[i].work[j] << " " << p[i].work[j + 1] << " " << p[i].work[j + 2]
//             << "\t\t" << p[i].need[j] << " " << p[i].need[j + 1] << " " << p[i].need[j + 2]
//             << "\t\t\t" << p[i].allocation[j] << " " << p[i].allocation[j + 1] << " " << p[i].allocation[j + 2]
//             << "\t\t\t" << p[i].workAndAllocation[j]
//             << " " << p[i].workAndAllocation[j + 1]
//             << " " << p[i].workAndAllocation[j + 2]<< endl;
//    }
//    cout<<"\n";
//}
//
//void PrintResult(BankerAlgorithm *p, int n) {
//    cout<<"The list : ";
//    for(int i=0;i<n;i++) {
//        cout<< p[i].pName<< " ";
//    }
//    cout<<"\n";
//}
//
////检查请求的安全性
//void DetectionF(BankerAlgorithm *p,int n) {
//    int i = 0, tag = 0;
//    for (int j = 0; j < n;) {
//        if (request[i] <= availableFirst[i] && request[i + 1] <= availableFirst[i + 1] &&
//            request[i + 2] <= availableFirst[i + 2]) {
//            for (int k = 0; k < 3; k++) {
//                availableRequest[k] = availableFirst[k] - request[k];
//            }
//            if (availableRequest[i] >= p[j].need[i]-request[i]
//                && availableRequest[i + 1] >= p[j].need[i + 1]-request[i+1]
//                && availableRequest[i + 2] >= p[j].need[i + 2]-request[i+2]) {
//                if (request[i] <= p[j].need[i] && request[i + 1] <= p[j].need[i + 1] &&
//                    request[i + 2] <= p[j].need[i + 2]) {
//                    for (int k = 0; k < 3; k++) {
//                        p[j].need[k] = p[j].need[k] - request[k];
//                        p[j].allocation[k] = p[j].allocation[k] + request[k];
//                    }
//                    if (j == 0) {
//                        for (int k = 0; k < 3; k++) {
//                            p[j].available[k] = availableRequest[k];
//                            p[j].work[k] = availableRequest[k];
//                            p[j].workAndAllocation[k] = p[j].work[k] + p[j].allocation[k];
//                        }
//                        tag++;
//                    } else {
//                        BankerAlgorithm p1 = p[0];
//                        p[0] = p[j];
//                        p[j] = p1;
//                        for (int k = 0; k < 3; k++) {
//                            p[0].available[k] = availableRequest[k];
//                            p[0].work[k] = availableRequest[k];
//                            p[0].workAndAllocation[k] = p[0].work[k] + p[0].allocation[k];
//                        }
//                        tag++;
//                    }
//                    if(tag==1){
//                        j=n;
//                    }
//                }else{
//                    j++;
//                }
//            } else{
//                j++;
//            }
//        } else {
//            cout << "No safe !" << endl;
//        }
//    }
//}
//
////检查安全性，排序
//void Detection(BankerAlgorithm *p, int n,int m) {
//    int j = 0, tag = m;
//    if(m!=n){
//        for (int i = m; i < n; ) {
//            if (p[m-1].workAndAllocation[j] >= p[i].need[j] && p[m-1].workAndAllocation[j + 1] >= p[i].need[j + 1]
//                && p[m-1].workAndAllocation[j + 2] >= p[i].need[j + 2]) {
//                if (i == m) {
//                    for (int k = 0; k < 3; k++) {
//                        p[i].work[k] = p[m-1].workAndAllocation[k];
//                        p[i].workAndAllocation[k] = p[i].work[k] + p[i].allocation[k];
//                    }
//                    tag++;
//                } else {
//                    BankerAlgorithm p1 = p[m];
//                    p[m] = p[i];
//                    p[i] = p1;
//                    for (int k = 0; k < 3; k++) {
//                        p[m].work[k] = p[m-1].workAndAllocation[k];
//                        p[m].workAndAllocation[k] = p[m].work[k] + p[m].allocation[k];
//                    }
//                    tag++;
//                }
//                if(tag==m+1){
//                    i=n;
//                }
//            } else{
//                i++;
//
//            }
//        }
//        if(tag==m){
//            cout << "No safe !" << endl;
//        } else{
//            m++;
//            Detection(p,n,m);
//        }
//
//    }
//}
//
//void Rank(BankerAlgorithm *p, int n) {
//    DetectionF(p,n);
//    Detection(p,n,1);
////    PrintRank(p,n);
//    PrintResult(p,n);
//}
//
//void InPut(BankerAlgorithm *p, int n) {
//    for(int i=0;i<n;i++){
//        if(i==0) {
//            cout << "Please enter the resource available now (three resources):" << endl;
//            for (int j = 0; j < 3; j++) {
//                cin >> availableFirst[j];
//            }
//            cout << "Please enter the number of request (three resources):" << endl;
//            for (int j = 0; j < 3; j++) {
//                cin >> request[j];
//            }
//        }
//        cout<<"Please enter the pName :";
//        cin>>p[i].pName;
//        cout<<"Please enter information for progress "<<i+1<<" in order(max,allocation):"<<endl;
//        for(int j=0;j<3;j++){
//            cout<<"Resource "<<j+1<<" :";
//            cin>>p[i].max[j]>>p[i].allocation[j];
//            p[i].need[j]=p[i].max[j]-p[i].allocation[j];
//            p[0].available[j]=availableFirst[j];
//        }
//    }
////    Print(p,n);
//    Rank(p,n);
//}
//
//int main(){
//    cout<<"A source: \n"<<endl;
//    ARource *ar=new ARource[100];
//    int m=0;
//    cout<<"Please enter the number of progress : ";
//    cin>>m;
//    cout<<"Please enter the resource available now : ";
//    cin>>aAvailableF;
//    AInput(ar,m);
//    ARank(ar,m,aAvailableF);
//
//    cout<<"Many source: \n"<<endl;
//    int n=0;
//    BankerAlgorithm *p=new BankerAlgorithm[100];
//    cout<<"Please enter the number of progress :"<<endl;
//    cin>>n;
//    InPut(p,n);
//}