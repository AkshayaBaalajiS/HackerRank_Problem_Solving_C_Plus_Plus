#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int return_val =0 ;
    if(a>b && a>c && a>d)
    {
        return_val=a;
    }
    else if(b>a && b>c && b>d)
    {
        return_val=b;
    }
    else if(c>a && c>b && c>d)
    {
        return_val=c;
    }
    else {
        return_val=d;
    }
    return return_val;
    
    
    
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}