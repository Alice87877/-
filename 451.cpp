//451
#include <bits/stdc++.h>
using namespace std;

int main(){
    int d,w;
    cin>>d>>w;
    if(d<=31 && w<=7 && d>0 && w>0){
        if(d==13 && w==5) cout<<"._.zZ";
        else if(d==13) cout<<"QAQ";
        else cout<<"Oh,AC!";
    }else{
        cout<<"= =";
    }
    cout<<'\n';
}
