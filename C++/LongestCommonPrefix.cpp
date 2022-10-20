#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.size() == 0)
        return "";
    if (strs.size() == 1)
        return strs[0];
    sort(strs.begin(), strs.end());
    for (string s : strs)
    {
        cout << s << " ";
    }
    string ans = "";
    string s1 = strs[0], s2 = strs[strs.size() - 1];
    for (int i = 0; i < strs[0].size(); i++)
    {
        if (s1[i] == s2[i])
        {
            ans += s1[i];
        }
        else
            break;
    }
    return ans;
}

int main()
{
    vector<string> v;
    string s;
    while (cin >> s && s != "end")
    {
        v.push_back(s);
    }
    cout << longestCommonPrefix(v);
    return 0;
}