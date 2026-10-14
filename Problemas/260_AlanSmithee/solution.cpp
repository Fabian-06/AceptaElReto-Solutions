#include <iostream>
#include <cctype>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    string linea1;
    string linea2;
    int n1;
    int n2;
    cin >> casos;
    cin.ignore();
    int lista[26];
    while(casos != 0){
        for(int i = 0; i < 26; i++){
            lista[i] = 0;
        }
        getline(cin, linea1);
        getline(cin,linea2);
        
        
        transform(linea1.begin(), linea1.end(),linea1.begin(), ::tolower);
        transform(linea2.begin(), linea2.end(),linea2.begin(), ::tolower);
        
        linea1.erase(remove(linea1.begin(), linea1.end(), ' '), linea1.end());
        linea2.erase(remove(linea2.begin(), linea2.end(), ' '), linea2.end());
        if(linea1.length() != linea2.length()){
            cout << "NO\n";
            casos--;
            continue;
        }
        bool res = true;
        for(int i = 0; i < linea1.length(); i++){
            n1 = linea1[i] - 'a';
            n2 = linea2[i] - 'a';
            lista[n1]++;
            lista[n2]--;

        }
        for(int i = 0; i < 26 && res; i++){
            if(lista[i] != 0){
                res = false;
            }
        }
        if(res){
            cout << "SI\n";
        }else{
            cout<<"NO\n";
        }
        casos--;
    }
}
