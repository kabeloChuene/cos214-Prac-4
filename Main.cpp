#include <iostream>
#include "DatabaseAdapter.h"
using namespace std;

int main()
{
    // Create an instance of the DatabaseAdapter
    DatabaseAdapter adapter;

    // Example query in the new format
    std::string newFormatQuery = "FROM employees SELECT *";
    std::cout << "Initial Query: " << newFormatQuery << std::endl;

    // Translate the query using the adapter
    std::string ormFormatQuery = adapter.translateQuery(newFormatQuery);

    // Output the translated query
    std::cout << "Translated Query (ORM Format): " << ormFormatQuery << std::endl;

    return 0;
}
