#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int casos;
    string nombre;
    string parentesco;
    cin >> casos;
    while ((casos != 0))
    {
        cin >> nombre;
        cin >> parentesco;
        if(nombre == "Luke" && parentesco == "padre"){
            cout << "TOP SECRET\n";
        }else{
            cout << nombre << ", yo soy tu " << parentesco <<"\n";
        }
        casos--;
    }
    
}