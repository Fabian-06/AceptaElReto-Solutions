#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int casos, dividendo,divisor,q,r;
    cin >> casos;
    for(int i = 0; i<casos; i++){
        cin >> dividendo >> divisor;
        if(divisor == 0){
            cout << "DIV0\n";
            continue;
        }
        if(dividendo % divisor == 0){
            q = dividendo/divisor;
            r=0;
        }else if(dividendo >= 0){
            r = abs(dividendo%divisor);
            q = (dividendo-r) / divisor;
        }else if(dividendo < 0 && divisor > 0){
            q = dividendo / divisor;
            q--;
            r = dividendo - (q*divisor);
        }else{
            q = dividendo / divisor;
            q++;
            r = dividendo - (q*divisor);
        }
        cout << q << " " << r << "\n";

    }
}