#include <iostream>
using namespace std;
long long tabs[1000010];
long long tab [1000010];
int main(){
ios_base::sync_with_stdio(0);
int lim;
cin >>lim;
for(int i = 0; i < lim; i++){
    cin >>tab[i];
}
if(lim == 1){
    cout <<tab[0];
    return 0;
}
tabs[0] = tab[0];
tabs[1] = tab[1];
tabs[2] = tabs[0] + tab[2];
for(int i = 3; i < lim; i++){
    tabs[i] = tab[i] + max(tabs[i-2], tabs[i - 3]);
}
cout <<max(tabs[lim - 1],tabs[lim - 2]);
return 0;
}
