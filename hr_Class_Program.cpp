#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    private :
        int age ;
        int std;
        string f_name;
        string l_name;
    public :
    Student()
    {
        
    }
    void set_age(int age)
    {
        this->age = age; 
    }
    int get_age()
    {
        return age ;
    }
    
    void set_standard(int std)
    {
        this->std = std; 
    }
    int get_standard()
    {
        return std ;
    }
    
    
    void set_first_name(string str)
    {
        this->f_name=str;
    }
    string get_first_name()
    {
        return f_name;
    }
    
    void set_last_name(string str)
    {
        this->l_name=str;
    }
    string get_last_name()
    {
        return l_name;
    }
    
    string to_string()
    {
        ostringstream oss; 
        oss<<age<<","<<f_name<<","<<l_name<<","<<std;
        string strr= oss.str();
        return strr;

    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}