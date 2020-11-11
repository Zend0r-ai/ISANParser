#include "Parser.h"

void Parser::printError(int errPos, bool is_syntax) const {
    if(is_syntax)
        throw std::runtime_error("ISAN SYNTAX ERROR:" + errPos);
    else
        throw std::runtime_error("ISAN SYNTAX ERROR: " + errPos);
}
