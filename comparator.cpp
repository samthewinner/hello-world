

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first)
        return a.first<b.first;
    return a.second > b.second;
}

int main()
{
    vector<pair<int,int>> v(5);
    for(int i=0;i<5;i++)
        cin>>v[i].first >>v[i].second ;
    
    sort (v.begin() ,v.end() ,comp );
    
    for(auto it: v){
        cout<<it.first<<"   "<<it.second<<endl;
    }

    return 0;
}
