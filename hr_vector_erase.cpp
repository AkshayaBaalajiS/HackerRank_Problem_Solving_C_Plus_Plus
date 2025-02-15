#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number ;
    cin>>number;
    vector<int> vec;
    for(int i=0;i<number;i++)
    {
        int tmep;
        cin>>tmep;
        vec.push_back(tmep);
    }
    int start;
    cin>>start;
    
    int scounter;
    cin>>scounter;
    int lcounter;
    cin>>lcounter;
    
    int indele=0;
    for(int i=scounter;i<=lcounter;i++)
    {
        indele++;
    }
    
    vec.erase(vec.begin()+start-1);
    vec.erase(vec.begin()+scounter-1,vec.begin()+scounter+indele-2);
    
/*
The first query is to erase the 2nd element in the vector, which is 4. 
Then, modifed vector is {1 6 2 8 9}, we want to remove the range of 2~4, 
which means the 2nd and 3rd elements should be removed. 
Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}
 */
    // int a= ptr[0];
    // int b=ptr[number-1];
    // vec.erase(ptr[0],b); // this is the error because erase accept only iterator 


    // vec.erase(ptr.begin()+1,ptr.end()-1);
    
    // for(int i : vec)
    // {
    //     cout<< i << " " ;
    // }
    
    // for(int i=ptr[0]-1;i<=ptr[1];i++)  // 2    4     1 
    // {
    //     // cout<< "i = " << i ;
    //     // vec[i]=vec[i+1];
    //     // // vec.pop_back();
    //     // vec.erase(vec.end()-1);
    //     int startt = ptr[0] ;
    //     int endd = vec.size() - ptr[1];
        
    //     vec.erase(vec.begin()+startt , vec.end()-endd);
         
        
        
    // }
    
    
    // int startt = ptr[0] ;
    // int endd = vec.size() - ptr[1];

    
    // vec.erase(vec.begin()+startt-1 , vec.end()-endd);
    
    
    cout<<vec.size()<<endl;
     for(int i : vec)
    {
        cout<< i << " " ;
    }
    
    
    // for(int i : ptr)
    // {
    //     cout<< i << " " ;
    // }
    
    return 0;
}
