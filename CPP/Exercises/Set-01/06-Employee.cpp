#include <iostream>
#include <string>

class Employee
{
    private:
        const int employeeID;
        std::string name;
        float salary;
        std::string& department;

    public:
        Employee(const int empId, std::string _name, float _salary, std::string& dept) 
        : employeeID(empId), name(_name), salary(_salary), department(dept) {}

        void show()
        {
            std::cout << std::endl << "EMPLOYEE INFORMATION";
            std::cout << std::endl << "-------------------------------------------" << std::endl;
            std::cout << "ID = " << employeeID << std::endl;
            std::cout << "Name = " << name << std::endl;
            std::cout << "Salary = " << salary << std::endl;
            std::cout << "Department = " << department << std::endl;
            std::cout << std::endl << "-------------------------------------------" << std::endl;
        }
};

int main()
{
    std::string dept1 = "Development";
    std::string dept2 = "IT";

    Employee emp1(1, "Atharv", 10000.500f, dept1);
    Employee emp2(2, "Uttkarsh", 20000.300f, dept2);

    emp1.show();
    emp2.show();

    return 0;
}
