#include "cleaninputs.hpp"

std::map<std::string,std::string> cleanInputs(std::string rawInput,
                                              std::string assign,
                                              std::string next,
                                              std::string hexId) {
  std::map<std::string,std::string> cleanInputs;
  int seper,delim,hex = 0;
  char hexToAscii = ' ';

  // First, let's put spaces back in the input.
  std::replace (rawInput.begin(),
                rawInput.end(),
                '+',
                ' ');

  // Next, convert Hex values to ASCII.
  hex = rawInput.find(hexId);
  while (hex != -1) {
    hexToAscii = std::stoul(rawInput.substr(hex+1,hex+3),
                            nullptr,
                            16);
    rawInput = rawInput.erase(hex,3);
    rawInput = rawInput.insert(hex,1,hexToAscii);
    hex = rawInput.find(hexId);
  }

  // Store the keys and values
  while (rawInput != "")
  {
    seper = rawInput.find(assign);
    delim = rawInput.find(next);
    if (delim == -1)
      delim = rawInput.length();
    
    cleanInputs[
                rawInput.substr(0, seper)
                ] =
      rawInput.substr(
                      seper+1,
                      delim-(seper+1)
                      );
    if(static_cast<unsigned int>(delim) == rawInput.length())
      rawInput = "";
    else
      rawInput = rawInput.substr(delim+1);
  }
  return cleanInputs;
}
