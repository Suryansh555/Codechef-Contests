#include <iostream>
using namespace std;

int main() {
	int T ;
	cin >> T;
	while(T--){
	   int n,k;
	   cin >> n >> k;
	   if(n % k){
	       cout << 1 << endl;
	   }
	   else{
	       cout << 0 << endl ;
	   }
	}
	return 0;
}
