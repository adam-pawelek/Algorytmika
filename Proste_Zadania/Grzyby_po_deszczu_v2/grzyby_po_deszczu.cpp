#include <iostream>
using namespace std;

int tab[1000 * 1001];
int main (){
	ios_base::sync_with_stdio(0);
	int ile;
	int czas;
	cin >>ile>>czas;
	czas++;
	/*
	for(int i = 0; i < ile; i++){
		cin >>tab[i];
	}*/
	tab[ile] = 0;
	long long wyn = 0;
	long long maxx = 0;
	
	long long poprz = 0;
	cin >>tab[0];
	for(int i = 0; i < ile; i++){
		if (i < ile - 1){
			cin >>tab[i+1];
		}
		if(czas % 2 == 0){
			wyn = poprz + (long long)(tab[i] + tab[i+1]) * (czas / 2);
		}
		else{
			wyn = poprz + (long long)(tab[i] + tab[i+1]) * (czas / 2) + (long long)tab[i];
		}
		//cout <<wyn<<"\n";
		
		if(wyn > maxx){
			maxx = wyn;
		}
		czas--;
		if (czas == 0){
			break;
		}
		poprz+= tab[i];
	}
	cout <<maxx;
	return 0;
}
