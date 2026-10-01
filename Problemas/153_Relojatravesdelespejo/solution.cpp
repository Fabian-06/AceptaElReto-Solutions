#include <iostream>
#include <string>

int main(){
    int simetrico_0[] = {11,10,9,8,7,6,5,4,3,2,1,12};
    int simetrico_1[] = {10,9,8,7,6,5,4,3,2,1,12,11};
    int hora,c,minutos;
    std::string linea;
    int casos;
    std::cin >> casos;
    while(casos != 0){
        std::cin >> linea;
        hora = std::stoi(linea.substr(0,2));
        minutos = std::stoi(linea.substr(3,2));
        if(minutos == 0){
            if(simetrico_0[hora-1] < 10){
                std::cout << 0 << simetrico_0[hora-1] << ":" << "00\n";
            }else{
                std::cout << simetrico_0[hora-1] << ":" << "00\n";
            }
        }else{
            if(simetrico_1[hora-1] < 10){
                std::cout << 0 << simetrico_1[hora-1] << ":";
            }else{
                std::cout << simetrico_1[hora-1] << ":";
            }
            int min = 60-minutos;
            if(min < 10){
                std::cout << 0 << min << "\n";
            }else{
                std::cout << min << "\n";
            }
        }
        casos--;
    }
    return 0;
}