#include <bits/stdc++.h>
using namespace std;

//自定义比较函数
struct DescCmp {
    bool operator()(const int& a, const int& b) const {
        return a > b;  //降序排列
    }
};

int main() {
    //基本的set，只指定元素类型
    set<int> s1;
    s1.insert(3);
    s1.insert(1);
    s1.insert(2);
    cout << "默认升序排列: ";
    for (const auto& i : s1) {
        cout << i << " ";
    }
    cout << endl;

    //使用自定义比较函数，指定Compare参数
    set<int, DescCmp> s2;
    s2.insert(3);
    s2.insert(1);
    s2.insert(2);
    cout << "自定义降序排列: ";
    for (const auto& i : s2) {
        cout << i << " ";
    }
    cout << endl;

    //使用标准库提供的比较函数
    set<int, greater<int>> s3;
    s3.insert(3);
    s3.insert(1);
    s3.insert(2);
    cout << "使用greater降序排列: ";
    for (const auto& i : s3) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}