#include <bits/stdc++.h>
using namespace std;
int main(){
    //Stack容器遵循LIFO（后进先出）原则
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"栈大小: "<<s.size()<<endl;
    cout<<"栈顶元素: "<<s.top()<<endl;
    cout<<"栈是否为空: "<<s.empty()<<endl;
    cout<<"栈顶元素出栈"<<endl;
    s.pop();
    cout<<"栈大小: "<<s.size()<<endl;
    cout<<"栈顶元素出栈"<<endl;
    s.pop();
    cout<<"栈大小: "<<s.size()<<endl;
    cout<<"栈清空"<<endl;
    while(!s.empty()){
        s.pop();
    }
    cout<<"栈是否为空: "<<s.empty()<<endl;

}