#include "Exception.h"

Exception::Exception(const std::string& arg) : std::domain_error(arg){}