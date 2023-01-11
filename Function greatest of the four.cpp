#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    int sum = 0;
    if (a > b and a > c and a > d )
        sum += a;
    else if (b > a and b > c and b > d)
        sum += b;
    else if (c > a and c > b and c > d)
        sum += c;
    else if (d > a and d > b and d > c)
        sum += d;
    return sum;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}