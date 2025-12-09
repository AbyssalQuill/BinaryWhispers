#include <bits/stdc++.h>
using namespace std;
int main(){
    //创建一个包含重复元素的集合,升序，其他相同
    multiset<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    cout<<"s元素: "<<endl;
    for (auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}