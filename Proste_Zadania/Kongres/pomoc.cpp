#include <iostream>
using namespace std;
int potega(int ile){
	int wyn = 1;
	for(int i = 0; i < ile; i++){
		wyn = wyn * 2;
	}
	return wyn;
}
string zamiana(int liczba){
	string wyn = "";
	string odw= "";
	while (liczba > 0){
		if(liczba % 2 == 0){
			wyn += "0";
		}
		else{
			wyn+= "1";
		}
		liczba = liczba / 2;
	}
	
	for (int i = 0; i < wyn.size(); i++){
		odw+= wyn[wyn.size() - i - 1];
	}
	
	return odw;
}
int czyok(int liczba){
	string slowo;
	slowo = zamiana(liczba);
	int wyn = 1;
	//cout <<"w czy ok"<<endl;
	if (slowo.size() == 0){
//		cout <<"liczba "<<"0"<<" czy ok 1"<<endl; 
		return wyn;
	}
	for (int i = 0; i < slowo.size() - 1; i++){
		if (slowo[i] == '1' && slowo[i + 1] == '1'){
			wyn = 0;
		}
	}
//	cout <<"liczba "<<slowo<<" czy ok "<<wyn<<endl;
	return wyn;
}
int zlicz(int liczba){
	int wyn = 0;
	int do_licz = potega(liczba);
//	cout <<"safsafsafdsa"<<endl;
	for (int i = 0; i < do_licz; i++){
		wyn +=czyok(i);

	}
	return wyn;
	
}
int main(){
	int ile;
	cin >>ile;
	ile--;
	/*
	cout <<potega(ile);
	int liczba;
	cin >>liczba;
	cout <<zamiana(liczba);
	int do_zam;
	cin >>do_zam;
	cout <<czyok(do_zam);
	*/
	//cout <<zamiana(ile)<<"zamiana"<<endl;
	//cout <<czyok(ile)<<"czyok"<<endl;
	cout <<zlicz(ile);
	return 0;
}
