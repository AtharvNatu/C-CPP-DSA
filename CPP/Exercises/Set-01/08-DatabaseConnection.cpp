#include <iostream>
#include <string>

class DatabaseConnection
{
    private:
        int databaseHandle;
        std::string databaseName;

        DatabaseConnection(const std::string& dbName)
        {
            databaseHandle = 1;
            databaseName = dbName;
        }

        //* Delete copy constructor and assignment operator to prevent copies
        DatabaseConnection(const DatabaseConnection&) = delete;
        DatabaseConnection& operator=(const DatabaseConnection&) = delete;

        //* Static Pointer to single instance
        static DatabaseConnection* instance;

    public:
        static DatabaseConnection* getInstance(const std::string& _dbName)
        {
            if (instance == nullptr)
            {
                instance = new DatabaseConnection(_dbName);
            }

            return instance;
        }

        void connect()
        {
            std::cout << "Connection established with " << databaseName << std::endl;
        }
};

//* Static member initialization
DatabaseConnection* DatabaseConnection::instance = nullptr;

int main()
{
    DatabaseConnection* dbConnection = DatabaseConnection::getInstance("Test.db");
    dbConnection->connect();

    return 0;
}
