#include <iostream>
#include <regex>

using namespace std;
using std::string;

int main()
{

  // **** OSERVATIONS ***
  // preprocess -> read EQU tokens, register on table -> read file, replace EQU label Ocurrences;
  // if Token read is an IF check if label is defined on table, if it is, add next line to the code;
  // it should be noted that the default behaviour of the code is to always add a line on the preprocessed code, so the exception is whenever a label is undefined, then next line is skiped;

  // **** STEPS ***
  // First step, read EQU definitions (these are atop of the file)
  // Move from EQU reading state into REPLACEMENT state after reading the token (SECAO)
  // replace ocurrences of tokens defined previously
  // on reading IF directive, check if label afterwards is defined, if do not preserve next line on preprocessed file.

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