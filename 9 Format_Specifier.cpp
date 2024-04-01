#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. */ 
    int n;
    long l;
    char ch;
    float f;
    double d;
    scanf("%d %ld %c %f %lf",&n,&l,&ch,&f,&d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",n,l,ch,f,d);
    return 0;
}
