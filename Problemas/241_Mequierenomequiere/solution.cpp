#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int casos;
    int num;
    int i;
    std::cin >> casos;
    while(casos != 0){
        std::cin >> num;
        i = 0;
        bool posible = false;
        
        while(i <= num/4){
            if((num-4 * i) % 3 == 0){
                posible = true;
                break;
            }
            i++;
        }
        if(!posible){
            std::cout << "IMPOSIBLE\n";
        }else{
            std::cout << i << "\n";
        }
        casos--;
    }
}