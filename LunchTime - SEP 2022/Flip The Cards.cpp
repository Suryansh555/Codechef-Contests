#include <iostream>
using namespace std;

int main() {
	
	int T ;
	cin >> T ;
	while(T--){
	    int N , X ;
	    cin >> N >> X ;
	    if(N - X == 0 || N - X == N){
	        cout << "0" << endl ;
	        continue;
	    }
	    int Y = N - X ;
	    if(Y > X){
	        cout << X << endl ;
	    }else{
	        cout << Y << endl;
	    }
	}
	return 0;
}
