#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int casos;
    int gotas;
    int horas;
    int minutos;
    int segundos;
    cin >> casos;
    while(casos!=0){
        cin >> segundos;
        horas = minutos = 0;
        horas = segundos / 3600;
        segundos -= (horas*3600);
        minutos = segundos / 60;
        segundos -= (minutos*60);
        if(horas < 10){
            cout << 0 << horas << ":";
        }else{
            cout << horas << ":";
        }
        if(minutos < 10){
            cout << 0 << minutos << ":";
        }else{
            cout << minutos << ":";
        }
        if(segundos < 10){
            cout << 0 << segundos << "\n";
        }else{
            cout << segundos << "\n";
        }
        casos--;
    }
}