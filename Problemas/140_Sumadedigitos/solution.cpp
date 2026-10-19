#include <iostream>
#include <vector>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int numero;
    int res;
    int array[9];
    int j;
    while(true){
        std::cin >> numero;
        if(numero< 0){
            break;
        }
        j=0;
        res = 0;
        if(numero == 0){
            
            array[j] = numero;
            j++;
        }
        while(numero != 0){
            res+= numero%10;
            
            array[j] = numero%10;
            j++;
            numero = numero /10;
        }
        for(int i = 0; i < j; i++){
            std::cout << array[j-1-i];
            if(i < j - 1){
                std::cout << " + ";
            }
            else{
                std::cout << " = ";
            }
        }
        std::cout << res << '\n';
        
    }
    return 0;
}