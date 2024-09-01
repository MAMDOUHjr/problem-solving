/*
    Author : Amr Mamdouh 
    Date :  1 sep 
    cfURL:  https://codeforces.com/problemset/problem/116/A

*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> maxx(1005 , 0);
    int n;cin >> n ;
    int current = 0 ; 
    while (n--)
    {
        int a , b; cin >> a >> b ;
        current -= a; 
        current += b;
        maxx.push_back(current);
    }

    sort(maxx.begin() , maxx.end() , greater<int>());
    cout << maxx[0] << endl;
    return 0;
}