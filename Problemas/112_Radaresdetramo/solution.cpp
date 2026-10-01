#include <iostream>
#include <string>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int distancia;
    int velocidadmax;
    int tiempo;
    while(true){
        std::cin >> distancia >> velocidadmax >> tiempo;
        if(distancia == 0 && velocidadmax == 0 && tiempo == 0){
            break;
        }
        if(distancia <= 0 || velocidadmax <= 0 || tiempo <= 0){
            std::cout << "ERROR\n";
            continue;
        }
        double velocidad = (distancia*3.6) / (tiempo);
        if(velocidad <= velocidadmax){
            std::cout << "OK\n";
        }
        else if(velocidad < velocidadmax*1.2){
            std::cout << "MULTA\n";
        }else{
            std::cout << "PUNTOS\n";
        }
    }


    return 0;
}