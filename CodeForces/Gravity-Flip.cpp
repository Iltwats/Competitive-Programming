// Problem Statement: https://codeforces.com/contest/405/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
int main()
{
    fastio;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<'\n';  
    
    return 0;
}
