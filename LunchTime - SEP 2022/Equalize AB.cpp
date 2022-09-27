#include <iostream>
using namespace std;

int main() {
	int T ;
	cin >> T ;
	while(T--){
	    int A,B,X;
	    cin >> A >> B >> X ;
	    int ans = abs(A-B);
	    if(ans % (2 * X)== 0){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
