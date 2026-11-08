#include <iostream>
#include <algorithm>

using namespace std;

struct Nodo{
    int izq, der;
};

char c;
Nodo arbol[5000];
int numNodos;

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
    int izq = calcular(arbol[u].izq);
    int der = calcular(arbol[u].der);
    if(izq == -1 || der == -1){
        return -1;
    }
    if(abs(izq-der) > 1){
        return -1;
    }
    return 1 + max(izq,der);
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    int raiz;
    cin >> casos;
    while(casos != 0){
        numNodos = 0;
        raiz = leer();
        int res = calcular(raiz);
        if(res != -1){
            cout << "SI\n";

        }else{
            cout << "NO\n";
        }
        casos--;
    }
}