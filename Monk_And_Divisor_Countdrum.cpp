#include <iostream>
#include <vector>
using namespace std;

const int N = 2e5 + 10;
vector<int> multiples(N);
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    int n;
    cin >> n;
    vector<int> hs(N);
    for(int i = 0 ; i < n ; ++i){
        int x;
        cin >> x;
        hs[x]++;
    }

    for(int i = 1 ; i < N ; ++i){
        for(int j = i ; j < N ; j += i){
            multiples[i] += hs[j];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int p, q;
        cin >> p >> q;
        int ans = multiples[p] + multiples[q];
        long long lcm = p * 1LL * q / gcd(p, q);
        if(lcm < N){
            ans -= multiples[lcm];
        }
        cout << ans << '\n';
    }
    return 0;
}