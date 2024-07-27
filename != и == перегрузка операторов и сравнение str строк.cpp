/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class MyString {
    private:
    std::string str;
    
    public:
    
    MyString(const std::string p_str) : str(p_str) {}
    
    bool operator==(const MyString& other) const {
        return this->str == other.str;
    }
    
    bool operator!=(const MyString& other) const {
        return !(*this == other);
    }
};

int main()
{
    MyString str1("Monday");
    MyString str2("Tuesday");
    MyString str3("Monday");
    
    if(str1 == str2){
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    
    if(str1 == str3){
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}
