// Esquema de la entrada: caso de prueba que marca el final
#include <iostream>
using namespace std;





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	double semana[6];
  while(true){
	
	cin >> semana[0];
	int menor = 0;
	int mayor = 0;
	double suma = semana[0];
	if(semana[0] == -1){
		break;
	}
	for(int i = 1; i < 6;i++){
		cin >> semana[i];
		suma+= semana[i];
		if(semana[i] < semana[menor]){
			menor = i;
		}
		if(semana[i] > semana[mayor]){
			mayor = i;
		}
	}
	if(mayor == 0){
		cout << "MARTES ";
	}else if(mayor == 1){
		cout << "MIERCOLES ";
	}else if(mayor == 2){
		cout << "JUEVES ";
	}else if(mayor == 3){
		cout << "VIERNES ";
	}else if(mayor == 4){
		cout << "SABADO ";
	}else{
		cout << "DOMINGO ";
	}
	if(menor == 0){
		cout << "MARTES ";
	}else if(menor == 1){
		cout << "MIERCOLES ";
	}else if(menor == 2){
		cout << "JUEVES ";
	}else if(menor == 3){
		cout << "VIERNES ";
	}else if(menor == 4){
		cout << "SABADO ";
	}else{
		cout << "DOMINGO ";
	}
    if(semana[5] > (suma/6)){
		cout << "SI\n";
	}else if(semana[5] == (suma/6)){
		cout << "EMPATE\n";
	}
	else{
		cout << "NO\n";
	}
  }
  return 0;

}