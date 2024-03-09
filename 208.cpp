//208
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=1 && n<=3) cout<<"spring\n";
    else if(n>=4 && n<=6) cout<<"summer\n";
    else if(n>=7 && n<=9) cout<<"fall\n";
    else cout<<"winter\n";
}
