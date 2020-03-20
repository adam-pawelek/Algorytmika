#include <iostream>
using namespace std;
long long tab[1000 * 1000];

int zapelnij(int ile){
		tab[0] = 0;
		tab[1] = 1;
		tab[2] = 1;
		for(int i = 3; i < ile; i++){
			tab[i] = tab[i-1] + tab[i-2];
		}
		return 0;
}
int czymozna(int liczba, int ile){
	int wyn = 0;
	for(int i = 0; i < ile; i++){
			for(int j = i; j < ile; j++){
				if(tab[i] * tab[j] == liczba){
					wyn = 1;
				}
			}
			if(wyn == 1){
				break;
			}
	}
	return wyn;
}


int main(){
	int ile;
	ile = 50;
	zapelnij(ile+2); //50
	/*
	for(int i = 0; i < ile; i++){
		cout <<tab[i]<<"\n";
	}
	*/
	int wczy;
	int liczba;
	cin >>wczy;
	for(int i = 0; i < wczy;i++){
			cin >>liczba;
			if(czymozna(liczba,ile) == 1){
				cout <<"TAK"<<"\n";
			}
			else{
				cout <<"NIE"<<"\n";
			}
	}

	
	
return 0;	
}
