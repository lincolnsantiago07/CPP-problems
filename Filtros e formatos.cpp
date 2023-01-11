#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int a = 3;
    long b = 12345678912345;
    char c = 'a';
    float d = 334.230;
    double e = 14049.304930000;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    printf("%c %lf", d);
    printf("%c %lf", e);
    
    
    return 0;
}