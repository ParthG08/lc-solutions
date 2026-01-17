#include <bits/stdc++.h>
using namespace std;


int main() {
    map<int,int> mp;
    mp[0] = 1;
    mp[1]++;
    mp[1]++;
    mp[1]--;
    mp[1]--;

    mp.erase(1);

    for(auto [key,val]: mp){
        cout << key << " " << val << endl;
    }
    return 0;
}
