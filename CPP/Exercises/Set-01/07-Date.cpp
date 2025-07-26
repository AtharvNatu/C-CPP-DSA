#include <iostream>
#include <cstdlib>
#include <iomanip>

enum Month
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

class Date
{
    private:
        int day, month, year;
        int maxDays;
        bool isLeapYear;
    
    public:
        Date()
        {
            day = 15;
            month = 7;
            year = 2025;
        }

        Date(int _day, int _month, int _year)
        {
            if (_year < 1)
            {
                std::cerr << std::endl << "Please Enter Valid Year ... Exiting !!!";
                exit(EXIT_FAILURE);
            }

            if (_month < JAN || _month > DEC)
            {
                std::cerr << std::endl << "Please Enter Valid Month Between 1-12 ... Exiting !!!";
                exit(EXIT_FAILURE);
            }

            if (_day < 1 || _day > 31)
            {
                std::cerr << std::endl << "Please Enter Valid Day Between 1-31 ... Exiting !!!";
                exit(EXIT_FAILURE);
            }

            switch(_month)
            {
                case APR:
                case JUN:
                case SEP:
                case NOV:
                    maxDays = 30;
                break;

                case FEB:
                    isLeapYear = (_year % 400 == 0) || (_year % 4 == 0 && _year % 100 != 0);
                    maxDays = isLeapYear ? 29 : 28;
                break;

                default:
                    maxDays = 31;
                break;
            }

            if (_day > maxDays)
            {
                std::cerr << "Invalid Day For Month " << _month << " ... Exiting !!!";
                exit(EXIT_FAILURE);
            }
            
            day = _day;
            month = _month;
            year = _year;
        }

        void show()
        {
            std::cout << std::endl
              << "Date : "
              << std::setfill('0') << std::setw(2) << day << "/"
              << std::setfill('0') << std::setw(2) << month << "/"
              << std::setw(4) << year
              << std::endl;
        }
};

int main()
{
    int userDay, userMonth, userYear;

    Date date1;
    date1.show();

    std::cout << std::endl << "Enter Day = ";
    std::cin >> userDay;

    std::cout << std::endl << "Enter Month = ";
    std::cin >> userMonth;

    std::cout << std::endl << "Enter Year = ";
    std::cin >> userYear;

    Date date2(userDay, userMonth, userYear);
    date2.show();

    return 0;
}
