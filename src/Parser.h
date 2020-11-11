#pragma once
#include <string>
#include <stdexcept>
#include "TreeItem.h"

using namespace std;

class Parser {
 public:
    Parser(const string& element_path);
    void printError(int errPos, bool is_syntax) const;
 private:
    void pathValidation();
    void readISANString();

    string path;

};
