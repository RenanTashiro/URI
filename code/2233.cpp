#include <iostream>
 
using namespace std;
 
int main() {
 
    unsigned long long R, G, B;
    
    scanf("%llx%llx%llx", &R, &G, &B);
    
    unsigned long long ginr = (unsigned long long)(R/G) * (unsigned long long)(R/G);
    unsigned long long bing = (unsigned long long)(G/B) * (unsigned long long)(G/B);
    
    printf("%llx\n", 1 + ginr + ginr * bing);
 
    return 0;
}
