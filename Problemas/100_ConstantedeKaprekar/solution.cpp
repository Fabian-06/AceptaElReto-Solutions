#include <iostream>
#include <algorithm>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int casos, num,j,res,contador;
    int lista[4];
    std::cin >> casos;
    for(int i = 0; i < casos; i++){
        std::cin >> num;
        if(num == 6174){
            std::cout << 0 << '\n';
        }else{
            j = 0;
            while(num != 0){
                lista[j] = num%10;
                num = num/10;
                j++;
            }
            while(j != 4){
                lista[j] = 0;
                j++;
            }
            if(lista[0] == lista[1] && lista[1] == lista[2] && lista[2] == lista[3]){
                std::cout << 8 << '\n';
            }else{
                res = 0;
                contador = 0;
                while(res != 6174){
                    std::sort(lista, lista+4);
                    res = (lista[3]*1000 + lista[2]*100+lista[1]*10+lista[0]) - (lista[0]*1000+lista[1]*100+lista[2]*10+lista[3]);
                    contador++;
                    if(res == 6174){
                        std::cout << contador << '\n';
                        break;
                    }
                    j = 0;
                    while(res != 0){
                        lista[j] = res%10;
                        res = res/10;
                        j++;
                    }
                    while(j != 4){
                        lista[j] = 0;
                        j++;
                    }
                    
                }
            }
        }
    }
}