#include <iostream>


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int meses[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int casos;
    int dia;
    int mes;
    int total;
    std::cin >> casos;
    for(int i = 0; i < casos; i++){
        total = 0;
        std::cin >> dia >> mes;
        for(int j = mes; j < 12; j++){
            total += meses[j];
        }
        total += meses[mes-1]-dia;
        std::cout << total << '\n';
    }

    return 0;
}