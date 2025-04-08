#include "headers.cpp"

bool isPrime(vector<int> primes, int target) {
    for (int i: primes){
        if (target % i) continue;
        else return false;
        if (target < i*i) return true;
    }
    return true;
}

void printVector(vector<int> primes) {
    for (int i: primes) {
        cout << i << ' ';
    }   cout << endl;
}