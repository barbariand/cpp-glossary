#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main() {
  // Printing to the terminal
  // Using endl to flush(send the content to the terminal)
  cout << "Hello world" << endl;

  cout << "Write some input with spaces" << endl;

  // std::string is default exported by io stream
  string input_string;

  // Reads from the terminal
  cin >> input_string;

  // strings can also be sent as output
  cout << "The first part untill whitespace was " << input_string << endl;

  // std::getline takes a stream and a buffer and overwrites the buffer with
  // everything in the buffer.
  getline(cin, input_string);

  // you can print like before
  cout << "The rest" << input_string << endl;

  cout << "give a number to add 1 to instead" << endl;

  // you can have other types input
  // std::string is default exported by iostream
  int input_number;

  // Reads a number from the terminal
  cin >> input_number;

  // strings can also be sent as output
  cout << "The number inputed is: " << ++input_number << endl;
}
