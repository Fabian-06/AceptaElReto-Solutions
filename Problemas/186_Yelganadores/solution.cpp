#include <iostream>

using namespace std;

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int punt[20];
    int j;
    string color;
    int equipos;
    int globos;
   
    while((cin >> equipos >> globos)&& (equipos != 0 || globos != 0)){
        if(equipos == 1){
            for(int i = 0; i < globos;i++){
                cin >> j >> color;
            }
            cout << "1" << '\n';
            continue;
        }
        if(globos == 0){
            cout << "EMPATE" << '\n';
            continue;
        }
        for(int i = 0; i<equipos ; i++){
            punt[i] = 0;
        }
        for(int i = 0; i<globos ; i++){
            cin >> j >> color;
            punt[j-1]+=1;
        }
        int indice=0;
        int contador=1;
        for(int k = 1; k<equipos; k++){
            if(punt[k] > punt[indice]){
                indice = k;
                contador = 1;
            }else if(punt[k] == punt[indice]){
                contador++;
            }
        }
        if(contador == 1){
            cout << indice+1 << '\n';
        }else{
            cout << "EMPATE" << '\n';
        }
    }

    return 0;
}