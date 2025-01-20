#include <iostream>

int main() {
  // Printing to the terminal
  // Using endl to flush(send the content to the terminal)
  std::cout << "Hello world" << std::endl;

  std::cout << "Write some input with spaces" << std::endl;

  // std::string is default exported by io stream
  std::string input_string;

  // Reads from the terminal
  std::cin >> input_string;

  // strings can also be sent as output
  std::cout << "The first part untill whitespace was " << input_string
            << std::endl;

  // std::getline takes a stream and a buffer and overwrites the buffer with
  // everything in the buffer.
  std::getline(std::cin, input_string);

  // you can print like before
  std::cout << "The rest" << input_string << std::endl;

  std::cout << "give a number to add 1 to instead" << std::endl;

  // you can have other types input
  // std::string is default exported by iostream
  int input_number;

  // Reads a number from the terminal
  std::cin >> input_number;

  // strings can also be sent as output
  std::cout << "The number inputed is: " << ++input_number << std::endl;
}
