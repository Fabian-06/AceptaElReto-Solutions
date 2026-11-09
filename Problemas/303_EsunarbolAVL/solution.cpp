#include <iostream>
#include <algorithm>

using namespace std;

struct Nodo{
    int valor;
    int izq, der;
};


Nodo arbol[4000];
int n,numNodos;;
int leer(){
    cin >> n;
    if(n == -1){
        return -1;
    }
    int pos = numNodos;
    numNodos++;
    arbol[pos].valor = n;
    arbol[pos].izq = leer();
    arbol[pos].der = leer();
    return pos;
    
}
int esEquilibrado(int u){
    if(u == -1){
        return 0;
    }
    int altIzq = esEquilibrado(arbol[u].izq);
    int altDer = esEquilibrado(arbol[u].der);
    if(altDer == -1 || altIzq == -1){
        return -1;
    }
    int dif = abs(altIzq-altDer);
    if(dif >= 2){
        return -1;
    }
    return 1 + max(altDer,altIzq);
}
bool esEstructurado(int u, int min, int max){
    if(u == -1){
        return true;
    }
    if(arbol[u].valor <= min || arbol[u].valor >= max){
        return false;

    }
    return esEstructurado(arbol[u].der, arbol[u].valor, max) && esEstructurado(arbol[u].izq, min, arbol[u].valor);;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos, raiz;
    int equilibrado;
    bool estructurado;
    cin >> casos;
    while(casos != 0){
        numNodos = 0;
        raiz = leer();
        equilibrado = esEquilibrado(raiz);
        estructurado = esEstructurado(raiz, -__INT_MAX__, __INT_MAX__);
        if(estructurado && equilibrado != -1){
            cout << "SI\n";
        }else{
            cout << "NO\n";
        }
        casos--;
    }
}