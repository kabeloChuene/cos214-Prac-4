<<<<<<< HEAD
#include "DatabaseAdapter.h"

DatabaseAdapter::DatabaseAdapter() {}

std::string DatabaseAdapter::translateQuery(const std::string& query) {
    std::string translatedQuery = "SELECT * FROM " + extractTableName(query);
    return translatedQuery;
}

std::string DatabaseAdapter::extractTableName(const std::string& query) {
    size_t fromPos = query.find("FROM");
    size_t selectPos = query.find("SELECT");
    if (fromPos != std::string::npos && selectPos != std::string::npos && fromPos < selectPos) {
        return query.substr(fromPos + 5, selectPos - fromPos - 5);
    }
    return "";
}
=======
#include "DatabaseAdapter.h"

DatabaseAdapter::DatabaseAdapter() {}

std::string DatabaseAdapter::translateQuery(const std::string& query) {
    std::string translatedQuery = "SELECT * FROM " + extractTableName(query);
    return translatedQuery;
}

std::string DatabaseAdapter::extractTableName(const std::string& query) {
    size_t fromPos = query.find("FROM");
    size_t selectPos = query.find("SELECT");
    if (fromPos != std::string::npos && selectPos != std::string::npos && fromPos < selectPos) {
        return query.substr(fromPos + 5, selectPos - fromPos - 5);
    }
    return "";
}
>>>>>>> d9f532327c8f7c860634935acd3cd4b5f6430e19
