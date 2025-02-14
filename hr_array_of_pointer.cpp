#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr1,arr2;
    cin>>arr1>>arr2;
    
    int * ptr [arr1 ];
    int * qptr = new int [2 * arr2];
    
    int sizee;
    int temp;
    for(int i=0;i<arr1;i++)
    {
        cin>>sizee;
        int * arr_1 = new int [sizee];
        
        for(int j=0;j<sizee;j++)
        {
            cin>>temp;
            arr_1[j]=temp;
        }
        ptr[i]=arr_1;   
    }
    
    for(int i=0;i<2*arr2;i++)
    {
        cin>>temp;
        qptr[i]=temp;
    }
    // cout<<"--------->" <<ptr[0][1] <<endl;
    for(int i=0;i<2*arr2;i++)
    {
        // cout<< qptr[i]<<endl;
        if(i%2==0)
        { 
            for(int k=0;k<arr1;k++)
            {
                if(qptr[i]==k)
                {
                    int temp=qptr[i+1];
                    cout<<ptr[k][temp] << endl;
                }  
                
            }
        }         
    }
    
    return 0;
}
