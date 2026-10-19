#include <iostream>
#include <string>


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int casos;
    std::cin >> casos;
    std::string palabra;
    for(int i = 0; i < casos; i++){
        std::cin >> palabra;
        if(palabra.find('a') != std::string::npos && palabra.find('e') != std::string::npos && palabra.find('i') != std::string::npos && palabra.find('o') != std::string::npos && palabra.find('u') != std::string::npos){
            std::cout << "SI\n";
        }
        else{
            std::cout << "NO\n";
        }
    }
}