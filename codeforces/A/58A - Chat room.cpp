/*
    Author : Amr Mamdouh
    Date : 1 sep 2024
    cfURL: https://codeforces.com/problemset/problem/58/A

*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s, s2;
    cin >> s;
    s2 = "hello";
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s2[j])
        {
            j++;
        }
    }
    if (j == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}