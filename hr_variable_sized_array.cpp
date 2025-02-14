// Way 1 but Time limit exceeded for this input 100000 100000
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     int arr1,arr2;
//     cin>>arr1>>arr2;
    
//     int * ptr [arr1 ];
//     int * qptr = new int [2 * arr2];
    
//     int sizee;
//     int temp;
//     for(int i=0;i<arr1;i++)
//     {
//         cin>>sizee;
//         int * arr_1 = new int [sizee];
        
//         for(int j=0;j<sizee;j++)
//         {
//             cin>>temp;
//             arr_1[j]=temp;
//         }
//         ptr[i]=arr_1;   
//     }
    
//     for(int i=0;i<2*arr2;i++)
//     {
//         cin>>temp;
//         qptr[i]=temp;
//     }
//     // cout<<"--------->" <<ptr[0][1] <<endl;
//     for(int i=0;i<2*arr2;i++)
//     {
//         // cout<< qptr[i]<<endl;
//         if(i%2==0)
//         { 
//             for(int k=0;k<arr1;k++)
//             {
//                 if(qptr[i]==k)
//                 {
//                     int temp=qptr[i+1];
//                     cout<<ptr[k][temp] << endl;
//                 }  
                
//             }
//         }         
//     }
    
//     return 0;
// }


// Way 2 
#include<iostream>
using namespace std;
#include<vector>

int main()
{
    int arr1,arr2 ;
    cin>>arr1>>arr2;

    // cout<<arr1<<arr2<<endl;

    vector<vector<int>> vvec ;

    int arr[arr2*2];

    for(int i=0;i<arr1;i++)
    {
        int size;
        cin>>size;
        vector<int> vtempp;
        for(int j=0;j<size;j++)
        {
            int tmep;
            cin>>tmep;
            vtempp.push_back(tmep);
        }
        vvec.push_back(vtempp);
    }

    for(int i=0;i<arr2*2;i++)
    {
        int temp;
        cin>>temp;
        arr[i]=temp;
    }

    for(int i=0;i<arr2*2;i++)
    {
    //     if(i%2==0)
    //     {
    //         int temp=arr[i];
    //         int place=arr[i+1];
    //         cout<< vvec[temp].at(place)<<endl;

    //     }
    //     else{
    //         continue;
    //     }
    // }
        int temp=arr[i];
        int place=arr[i+1];
        cout<<vvec[temp][place]<<endl;
        i++;
    }

}