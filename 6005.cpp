//6005
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && b>c) cout<<"DECREASING\n";
    else if(a<b && b<c) cout<<"INCREASING\n";
    else cout<<"NO\n";
}
