#include <bits/stdc++.h>
using namespace std;
int main(){
    //创建一个包含重复元素的键值对
    multimap<int,string>mp;
    mp.insert({1,"apple"});
    mp.insert({2,"banana"});
    mp.insert({3,"orange"});
    mp.insert({4,"pear"});
    mp.insert({4,"grape"});
    mp.insert({5,"grape"});
    cout<<"mp元素: "<<endl;
    for (auto i:mp) cout<<i.first<<"->"<<i.second<<endl;
    //核心用法：查找所有key相同的元素
    cout<<"mp中key为4的元素: "<<endl;
    auto range=mp.equal_range(4);
    for (auto it=range.first;it!=range.second;++it){
        cout<<it->first<<"->"<<it->second<<endl;
    }
    //查找value相同的元素
    cout<<"mp中value为grape的元素: "<<endl;
    for (auto i:mp){
        if (i.second=="grape") cout<<i.first<<"->"<<i.second<<endl;
    }
    //删除所有value为grape的元素
    for (auto it=mp.begin();it!=mp.end();){
        if (it->second=="grape"){
            it=mp.erase(it);
        }
        else it++;
    }
    //输出删除后的元素
    cout<<"删除后:"<<endl;
    for (auto i:mp) cout<<i.first<<"->"<<i.second<<endl;
    return 0;
}