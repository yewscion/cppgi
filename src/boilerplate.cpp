#include "boilerplate.hpp"

void send_CGI_header() {
  std::cout << "Content-type: text/html\n";
  std::cout << "\n";
}

void send_HTML_header() {
  std::cout <<"<!DOCTYPE html>\n";
  std::cout <<"<html lang=\"en\">\n<title>Hello Yew Scion!</title>\n";
  std::cout <<"<body>\n<h1>Hello Yew Scion!</h1>\n";
}

void send_HTML_footer() {
  std::cout <<"<p><a href=\"http://validator.w3.org/check?uri=referer\">";
  std::cout <<"Valid.</a>\n</p>\n</html>\n";
}
