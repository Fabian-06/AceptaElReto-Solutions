#include <iostream>
#include <iomanip>


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout << std::fixed << std::setprecision(1);

    int a, b;
    double res;
    while(true){
        std::cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        res = (a*b)/2.0;
        std::cout << res << '\n';
    }
}