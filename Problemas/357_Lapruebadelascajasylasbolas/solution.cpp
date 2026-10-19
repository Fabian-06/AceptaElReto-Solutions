#include <iostream>
#include <cmath>



int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n;
    long long paseos;
    while(std::cin >> n){
        paseos = 0;
        while(n > 0){
            paseos++;
            n = n/2;
        }
        std::cout << paseos << '\n';
    }


    return 0;
}