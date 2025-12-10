#include<bits/stdc++.h>
using namespace std;
struct Student{
    int id;
    int academic_score;
    int activity_score;
};
bool isExcellent(Student student){
    if (student.academic_score+student.activity_score <= 140){return false;}
    double s=student.academic_score*0.7+student.activity_score*0.3;
    if (s>=80){return true;}
    return false;
}

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        Student student;
        cin>>student.id>>student.academic_score>>student.activity_score;
        if (isExcellent(student)) cout<<"Excellent"<<endl;
        else cout<<"Not excellent"<<endl;
    }
    return 0;
}
