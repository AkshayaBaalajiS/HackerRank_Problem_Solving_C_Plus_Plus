/*
Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd

*/

#include <iostream>
#include <cstdio>
using namespace std;


void function_to_find_even_or_edd(int n)
{
    if(n%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
}


void function_to_do_something(int n)
{   
    switch (n)
        {
            case 1:
                cout<<"one"<<endl;
                break;
            case 2:
                cout<<"two"<<endl;
                break;
                
            case 3:
                cout<<"three"<<endl;
                break;
                
            case 4:
                cout<<"four"<<endl;
                break;
                
            case 5:
                cout<<"five"<<endl;
                break;
                
            case 6:
                cout<<"six"<<endl;
                break;
                
            case 7:
                cout<<"seven"<<endl;
                break;
                
            case 8:
                cout<<"eight"<<endl;
                break;
                
            case 9:
                cout<<"nine"<<endl;           
                break;
                
            default:
                break;
        }
}

int main() {
    // Complete the code.
    int n, nn;
    cin>>n;
    cin>>nn;
    
    for(int i=n;i<=nn;i++)
    {
        if(i<=9)
        {
            function_to_do_something(i);            
        }
        else {
            function_to_find_even_or_edd(i);
        }
            
    }
    
    return 0;
}