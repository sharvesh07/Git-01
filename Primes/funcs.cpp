#include "headers.cpp"

bool isPrime(vector<int> primes, int target){
    for (int i=1; primes[i] * primes[i] <= target; i++) {
        if (target % primes[i] == 0) {
            return false;
        }
    }
    return true;
}

void printVector(vector<int> primes) {
    for (int i=0; i<primes.size(); i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
}