#include <iostream>

long long factorial(long long num){
    if(num <= 1){
        return 1;
    }

    return num * factorial(num-1);
}

int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int casos;
    long long numero;
    long long total;
    std::cin >> casos;
    while(casos != 0){
        std::cin >> numero;
        if(numero < 5){
            total = factorial(numero);
            std::cout << total%10 << "\n";
        }else{
            std::cout << 0 << "\n";
        }
    
        
        casos--;
    }

    return 0;
}