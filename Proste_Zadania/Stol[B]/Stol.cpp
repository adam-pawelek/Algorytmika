#include <iostream>
using namespace std;
int main(){
	long long dlug;
	long long szer;
	long long krzes;
	long long wyn = 0;
	long long maxx = 0;
	//cout << 5 / 2 * 2;
	
	cin >>dlug>>szer>>krzes;
	if (dlug < krzes || szer < krzes){
		cout <<0;
		return 0;
	}
	if (dlug >= 2 * krzes && szer >= 2 * krzes){
		maxx = (szer / krzes) * 2 + ((dlug - 2 * krzes) / krzes) * 2;
		if (maxx > wyn) {
			wyn = maxx;
		}
	}
	if (dlug >= krzes){
		maxx = szer / krzes;
		if (maxx > wyn){
			wyn = maxx;
		}
	}
/*	if (szer >= 2 * krzes){
		maxx = (dlug / krzes) * 2 + ((szer - 2 * krzes) / krzes) * 2; 
		if (maxx > wyn){
			wyn = maxx;
		}
	}
*/
	if (szer >= krzes){
		maxx = dlug / krzes;
		if (maxx > wyn){
			wyn = maxx;
		}
	}
	
	cout <<wyn;
	
	

	return 0;
}
