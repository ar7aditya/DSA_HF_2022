#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    int hottest = INT_MIN;
    int n = temperatures.size();
    vector<int> ans(n,0);
    for(int i = n-1;i>=0;i--){
        if(temperatures[i]>=hottest){
            hottest = temperatures[i];
        }
        else{
            int it = i+1;
            while(temperatures[it]<=temperatures[i]){
                it = it+ans[it];
            }
            ans[i] = it - i;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
    }
    vector<int> days = dailyTemperatures(v);
    for (int i = 0; i < n; i++)
    {
        cout << days[i] << " ";
    }
    return 0;
}