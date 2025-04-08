#include "headers.cpp"
#include "funcs.cpp"

int main(){

    int num1, num2;
    
    cout << "Enter the First Number: ";
    cin >> num1;

    cout << "Enter the Second Number: ";
    cin >> num2;

    bool f_neg = false;
    if (num1 < 0) {
        f_neg != f_neg;
        num1 = neg(num1);
    }
    if (num2 < 0) {
        f_neg != f_neg;
        num2 = neg(num2);
    }

    int num = mul(num1, num2);
    if (f_neg) num = neg(num);

    cout << "The Multiple of " << num1 << " and " << num2 << ": ";
    cout << num << endl;

    return 0;
}