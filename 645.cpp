//645
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"Equilateral Triangle\n";
    }else if(a==b || a==c || b==c){
        cout<<"Isosceles Triangle\n";
    }else{
        cout<<"Scalene Triangle\n";
    }
}
