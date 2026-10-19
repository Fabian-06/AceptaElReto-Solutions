// Esquema de la entrada: número de casos
#include <iostream>
using namespace std;


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
  unsigned int numCasos;

  cin >> numCasos;
  int muros;
  int actual;
  int siguiente;
  int saltosA;
  int SaltosAbajo;
  for (unsigned int i = 0; i < numCasos; ++i) {
    saltosA = 0;
    SaltosAbajo = 0;
    cin >> muros;
    cin >> actual;
    for(int j = 1; j < muros; j++){
        cin >> siguiente;
        if(actual > siguiente){
            SaltosAbajo++;
        }
        else if(actual < siguiente){
            saltosA++;
        }
        actual = siguiente;
        
    }
    cout << saltosA << " " << SaltosAbajo << "\n";
  }
}