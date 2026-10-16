#include <iostream>
#include <algorithm>
using namespace std;

bool recursvia(int t1, int t2, int pos, int juegos, int* array){
    if(((pos == juegos && t1 >= 0 && t2 >= 0))){
        return true;
    }
    if(t1 < 0 || t2 < 0){
        return false;
    }
    return recursvia(t1-array[pos],t2,pos+1,juegos,array) || recursvia(t1,t2-array[pos],pos+1,juegos,array);
 }

int main() {

  int tamano;
  int juegos;
  int t;
  int array[8];
  int res;
  while(cin >> tamano >> juegos){
   

    for(int i = 0; i < juegos; i++){
        cin >> t;
        array[i] = t;
        
    }
    res = recursvia(tamano-array[0],tamano,1,juegos,array);

    
    if(res){
        cout << "SI\n";
    }else{
        cout << "NO\n";
    }
  }

  return 0;

} // main