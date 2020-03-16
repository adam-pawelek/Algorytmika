#include <iostream>

using namespace std;
int tab [3000 * 100];
int main(){
	ios_base::sync_with_stdio(0);
	int lip; // liczba punktow
	int licz = 1;
	cin >>lip;
	for (int i = 0; i < lip; i++){
		cin >>tab[i];
		tab[i+lip] = tab[i];
	}

	

	for (int i = 0; i < 2 * lip; i++){
		if (tab[i] >= tab[i+1]){
			licz++;
		}
		else{
			licz = 1;
		}
		if (licz == lip){
			cout <<"TAK";
			return 0;
		}
	}
	licz = 1;
	for (int i = 0; i < 2 * lip; i++){
		if (tab[i] <= tab[i+1]){
			licz++;
		}
		else{
			licz = 1;
		}
		if (licz == lip){
			cout <<"TAK";
			return 0;
		}
	}
	cout <<"NIE";
	return 0;
}
