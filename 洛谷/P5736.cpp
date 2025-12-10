#include <bits/stdc++.h>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i=3;i*i<=num;i+=2){
        if (num % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> prime(n);
    for(int i=0;i<n;i++) cin>>prime[i];
    for(int i=0;i<n;i++){
        if(!isPrime(prime[i]))prime.erase(prime.begin()+i);
    }
    for (int i=0;i<prime.size();i++) cout<<prime[i]<<" ";
}