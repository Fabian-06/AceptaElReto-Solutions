#include <iostream>
#include <queue>

using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int numero;
    priority_queue<int> menores;
    priority_queue<int, vector<int>, greater<int>> mayores;
    int salida;

    while(cin >> n){
        salida = 0;
        for(int i = 0; i < n; i++){
            
            cin >> numero;
            if(numero == 0){
                if(salida != 0){
                    cout << " ";
                }
                if(menores.empty()){
                    cout << "ECSA";
                    salida++;
                }
                else{
                    cout << menores.top();
                    menores.pop();
                    salida++;
                }
                
                if(menores.size() < mayores.size()){
                    menores.push(mayores.top());
                    mayores.pop();
                }
                
            }else{
                if(menores.empty() || numero <= menores.top()){
                    menores.push(numero);
                }else{
                    mayores.push(numero);
                }

                if(menores.size() > mayores.size()+1){
                    mayores.push(menores.top());
                    menores.pop();
                }else if(menores.size() < mayores.size()){
                    menores.push(mayores.top());
                    mayores.pop();
                }
            }
        }
        cout << "\n";
        while(!menores.empty()){
            menores.pop();
        }
        while(!mayores.empty()){
            mayores.pop();
        }
    }
    return 0;
}