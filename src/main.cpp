#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include "cleaninputs.hpp"
#include "boilerplate.hpp"

int main()
{
  std::string formInput;
  std::map<std::string,std::string> cleanInput;
  std::getline(std::cin, formInput);
  cleanInput = cleanInputs(formInput, "=", "&", "%");
  send_CGI_header();
  send_HTML_header();
  std::cout << "<!-- " << formInput << " -->\n"
            << "<ul>\n<li>\n<strong>Your Name: </strong>"
            << cleanInput["myName"] << "\n</li>"
            << "\n<li>\n<strong>Button: </strong>"
            << cleanInput["mySubmit"] << "\n</li>\n</ul>\n";
  send_HTML_footer();
  return 0;
}
