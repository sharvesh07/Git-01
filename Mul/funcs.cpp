#include "headers.cpp"

int mul(int a, int b){
    int x = min(a,b);
    int y = max(a,b);

    int res = 0;
    int i=0;
    while (x) {
        if (x&1) res += (y << i);
        x = x >> 1;
        i++;
    }
    return res;
}

int neg(int num) {
    return (num ^ 0xffffffff) + 1;
}
