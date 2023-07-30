#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int n=a*2+b;
    int m=c*2+d;
    if(n==m)cout<<"Equal"<<endl;
    else if(n>m)cout<<"Messi"<<endl;
    else cout<<"Ronaldo"<<endl;
}

