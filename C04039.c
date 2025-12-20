#include <stdio.h>
#include <math.h>

#define ll long long

int main() {
    ll x, y;
    while (scanf("%lld %lld", &x, &y) != -1) {
        ll d = abs(y - x);
        ll k = sqrt(d);
        if (k * k == d) printf("%lld\n", 2 * k - 1);
        else if (d <= k * k + k) printf("%lld\n", 2 * k);
        else printf("%lld\n", 2 * k + 1);
    }
    return 0;
}
