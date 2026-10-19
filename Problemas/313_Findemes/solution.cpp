#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int casos, cuenta,cambio;
    std::cin >> casos;
    for(int i = 0; i < casos; i++){
        std::cin >> cuenta >> cambio;
        if(cuenta+cambio >= 0){
            std::cout << "SI\n";
        }else{
            std::cout << "NO\n";
        }
    }
}