#include "headers.cpp"

auto sqrt(int num) {
    auto l = 1;
    auto r = num;
    auto mid = (l+r)/2;

    while (l<r){
        if (mid*mid > num) {
            r = mid;
        }
        else if (mid*mid < num) {
            l = mid;
        }
        else {
            return mid;
        }
        mid = (l+r)/2;
        if (l == mid) break;
        cout << l << ' ' << mid << ' ' << r << endl;
    }

    return mid;
}