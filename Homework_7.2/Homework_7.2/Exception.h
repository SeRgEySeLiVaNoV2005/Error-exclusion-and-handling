#pragma once
#include <string>
#include <stdexcept>


using namespace std;

class Exception : public domain_error{
public:
	explicit Exception(const std::string& arg);
};