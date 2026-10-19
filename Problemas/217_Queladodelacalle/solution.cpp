#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int num;
    std::cin >> num;
    while(num != 0){
        if(num % 2 == 0){
            std::cout << "DERECHA\n";
        }else{
            std::cout << "IZQUIERDA\n";
        }
        std::cin >> num;
        
    }

}