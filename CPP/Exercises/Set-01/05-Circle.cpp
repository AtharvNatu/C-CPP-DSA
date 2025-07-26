#include <iostream>

class Circle
{
    private:
        float radius;

    public:
        Circle()
        {
            radius = 0;
        }

        Circle(float _radius)
        {
            radius = _radius;
        }

        void show()
        {
            std::cout << std::endl << "Radius = " << radius << std::endl;
        }
};

int main()
{
    Circle c1;
    Circle c2(7.5f);

    c1.show();
    c2.show();

    return 0;
}
