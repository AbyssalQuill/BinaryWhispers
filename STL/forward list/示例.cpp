#include <bits/stdc++.h>
using namespace std;
int main(){
    //单向链表
    forward_list<int>flist={1,2,3,4,5,6,7,8,9,10};
    flist.assign({1,2,3,4,5,6,7,8,9,10});//补充：全替换函数
    
    cout << "forward_list元素: ";
    for (auto i : flist){
        cout<<i<<" ";
    }
    cout<<endl;

    //在开头插入元素
    flist.push_front(0);
    cout << "在开头插入0后: ";
    for (auto i:flist) cout<<i<<" ";
    cout<<endl;

    //删除第一个元素
    flist.pop_front();
    cout << "删除第一个元素后: ";
    for (auto i:flist) cout<<i<<" ";
    cout<<endl;
    //获取第一个元素
    cout << "第一个元素是: "<<flist.front()<<endl;
    //获取最后一个元素
    //forward_list没有back()方法，因为它是单向链表
    // 需要遍历到最后一个元素
    auto it=flist.begin();
    auto prev=flist.before_begin();
    while (std::next(it)!=flist.end()) {
        ++it;
        ++prev;
    }
    cout<<"最后一个元素是: "<<*it<<endl;
    // 获取元素个数
    cout <<"元素个数是: "<<distance(flist.begin(),flist.end())<<endl;
    // 获取元素是否为空
    cout << "元素是否为空: "<<flist.empty()<<endl;
    // 删除所有元素
    flist.clear();
    cout<<"清空元素后: "<<flist.empty()<<endl;
    return 0;
}