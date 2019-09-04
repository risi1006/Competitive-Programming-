#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll  phi[n+2];
void eulerphi()
{

    for(int i=1;i<=n;i++){
        phi[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(phi[i]==i){
            phi[i]=i-1;
            for(int j=2*i;j<=n;j+=i){
                phi[j]=(phi[j]*(i-1))/i;
            }
        }
    }
}
// ll LcmSum(int m)
// {
//     eulerphi();
//     ll ans[n+1];
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j+=i){
//             ans[j]+=(i*phi[i]);
//         }
//     }
//     ll answer= ans[m]; answer=(answer+1)*m;
//     answer/=2;
//     return answer;
// }
int main()
{
    eulerphi(10);
    return 0;
}
