#include <iostream>
#include <cmath>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n1, n2,res1,res2;

    while(true){
        std::cin >> n1 >> n2;
        if(n1 == 0 && n2 == 0){
            break;
        }
        res1 = abs(n1-n2);
        if(n1 > n2){
            res2 = 99-n1+n2;
        }else{
            res2 = n1-n2+99;
        }
        if(res1 < res2){
            std::cout << res1 << '\n';
        }else{
            std::cout << res2 << '\n';
        }
    }
}
