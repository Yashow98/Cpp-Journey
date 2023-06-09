#include <iostream>

class Student 
{ 
public: 
    char& GetScore(bool midterm) 
    { 
        return const_cast<char&>(const_cast<const Student*>(this)->GetScore(midterm)); 

    } 
    const char& GetScore(bool midterm) const 
    { 
        if (midterm) 
        { 
            return midtermScore; 
        } 
        else 
        { 
            return finalScore; 
        } 
    }
private: 
    char midtermScore; 
    char finalScore; 
};

int main()
{
    // non-const object 
    Student a; 
    // We can assign to the reference. Non-const version of GetScore is called 
    a.GetScore(true) = 'B'; 
    a.GetScore(false) = 'A'; 
    
    // const object 
    const Student b(a); 
    // We still can call GetScore method of const object, 
    // because we have overloaded const version of GetScore 
    std::cout << b.GetScore(true) << b.GetScore(false) << '\n';

    return 0;
}