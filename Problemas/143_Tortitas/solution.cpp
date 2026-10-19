#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::vector<int> vector;
    int entrada;
    int movimientos;
    int posiciones;
    
    while (true){
        while(true){
            std::cin >> entrada;
            if(entrada == -1){
                break;
            }
            vector.push_back(entrada);
        }
        std::cin >> movimientos;
        if(vector.empty()){
            break;
        }

        for(int i = 0; i < movimientos; i++){
            std::cin >> posiciones;
            if(posiciones > 1){
                std::reverse(vector.end()-posiciones, vector.end());
            }
        }
        std::cout << vector.back() << '\n';
        vector.clear();

    }
    

    return 0;
}