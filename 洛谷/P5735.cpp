#include <bits/stdc++.h>
using namespace std;
struct point{double x, y;};
double dis(point a, point b){return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));}
int main(){
        point a, b, c;
        cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
        cout<<fixed<<setprecision(2)<<dis(a, b)+dis(b, c)+dis(c, a)<<endl;
        return 0;
}

