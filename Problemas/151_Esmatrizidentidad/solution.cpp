// Esquema de la entrada: caso de prueba que marca el final
#include <iostream>
using namespace std;




int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
	int fila;
	
	int numero;
  while(true){
	  cin >> fila;
	  if(fila == 0){
		  break;
	  }
	  bool es = true;
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < fila; j++){
			cin >> numero;
			if(es){
				
			if(i == j && numero != 1){
				es = false;
			}else if(i != j && numero != 0){
				es = false;
			}
			}
		}
	}
	if(es){
		cout << "SI\n";
	}
	else{
		cout << "NO\n";
	}
	}

  return 0;

}