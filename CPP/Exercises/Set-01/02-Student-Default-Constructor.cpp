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

        void show()
        {
            std::cout << std::endl << "Name = " << name;
            std::cout << std::endl << "Age = " << age << std::endl;
        }
};

int main()
{
    Student student;
    student.show();
    return 0;
}
