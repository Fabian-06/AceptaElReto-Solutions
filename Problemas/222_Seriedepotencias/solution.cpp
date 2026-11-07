#include <iostream>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    int res;
    int sumar;

    while ((cin >> x >> n)){
        res = 1;
        sumar = 1;
        for(int i = 1; i <= n; i++){
            sumar *= x;
            if(sumar >= 1000007){
                sumar %=1000007;
            }
            res += sumar;
            if(res >= 1000007){
                res %=1000007;
            }
        }
        cout << res << "\n";
    }
    
    
}