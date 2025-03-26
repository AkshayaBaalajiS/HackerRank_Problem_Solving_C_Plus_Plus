#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void function_to_do(int n)
{
    if(n>=10)
    {
        if(n%2==0)
        {
            cout<<"even\n";
            // break;
        }
        else {
            cout<<"odd\n";
            // break;
        }
    }
    else if(n==9)
    {
        cout<<"nine\n";
    }
    else if(n==8)
    {
        cout<<"eight\n";
    }
    else if(n==7)
    {
        cout<<"seven\n";
    }
    else if(n==6)
    {
        cout<<"six\n";
    }
    else if(n==5)
    {
        cout<<"five\n";
    }
    else if(n==4)
    {
        cout<<"four\n";
    }
    else if(n==3)
    {
        cout<<"three\n";
    }
    else if(n==2)
    {
        cout<<"two\n";
    }
    else if(n==1)
    {
        cout<<"one\n";
    }
    else if(n==0)
    {
        cout<<"zero\n";
    }   
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int number_1, number_2;
    cin>>number_1>>number_2;
    
    // function_to_do(number_1);
    // function_to_do(number_2);
    for(int i=number_1;i<=number_2;i++)
    {
        function_to_do(i);
    }
    
    return 0;
}