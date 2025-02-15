// this is a program to convert the string which is in  numbers 12,32,34,54 seperated by , 
// out task is to remove the comma and append it as int to the vector  

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<string> result_vec;
    string result="" ;
    vector<int> iivec ;
    bool flag = false;
    for(int i=0;i<str.size();i++)
    {
        // cout<<"str = " << str[i]  << "   ";
        if(str[i]!=',')
        {
            result=result+str[i];
            // flag=false;
        }
        else
        {
            flag=true;
            result_vec.push_back(result);
            result="";
        }
    }
    if(1)
    {
        result_vec.push_back(result);
    }
    for(int i=0;i<result_vec.size();i++)
    {
        // cout<<result_vec[i]<< "  " ;    
        string str = result_vec[i];
        int sizee=str.size();
        
        int diff= 1;
        for(int i=0;i<sizee-1;i++)
        {
            diff=diff*10;
        }   
        int number =0; 
        int j=0;
        bool minflag=false;
        if(str[0]=='-')
        {
            j=j+1;
            diff=diff/10;
            minflag=true;
        }
        for(;j<sizee;j++)
        {
            int temp =str[j]-'0';
            number=number+(temp*diff);
            diff=diff/10;
        }
        if(minflag)
        {
            number=number*-1;
            iivec.push_back(number);
        }
        else
        {
            iivec.push_back(number);
            
        }
        
        // cout<<"NUber   -   > " <<  number <<" <------- ";
    }
    // cout<<"result_vec  : \n" ;
    // for(int i=0;i<result_vec.size();i++)
    // {
    //     cout<<result_vec[i] << "   " << endl ;
    // }
    
    return iivec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}