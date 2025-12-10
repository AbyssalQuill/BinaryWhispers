#include <bits/stdc++.h>
using namespace std;
bool leap(int year){
        return (year%4==0&&year%100!=0||year%400==0);
}
int main(){
    int up,down,cnt=0;
    cin>>down>>up;
    vector<int> leapYear(cnt);
    for(int year=down;year<=up;year++){
        if(leap(year)) {
            cnt++;
            leapYear.push_back(year);
        }
    }
    cout<<cnt<<endl;
    for (int year:leapYear) cout<<year<<" ";
    return 0;
}
