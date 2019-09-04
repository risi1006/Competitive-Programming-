#include<bits/stdc++.h>
using namespace std;
int primefactorization(int a ){

    while(a%2==0){
        cout << 2 << endl;
        a/=2;
    }
    
    for(int i=3;i<=sqrt(a);i+=2){
        while(a%i==0){
            cout << i << endl;
            a/=i;
        }

    }
    if(a>2) cout << a <<endl;
}
int main()
{
    int a;   cin >> a;
    primefactorization(a) ;
}
