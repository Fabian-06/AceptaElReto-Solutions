#include <iostream>
#include <cmath>

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long int num;
    int contador;
    while(std::cin >> num){
        contador = std::log10(num)+1;
        while(contador > 1 && num % contador == 0){
            num = num /10;
            contador--;
        }
        if(contador == 1){
            std::cout << "POLIDIVISIBLE\n";
        }else{
            std::cout << "NO POLIDIVISIBLE\n";
        }
    }
}