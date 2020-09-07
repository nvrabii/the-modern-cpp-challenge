/**
 * 30. Extracting URL parts
 * 
 * Write a function that, given a string that represents a URL, parses
 * and extracts the parts of the URL (protocol, domain, port, path,
 * query, and fragment).
 */

#include <regex>
#include <string>
#include <iostream>

class Url
{
private:
    std::string url = "";
    std::string protocol = "";
    std::string domain = "";
    std::string port = "";
    std::string path = "";
    std::string query = "";
    std::string fragment = "";

public:
    Url(std::string url)
    {

        std::regex r(
            R"(^(([^:/?#]+):)?(//([^/?#]*))?([^?#]*)(\?([^#]*))?(#(.*))?)",
            std::regex::extended);

        std::smatch match_result;

        if (std::regex_match(url, match_result, r))
        {
            this->url = url;
            protocol = match_result[2];
            domain = match_result[4];
            path = match_result[5];
            query = match_result[7];
            fragment = match_result[9];
        }
    }

    std::string to_string()
    {
        return protocol + "://" + domain + "/" + path + "?" + query + "#" + fragment;
    }
};

int main()
{
    Url url("http://sample.url/path/to/smth?query=string#fragment");

    std::cout << url.to_string() << '\n';
}