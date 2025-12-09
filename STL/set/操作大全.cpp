#include <bits/stdc++.h>
using namespace std;
    struct DescCmp{
        bool operator()(const int& a,const int& b)const{
            return a>b;
        }
    };

int main(){
    //自动去重加升序
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.emplace(4);
    s.emplace_hint(s.find(4), 5);
    cout<<"s元素: "<<endl;
    for (auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    set<int,DescCmp> s1(s.begin(), s.end());
    cout<<"s1元素: "<<endl;
    for (auto i:s1){
        cout<<i<<" ";
    }
    cout<<endl;
    s1.insert({6,7,8});
    cout<<"s1元素: "<<endl;
    for (auto i:s1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"删除区间[3,6]的元素: "<<endl;
    //s1使用的是降序排列，所以元素顺序是 8 7 6 5 4 3 2 1
    //由于是降序，从2到6实际上是反向的范围，需要调整参数顺序
    s1.erase(s1.find(6), s1.find(2));//删除从6到1的元素
    for (auto i:s1){
        cout<<i<<" ";
    }
    cout<<endl;
    //set容器不支持reverse()操作，因为它是有序关联容器
    //如果需要反向遍历，可以使用反向迭代器，迭代器为全指针操作
    cout<<"使用反向迭代器输出s1元素: "<<endl;
    for (auto it=s1.rbegin();it!=s1.rend();++it) {
        cout<<*it<<" ";//解引用
    }
    cout<<endl;
    
    return 0;
}