#include "boilerplate.hpp"

void send_CGI_header() {
  std::cout << "Content-type: text/html\n\n";
}

void send_HTML_header() {
  std::cout << "<!DOCTYPE html>\n"
            << "<html lang=\"en\">\n<head>\n"
            << "<title>Hello Yew Scion!</title>\n"
            << "<link rel=\"stylesheet\" href=\"yewscion.css\" "
            << "type=\"text/css\" />\n<meta name=\"viewport\" "
            << "content=\"width=device-width, initial-scale=1.0\" />"
            << "\n</head>\n"
            << "<body>\n<header>\n<h1>Hello Yew Scion!</h1>\n</header>\n"
            << "<main>\n";
}

void send_HTML_footer() {
  std::cout << "\n</main>\n<footer>\n"
            << "<p><a href=\"http://validator.w3.org/check?uri=referer\">"
            << "Valid.</a>\n</p>\n</footer>\n</html>\n";
}
