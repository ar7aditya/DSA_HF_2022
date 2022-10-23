#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

string convertToTitle(int columnNumber)
{
    string res = "";
    while (columnNumber > 26)
    {
        int last = (columnNumber % 26) + 64;
        if (last == 64)
        {
            last += 26;
        }
        char lastLetter = char(last);
        res.push_back(lastLetter);
        if (columnNumber % 26 == 0)
        {
            columnNumber = (columnNumber / 26) - 1;
        }
        else
        {
            columnNumber = columnNumber / 26;
        }
    }
    if (columnNumber == 26)
    {
        res.push_back(char(65));
    }
    else
    {
        res.push_back(char(columnNumber + 64));
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int n;
    cin >> n;
    cout << convertToTitle(n) << endl;
    return 0;
}