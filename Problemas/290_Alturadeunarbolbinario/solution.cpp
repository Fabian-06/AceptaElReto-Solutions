#include <iostream>
#include <algorithm>

using namespace std;

struct Nodo{
    int izq,der;
};

Nodo arbol[5000];
int numNodos;
char c;

int leer(){
    cin >> c;
    if(c == '.'){
        return -1;
    }else{
        int pos = numNodos;
        numNodos++;
        arbol[pos].izq = leer();
        arbol[pos].der = leer();
        return pos;
    }
}
int calcular(int u){
    if(u == -1){
        return 0;
    }
    int altIzq = calcular(arbol[u].izq);
    int altDer = calcular(arbol[u].der);
    return 1 + max(altIzq, altDer);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    while(casos != 0){
        numNodos = 0;
        int raiz = leer();
        int altura = calcular(raiz);
        cout << altura << "\n";
        casos--;
    }
}