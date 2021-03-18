#include <iostream>
#include<queue>
#include <vector>
using namespace std;
struct dos{
    int wie;
    int odl;
    bool operator <(const dos& other)const{
        return odl < other.odl;
    }
};
vector<dos> tabw[1000 * 1000];
priority_queue<dos>kolejka;
int odleglos[10000];
int dij(){
    dos teraz;
    dos pomw;
    while (kolejka.empty() == false){
        teraz = kolejka.top();
        kolejka.pop();
        if(teraz.odl < odleglos[teraz.wie]){
            odleglos[teraz.wie] = teraz.odl;
            for(int i = 0; i < tabw[teraz.wie].size(); i++){
                pomw.wie = tabw[teraz.wie][i].wie;
                pomw.odl = teraz.odl + tabw[teraz.wie][i].odl;
                if(pomw.odl < odleglos[pomw.wie]){
                    kolejka.push(pomw);
                }
            }
        }

    }

}
int main(){
    int ilp,ilw;
    int pocz,kon;
    cin >>ilw>>ilp;
    cin >>pocz>>kon;
    int a,b,c;
    dos pomw;
    for(int i = 0; i < ilp; i++){
        cin >>a>>b>>c;
        a--;b--;
        pomw.odl = a;
        pomw.odl = c;
        tabw[b].push_back(pomw);
        pomw.wie = b;
        tabw[a].push_back(pomw);
    }
    pomw.wie = pocz - 1;
    pomw.odl = 0;
    kolejka.push(pomw);
    for(int i = 0; i < 100; i++){
    odleglos[i] = 1000 * 1000 * 100;
    }
    dij();
    for(int i = 0; i < ilw; i++){
    cout <<i + 1<<" "<<odleglos[i]<<"\n";

    }
}
