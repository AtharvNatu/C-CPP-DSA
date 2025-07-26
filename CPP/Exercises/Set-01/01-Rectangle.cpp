#include <iostream>

class Rectangle
{
    private:
        int length;
        int width;
    
    public:

        int get_length()
        {
            return length;
        }

        void set_length(int _length)
        {
            length = _length;
        }

        int get_width()
        {
            return width;
        }

        void set_width(int _width)
        {
            width = _width;
        }

        int area()
        {
            return get_length() * get_width();
        }
};

int main()
{
    Rectangle rectangle;
    int length, width;

    std::cout << std::endl <<"Enter Rectangle Length = ";
    std::cin >> length;

    std::cout << std::endl << "Enter Rectangle Width = ";
    std::cin >> width;

    rectangle.set_length(length);
    rectangle.set_width(width);

    std::cout << std::endl << "Rectangle Area = " << rectangle.area() << std::endl;

    return 0;
}
