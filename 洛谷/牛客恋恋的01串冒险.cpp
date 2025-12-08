#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for (int x=0;x<=n;x++){
        int num0=0,times=0,days=0;
        for (char c:s){
            if (c=='1'){
                num0=0;
                days++;
            }else{
                if (times<x){
                    times++;
                    days++;
                    num0=0;
                }else{
                    num0++;
                    days++;
                    if (num0==k){
                        days -= k;
                        break;
                    }
                }
            }
        }
        cout<<days<<" ";
    }
    return 0;
}