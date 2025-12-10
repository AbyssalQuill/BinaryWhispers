#include <bits/stdc++.h>
using namespace std;
struct student{
    int id;
    string name;
    int avg;
    int preview;
    char master;
    char west;
    int academic;
    int total;
};
int calculateScholarship(student s) {
    int sum=0;
    if(s.avg>80&&s.academic>=1) sum+=8000;
    if(s.avg>85&&s.preview>80) sum+=4000;
    if(s.avg>90) sum+=2000;
    if(s.avg>85&&s.west=='Y') sum+=1000;
    if(s.preview>80&&s.master=='Y') sum+=850;
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<student> stu(n);
    for(int i=0;i<n;i++){
        cin>>stu[i].name>>stu[i].avg>>stu[i].preview>>stu[i].master>>stu[i].west>>stu[i].academic;
        stu[i].id=i;
        stu[i].total=calculateScholarship(stu[i]);
    }
    int totalScholarship=0;
    sort(stu.begin(),stu.end(),[](student a,student b){return a.total==b.total?a.id<b.id:a.total>b.total;});
    for (int i=0;i<n;i++){
        totalScholarship+=stu[i].total;
    }
    cout<<stu[0].name<<endl;
    cout<<stu[0].total<<endl;
    cout<<totalScholarship<<endl;
    return 0;
}