#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int calles, intersecciones;
    int vertices[51];
    int origen, destino,impar;
    while(true){
        cin >> calles;
        if(calles == 0){
            break;
        }
        cin >> intersecciones;
        fill(vertices+1, vertices+intersecciones+1, 0);
        for(int i = 0; i < calles; i++){
            cin >> origen >> destino;
            vertices[origen]++;
            vertices[destino]++;
        }
        
        impar = 0;
        for(int i = 1; i <= intersecciones; i++){
            if(vertices[i] % 2 != 0){
                impar++;
            }
            if(impar > 2){
                break;
            }
        }
        if(impar == 0 || impar == 2){
            cout << "SI\n";
        }else{
            cout << "NO\n";
        }


        
    }
}