#ifndef _CLEANINPUTS_H_
#define _CLEANINPUTS_H_

#include <algorithm>
#include <iostream>
#include <map>
#include <string>

std::map<std::string,std::string> cleanInputs(std::string rawInput,
                                              std::string assign,
                                              std::string next,
                                              std::string hexId);

#endif
