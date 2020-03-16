#include <iostream>
using namespace std;
int main(){
    long long licz;
    cin >>licz;
    while(licz % 2 == 0){
        licz = licz / 2;
    }
    if (licz == 1){
        cout <<"TAK";
    }
    else{
        cout <<"NIE";
    }

return 0;
}
