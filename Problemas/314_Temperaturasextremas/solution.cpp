#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int casos, entradas,picos,valles,elem;
    int lista[10000];
    
    std::cin >> casos;
    for(int i = 0; i<casos; i++){
        picos = valles = 0;
        std::cin >> entradas;
        for(int j = 0; j < entradas; j++){
            std::cin >> elem;
            lista[j] = elem;
        }
        
        for(int j = 1; j < entradas-1; j++){
            if(lista[j] > lista[j-1] && lista[j] > lista[j+1]){
                picos++;
            }
            else if(lista[j] < lista[j-1] && lista[j] < lista[j+1]){
                valles++;
            }
        }
        std::cout << picos << " " << valles << "\n";
    }

}