#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int m;
    int max = 1000007;
    int pot;
    int res;
    while(cin >> n >> m){
        res = 1;
        pot = 1;
        for(int i = 1; i <= m; i++){
            pot *= n;
            if(pot >= max){
                pot %= max;
            }
            res += pot;
            if(res >= max){
                res %= max;
            }
        }
        cout << res << '\n';
    }
}