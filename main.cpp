#include <iostream>
#include <regex>

using namespace std;
using std::string;

int main()
{
  cout << "Hello World";
  string line = "Troque L1 por um valor mas ignore L1A e AL1 e tb troque esse L1 aqui tb e L1 e L1";
  string token = "L1";
  string expression = " " + token + "\\s| " + token + "$";
  regex target(expression);

  string value = " " + to_string(77) + " ";
  test = regex_replace(line, target, value);
  cout << test << endl;
  return 0;
}