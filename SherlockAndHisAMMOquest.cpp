#include <iostream>
#include <vector> 

using namespace std;
bool cmp(pair<string,int> a,pair<string,int> b){
	if(a.second != b.second){
		return a.second > b.second;
	}
	return a.first < b.first;
}
int main() {
	int n;
	cin >> n;
	vector<pair<string,int>> v(n);
	for(int i=0;i<n;++i){
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;++i){
		cout << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}