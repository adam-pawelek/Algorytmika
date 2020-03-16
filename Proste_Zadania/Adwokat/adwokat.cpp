#include <iostream>
using namespace std;

struct do_dni{
	int pocz;
	int pocz_nr;
	int kon;
	int kon_nr;
};
struct do_tab{
	int pocz;
	int kon;
	int dzien;
};


do_tab tabsp[1000 * 1000];  //tablica spotkan
do_dni dni[1000]; // tablica dni 
//w tablicy dni bede trzymal najdluzszy poczatek spotkania i najblizszy koniec

int main(){
	ios_base::sync_with_stdio(0);
	int licz_spot;
	int licz_dni;
	cin >>licz_spot;
	cin >>licz_dni;
	// ustawianie wartosci do liczenia maxx
	
	for (int i = 0; i < 100; i++){
		dni[i].pocz = 0;
		dni[i].kon = 1000 * 1000 * 1000;
	}
	
	
	
	for(int i = 0; i < licz_spot; i++){
		cin >>tabsp[i].pocz;
		cin >>tabsp[i].kon;
		cin >>tabsp[i].dzien;
		tabsp[i].dzien--;
	
		if (dni[tabsp[i].dzien].pocz < tabsp[i].pocz){
			dni[tabsp[i].dzien].pocz = tabsp[i].pocz;
			dni[tabsp[i].dzien].pocz_nr = i;
		}
		if(dni[tabsp[i].dzien].kon > tabsp[i].kon){
			dni[tabsp[i].dzien].kon = tabsp[i].kon;
			dni[tabsp[i].dzien].kon_nr = i;
		}
	
	}
	for(int i = 0; i < licz_dni; i++){
		//cout <<i<<" "<<dni[i].pocz<<" "<<dni[i].kon<<"\n";
		if (dni[i].pocz > dni[i].kon){
			cout <<"TAK"<<" "<<dni[i].kon_nr + 1<<" "<<dni[i].pocz_nr + 1<<"\n";
		}
		else{
			cout <<"NIE"<<"\n";
		}
		
	}

	return 0;
}
