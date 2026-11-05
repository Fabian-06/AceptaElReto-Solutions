#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int filas;
    int asientos;
    int cola;
    long long total;
    int array[100000];
    int n;

    while(cin >> filas >> asientos >> cola){
        int ocupados = 0;
        int maxOcupados = filas*asientos;
        for(int i = 0; i < filas; i++){
            array[i] = 0;
        }
        for (int i = 0; i < filas; i++) {
            cin >> n;
            array[n]++;
            ocupados+=n;
        }
        int asignar;
        if(ocupados+cola > maxOcupados ){
            asignar = maxOcupados-ocupados;
        }else{
            asignar = cola;
        }
        total = 0;
        int i = 0;
        while(asignar != 0){
            if(asignar >= array[i]){}
            if(array[i] > 0){
                if(asignar >= array[i]){
                    total += array[i] * (asientos-i);
                    asignar -= array[i];
                }else{
                    total += asignar*(asientos-i);
                    asignar -= asignar;
                }
                
            }
            i++;
            
        }
        std::cout << total << "\n";
        
        
    }
}