#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
void update(int *a,int *b) {
    // Complete this function    
    // std::cout<< "----------->"<< *a <<endl;
    // std::cout<< "----------->"<< *b <<endl;
    std::cout<< (*a)+(*b) <<endl;
    int diff = (*a)-(*b);
    if(diff<0)
    {
        diff=diff * -1;
        cout<<diff<<endl;
    }
    else {
        cout<<diff<<endl;
    }
    
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    // printf("%d\n%d", a, b);

    return 0;
}
