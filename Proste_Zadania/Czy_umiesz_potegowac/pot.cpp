#include <iostream>
using namespace std;
int main (){
	int liczba;
	int pot;
	int wyn = 1;
	cin >>liczba>>pot;
	for (int i = 0; i < pot; i++){
		wyn = wyn * liczba;
		cout <<wyn<<"\n"; 
	}
	return 0;
}
