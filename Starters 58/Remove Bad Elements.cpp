#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin >> T ;
	while(T--){
	    int n ;
	    cin >> n;
	    unordered_map<int,int> mp ;
	    int max = -1 ;
	    int maxcount = -1;
	    for(int i = 0 ; i < n ; i++){
	        int x ;
	        cin >> x ;
	        mp[x]++;
	        if(mp[x] > maxcount){
	            max = x ;
	            maxcount = mp[x];
	        }
	    }
	    int count = 0;
	    for(auto i : mp){
	        if(i.first != max){
	            count = count + i.second;
	        }
	    }
	    cout << count << endl ;
	}
	return 0;
}
