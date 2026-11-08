#include <iostream>
#include <algorithm>

using namespace std;

struct Nodo{
    int valor;
    int izq,der;
};

Nodo arbol[4000];
int numNodos;
int nodo;

int leer(){
    cin >> nodo;
    if(nodo == -1){
        return -1;
    }
    int pos = numNodos;
    numNodos++;
    arbol[pos].valor = nodo;
    arbol[pos].izq = leer();
    arbol[pos].der = leer();
    return pos;

}

bool es(int u, int min, int max){
    if(u == -1){
        return true;
    }
    if(arbol[u].valor <= min || arbol[u].valor >= max){
        return false;
    }
    return es(arbol[u].izq, min, arbol[u].valor) && es(arbol[u].der, arbol[u].valor, max);

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int casos;
    cin >> casos;

    while(casos != 0){
        numNodos = 0;
        int raiz = leer();
        bool res = es(raiz, -__INT_MAX__, __INT_MAX__);
        if(res){
            cout << "SI\n";
        }else{
            cout << "NO\n";
        }
        casos--;
    }
}