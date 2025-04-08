#include "funcs.cpp"

int main(){
    vector<int> primes;
    primes.push_back(2);

    int size;
    cout << "Enter the size of the primes: ";
    cin >> size;

    if (size < 1) {
        cout << "Invalid size" << endl;
        return 0;
    }
    else if (size == 1) {
        cout << "The first prime is 2" << endl;
        return 0;
    }
    else {
        for (int i=3; primes.size() < size; i+=2) {
            if (isPrime(primes, i)) {
                primes.push_back(i);
            }
        }
    }

    cout << "The " << size << "th prime is " << primes[size-1] << endl;

    printVector(primes);

    return 0;
}