/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    std::cout<<"Hello World\n";
    int arr[] ={1,2,3,1,2,3,4,5,7,8,9,4,5,6,7,8,9};
    
    vector<int> unique_vec;
    
    bool flag = false;
    
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    flag=false;
                    cout<<arr[i]<<"++++++++++++++++"<<arr[j]<<"   "<<flag<<endl;
                    break;
                }
                else
                {
                    cout<<arr[i]<<"-------------"<<arr[j]<<"   "<<flag<<endl;
                    flag=true;
                }
            }
        }
        if(flag)
        {
            
            unique_vec.push_back(arr[i]);
        }
    }
    for(int i :  unique_vec)
    {
        cout<< i << "   " ;
    }
    cout<<endl;
    return 0;
}
