#include <fstream>
#include <iostream>

int main() {
  // Create a unique filename using rand
  std::string filename = std::to_string(rand()) + "_filename.txt";

  // We construct an object that handle the required syscall
  // to read the file with the designated filenames data.
  std::ifstream input_file(filename);

  // Check if the file exist, if it exist, then we exit the
  // application to prevent overwriting important data.
  if (input_file.good()) {
    std::cout << filename << " already exist!";
    return 1;
  }

  // WARNING: Make sure to close the file when you are done. Missing
  // this step will have dire consequenses in the rest of your
  // program.
  input_file.close();

  // We construct an object that handle the required syscall
  // and writing to the file that correspond to the designated
  // filename.
  std::ofstream output_file;

  output_file.open(filename);

  // The bitshift operator is overridden and simply perform
  // the operation of piping the string into the file.
  output_file << "Hello world!";

  // We exit the program if we fail writing to the file.
  if (!output_file.good()) {
    std::cout << "Failed writing to file " << filename;
    return 1;
  }

  // WARNING: Make sure to close the file when you are done. Missing
  // this step will have dire consequenses in the rest of your
  // program.
  output_file.close();

  // This is the buffer that will hold the data that the file
  // contain.
  std::string input;

  // We reopen the file using our previously defined object.
  input_file.open(filename);

  // We read the entire line, aka stopping at newline, into
  // the buffer that we defined above.
  std::getline(input_file, input);

  // WARNING: Make sure to close the file when you are done. Missing
  // this step will have dire consequenses in the rest of your
  // program.
  input_file.close();

  // Print the buffer to the standard out.
  std::cout << input << std::endl;

  // Remove the file from the system. Cleanup process.
  //
  // This uses a c-style string, aka. char*, meaning that
  // we have to convert the string to that before inputting
  // it into the function.
  std::remove(filename.c_str());

  return 0;
}
