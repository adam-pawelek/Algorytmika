#include <iostream>
using namespace std;
int main(){
	int wczy;
	int wyn= 1;
	cin >>wczy;
	for(int i = 1; i <= wczy; i++){
		wyn =(long long)(wyn * i) % 10;
	}	
	cout <<wyn;
return 0;
}
