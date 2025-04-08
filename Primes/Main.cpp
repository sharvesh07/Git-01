#include "headers.cpp"
#include "funcs.cpp"

int main(){

    int size;
    do {
        cout << "Enter the Number of Primes: ";
        cin >> size;
        if (size < 1) {
            cout << "Warning: Size should be greater than 0." << endl;
            cout << "Try Again." << endl;
        }
    }   while (size < 1);

    vector<int> primes;
    primes.push_back(2);

    if (size > 1) primes.push_back(3);

    for (int i=5; primes.size()<size; i+=2) {
        if (isPrime(primes, i)){
            primes.push_back(i);
        }
    }

    printVector(primes);

    return 0;
}