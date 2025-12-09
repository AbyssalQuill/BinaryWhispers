#include <bits/stdc++.h>
using namespace std;
int main(){
    //双端队列
    deque<int>dq;
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    cout<<"dq元素: "<<endl;
    for (auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"dq首元素: "<<dq.front()<<endl;
    cout<<"dq末元素: "<<dq.back()<<endl;
    cout<<"dq大小: "<<dq.size()<<endl;
    cout<<"dq是否为空: "<<dq.empty()<<endl;
    cout<<"dq首元素出队"<<endl;
    dq.pop_front();
    cout<<"dq末元素出队"<<endl;
    dq.pop_back();
    cout<<"dq元素: "<<endl;
    for (auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    //删除特定元素
    dq.erase(find(dq.begin(), dq.end(),3));
    cout<<"删除3元素后dq元素: "<<endl;
    for (auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

}