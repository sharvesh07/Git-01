#include "headers.cpp"
#include "funcs.cpp"

int main(){

    int num;
    do {
        cout << "Enter the Number: ";
        cin >> num;
        if (num < 0) cout << "Warning: Number shoule be Positive.\nTry Again." << endl;
    }
    while (num < 0);

    cout << sqrt(num) << endl;
}