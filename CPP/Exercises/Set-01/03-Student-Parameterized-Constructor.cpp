#include <iostream>
#include <string>

class Student
{
    private:
        std::string name;
        int age;

    public:
        Student()
        {
            name = "Unknown";
            age = 0;
        }

        Student(std::string _name, int _age)
        {
            name = _name;
            age = _age;
        }

        void show()
        {
            std::cout << std::endl << "Name = " << name;
            std::cout << std::endl << "Age = " << age << std::endl;
        }
};

int main()
{
    Student student1;

    Student student2("Atharv", 22);

    student1.show();
    student2.show();
    
    return 0;
}
