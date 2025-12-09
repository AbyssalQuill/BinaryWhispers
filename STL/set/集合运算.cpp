#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>s={1,2,3,4,5,6,7,8,9,10};
    set<int>n={2,4,6,8,10,12,14,16,18,20};
    cout<<"并集: "<<endl;
    set<int>tmp(s.begin(),s.end());
    tmp.insert(n.begin(),n.end());
    for (auto i:tmp){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"交集: "<<endl;
    set<int>tmp1;
    set_intersection(s.begin(),s.end(),n.begin(),n.end(),inserter(tmp1, tmp1.begin()));
    for (auto i:tmp1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"差集: "<<endl;
    set<int>difference;
    set_difference(s.begin(),s.end(),n.begin(),n.end(),inserter(difference, difference.begin()));
    for (auto i:difference){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}