#pragma once

#ifndef DATABASE_ADAPTER_H
#define DATABASE_ADAPTER_H

#include <string>

class DatabaseAdapter {
public:
    DatabaseAdapter();

    std::string translateQuery(const std::string& query);

private:
    std::string extractTableName(const std::string& query);
};

#endif // DATABASE_ADAPTER_H
