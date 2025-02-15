/*
Sample Input

The first line contains , the number of students in Kristen's class. The  subsequent lines contain each student's  exam grades for this semester.

3
30 40 45 10 10
40 40 40 10 10
50 20 30 10 10
Sample Output

1
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

class Student 
{
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
    
    public :
        Student() 
        {
            
        }
        void input()
        {
            int m1,m2,m3,m4,m5;
            cin>>m1>>m2>>m3>>m4>>m5;
            mark1=m1;
            mark2=m2;
            mark3=m3;
            mark4=m4;
            mark5=m5;   
        }
        int calculateTotalScore()
        {
            return (mark1+mark2+mark3+mark4+mark5);
        }
        
};
int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
