#include <iostream>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int montana;
    int actual;
    int siguiente;
    int max;
    int array[100000];
    int res;
  while(true){
    cin >> montana;
    if(montana == 0){
        break;
    }
    for(int i = 0; i< montana; i++){
        cin >> actual;
        array[i] = actual;
    }
    max = array[montana-1];
    res = 1;
    for(int i = montana-2; i >= 0; i--){
        if(array[i] > max){
            res++;
            max = array[i];
        }
    }
    cout << res << "\n";
  }
    

  return 0;

} // main