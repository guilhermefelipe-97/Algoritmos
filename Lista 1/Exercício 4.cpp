#include <iostream>
using namespace std;

int main() {
    int n, percentual;
    cout << "digita n:";
    cin >> n;
    cout << "digite um percentual qualquer:";
    cin >> percentual;
    n=n*percentual/100;
   cout << "o resultado ser� de:" << n;
      
    return 0;
}
