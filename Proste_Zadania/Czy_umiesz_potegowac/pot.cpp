#include <iostream>
using namespace std;
long long tab[1000000];
int main (){
	long long liczba;
	long long pot;
	cin >>liczba>>pot;
	long long licz = 0;
	tab[licz] = liczba % 10;
	long long  wyn;
	wyn = (liczba * liczba)%10;
	licz = 1;
	tab[licz] = wyn;
	while (liczba % 10 != wyn % 10){
		wyn = (wyn * liczba) % 10;
		licz++;
		tab[licz] = wyn;
	}
	/*
	for (int i = 0 ; i < licz; i++){
		cout <<tab[i]<<"\n";
	}
	cout <<"licznik"<<licz<<"\n";	
	*/
	cout <<tab[(pot -1) % licz];
	return 0;
}
