#include <iostream>
#include <algorithm>
using namespace std;
struct Nodo{
    char c;
    int izq, der;
};

Nodo arbol[5000];
int numNodos;
char c;

int leer(){
    cin >> c;
    if(c == '.'){
        return -1;
    }
    int pos = numNodos;
    numNodos++;
    arbol[pos].c = c;
    arbol[pos].izq = leer();
    arbol[pos].der = leer();
    return pos; 
}

void calcular(int u){
    if(u != -1){
        if(arbol[u].der == -1 && arbol[u].izq == -1){
            cout << arbol[u].c;
        }
        calcular(arbol[u].izq);
        calcular(arbol[u].der);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> c){
        numNodos = 1;
        arbol[0].c = c;
        arbol[0].izq = leer();
        arbol[0].der = leer();
        calcular(0);
        cout << "\n";
        
    }
}