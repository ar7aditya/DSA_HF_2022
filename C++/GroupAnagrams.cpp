#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> m;
    for (string s : strs)
    {
        string temp = s;
        sort(temp.begin(), temp.end());
        m[temp].push_back(s);
    }
    vector<vector<string>> res;
    for (auto &i : m)
    {
        res.push_back(i.second);
    }
    return res;
}

int main()
{

    return 0;
}