#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int liczba;
	cin >>liczba;
	int wyn= 0;
	for (int i = 1; i <= liczba; i++){
		for(int j = i; j <= liczba; j++){
			if ((long long)i * j <= liczba){
				wyn++;
			
			}
			else{
				break;
			}
		}	
	}
	
	cout <<wyn;	
	return 0;
}
