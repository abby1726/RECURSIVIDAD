#include <iostream>

using namespace std;

double par(int);
double impar(int);
double suma(int);

int main() {

    cout << suma(1) << endl;
    cout << suma(3) << endl;
    cout << suma(5) << endl;
    cout << suma(7) << endl;
    cout << suma(9) << endl;
    cout << suma(11) << endl;
    return 0;
}

double suma(int n) {
    if(n % 2) return impar(n);
    else return par(n);
}

double par(int n) {
    return impar(n-1)-1/double(n);
}

double impar(int n) {
    if(n == 1) return 1;
    return par(n-1)+1/double(n);
}
