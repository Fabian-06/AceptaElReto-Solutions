#include <iostream>

using namespace std;


int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int casos;
    int ano;
    int dia;
    int mes;
    int suma;
    string linea;
    std::cin >> casos;
    while(casos != 0){
        cin >> linea;
        ano = stoi(linea.substr(6,4));

        if(ano % 4 == 0){
            dia = stoi(linea.substr(0,2));
            mes = stoi(linea.substr(3,2));
            if(mes == 2 && dia < 29 || mes == 1){
                suma = 0;
            }else{
                suma = 4;
            }
        }
        else{
            suma = 4 - ano%4;
        }
            
        ano = ano + suma;
        
        if(ano < 100){
            cout << "29/02/00" << ano << '\n';
        }
        else if (ano < 1000){
            cout << "29/02/0" << ano << '\n';
        }
        else{
            cout << "29/02/" << ano << '\n';
        }

        casos--;
    }

    return 0;
}