#include <iostream>

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int casos;
    int diaAnterior;
    int total;
    int hoy;
    cin >> casos;
    while(casos != 0){
        total = 0;
        diaAnterior = 0;
        while(true){
            cin >> hoy;
            if(hoy == 0){
                break;
            }
            hoy = hoy+diaAnterior;
            total += hoy*2;
            diaAnterior = hoy;
        }
        cout << total << "\n";
        casos--;
    }
}