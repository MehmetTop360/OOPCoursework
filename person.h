#pragma once
#include <iostream>
#include <string>
#include <vector>

class person
{
    private:
        std::string name;
        std::string side; 
        std::string main;

    public:
        person();
        virtual ~person();
};