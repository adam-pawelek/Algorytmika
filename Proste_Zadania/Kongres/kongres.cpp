#include <iostream>

using namespace std;
int main(){
	long long aktualny = 3;
	long long poprzedni = 2;
	long long ostatni = 1;
	long long pom_akt;
	long long pom_pop;
	long long pom_ost;
	long long wczy;
	cin >>wczy;
	if(wczy == 1){
		cout<< 1;
		return 0;
	}
	if (wczy  == 2){
		cout << 2;
		return 0;
	}
	if (wczy == 3){
		cout << 3;
		return 0;
	}
	for (int i = 4; i <=wczy; i++){
		pom_akt = aktualny;
		pom_pop = poprzedni;
		pom_ost = ostatni;
		aktualny = (long long)(aktualny + poprzedni)%10;
		poprzedni = pom_akt;
		ostatni = pom_pop;
		//cout <<aktualny<<" "<<poprzedni<<" "<<ostatni<<endl;
	}
	cout <<aktualny;
return 0;
}
