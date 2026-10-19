#include <iostream>
using namespace std;


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
  unsigned int numCasos;
  int array[] = {6,8,10,2};

  cin >> numCasos;
  int res;
  int numero;
  int numero2;
  for (unsigned int i = 0; i < numCasos; ++i) {
    res = 0;
	for(int j = 0; j < 4;j++){
		cin >> numero;
		if(j != 3){
			res += numero*array[j];
		}else{
			cin >> numero2;
			res += numero*numero2*array[j];
		}
		
	}
    cout << res << "\n";
  }

  return 0;

}