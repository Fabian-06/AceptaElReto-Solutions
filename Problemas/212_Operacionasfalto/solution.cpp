#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int calles, intersecciones;
    bool vertices[51];
    int origen, destino,impar;
    while(true){
        cin >> calles;
        if(calles == 0){
            break;
        }
        cin >> intersecciones;
        fill(vertices+1, vertices+intersecciones+1, true);
        impar = 0;
        for(int i = 0; i < calles; i++){
            cin >> origen >> destino;
            vertices[origen] = !vertices[origen];
            if(!vertices[origen]){
                impar++;
            }else{
                impar--;
            }
            vertices[destino] = !vertices[destino];
            
            if(!vertices[destino]){
                impar++;
            }else{
                impar--;
            }
        }
        /*
        impar = 0;
        for(int i = 1; i <= intersecciones; i++){
            if(vertices[i] % 2 != 0){
                impar++;
            }
            if(impar > 2){
                break;
            }
        }*/
        if(impar == 0 || impar == 2){
            cout << "SI\n";
        }else{
            cout << "NO\n";
        }


        
    }
}