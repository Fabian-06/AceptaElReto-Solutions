#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int toros,res,elem;
    while(std::cin >> toros){
        res = 0;
        for(int i = 0; i < toros; i++){
            std::cin >> elem;
            if(elem > res){
                res = elem;
            }
        }
        std::cout << res << "\n";
    }
}