#include <iostream>
#include <string>

class Person
{
    private:
        std::string name;
        int age;
        const int id = 1;
    
    public:
        Person()
        {
            name = "";
        }
};

class Employee : public Person
{
    private:
        float salary;
        std::string department;
        int employeeCode;
        static int employeeID;
    
    public:
        Employee(float _salary, std::string _department, int _empCode)
        {
            
        }
};

int main()
{
    return 0;
}
