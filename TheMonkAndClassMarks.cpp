#include <iostream>
#include <set>
#include <map>
using namespace std;

int main(){
    map<int,multiset<string>> marks_map;
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
    }
    auto cur_it = --marks_map.end();
    while(true){
        auto &students = cur_it->second;
        int marks = cur_it->first;
        for(auto student : students){
            cout << student << " " << marks << endl;
        }
        if(cur_it == marks_map.begin()) break;
        --cur_it;
    }
    return 0;
}
/*USING COMPARATOR FUNCTION*/

// #include <bits/stdc++.h>
// using namespace std;
// bool cmp(pair<string,int> a,pair<string,int> b){
//     if(a.second != b.second){
//         return a.second > b.second;
//     }
//     return a.first < b.first;
// }
// int main(){
//     int n;
//     cin >> n;
//     vector<pair<string,int> > v(n);
//     for(int i=0;i<n;++i){
//         cin >> v[i].first >> v[i].second;
//     }
//     sort(v.begin(),v.end(),cmp);
//     for(int i=0;i<n;++i){
//         cout << v[i].first << " " << v[i].second << endl;
//     }
//     return 0;
// }