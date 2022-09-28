#include <iostream>
using namespace std;

int main() {
	int T ;
	cin >> T ;
	while(T--){
	    int a ;
	    cin >> a ;
	    int ans = a / 25 ;
	    float ans1 = float(a) /25 ;
	    if(ans == ans1){
	        cout << ans << endl;
	        continue;
	    }
	    cout << ans + 1 << endl ;
	}
	return 0;
}
