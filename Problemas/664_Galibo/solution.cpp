// Esquema de la entrada: caso de prueba que marca el final
#include <iostream>
using namespace std;


 // casoDePrueba

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int puentes;
    int carriles;
    int altura;
    int max;
    int res;
    while(true){
        cin >> puentes;
        if(puentes == 0){
            break;
        }
        
        res = 800;
        for(int i = 0; i < puentes; i++){
            cin >> carriles;
            max = 0;
            for(int j = 0; j < carriles; j++){
                cin >> altura;
                if(altura > max){
                    max = altura;
                }
            }
            if(max <res){
                res = max;
            }
        }
        cout << res << "\n";
    }

  return 0;

} 