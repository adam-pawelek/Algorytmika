#include <iostream>
#include <vector>
using namespace std;

vector<int> tabw[1000 * 1000]; // tablica wierzchokow
bool odw[1000 * 1000];
int dfs(int x){
    odw[x] = 1;
    cout <<x + 1<<"\n";
    for(int i = 0; i < tabw[x].size(); i++){
        if (odw[tabw[x][i]] == 0){
            dfs(tabw[x][i]);
        }
    }
}


int main (){
int ilw; // liczba wierzcholkow
int ilk; // liczba krawedzi
cin >>ilw>>ilk;
int a,b;

for(int i = 0; i < ilk; i++){
    cin >>a>>b;
    a--;b--;
    tabw[a].push_back(b);
    tabw[b].push_back(a);
}
// wypisanie grafu
for(int i = 0; i < ilw; i++){
    cout <<i+1<<": ";
    for(int j = 0; j < tabw[i].size(); j++){
        cout <<tabw[i][j] + 1<<" ";
    }
    cout <<"\n";
}

dfs(0); // przyjmuje ze zawsze bedzie wierzcholek 0

return 0;
}
