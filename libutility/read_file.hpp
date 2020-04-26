#ifndef crocofix_utilities_read_file_hpp
#define crocofix_utilities_read_file_hpp

#include <iostream>
#include <functional>

namespace crocofix
{

void read_file(const std::string& filename, const std::function<void(std::istream& is)>& reader);

}

#endif