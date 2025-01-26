int main() {
  // Declare and initialize int variables
  int number1 = 10;
  int number2 = 5;

  // Addition
  int addition = number1 + number2;  // addition will be 15

  // Subtraction
  int subtraction = number1 - number2;  // subtraction will be 5

  // Multiplication
  int multiplication = number1 * number2;  // multiplication will be 50

  // Integer division (note: this discards the remainder)
  int division = number1 / number2;  // division will be 2

  // Example with larger numbers to illustrate potential overflow
  long int large_number1 = 2147483647;  // Maximum value of int on many systems
  long int large_number2 = 10;
  long int overflow_result =
      large_number1 +
      large_number2;  // This may result in undefined behavior (overflow)

  // --------------------------------------
  // float examples
  // --------------------------------------

  float float1 = 10.5f;
  float float2 = 2.5f;

  float float_addition = float1 + float2;     // float_addition will be 13.0f
  float float_subtraction = float1 - float2;  // float_subtraction will be 8.0f
  float float_multiplication =
      float1 * float2;  // float_multiplication will be 26.25f
  float float_division = float1 / float2;  // float_division will be 4.2f

  // --------------------------------------
  // double examples
  // --------------------------------------

  double double1 = 100.75;
  double double2 = 4.5;

  double double_addition = double1 + double2;  // double_addition will be 105.25
  double double_subtraction =
      double1 - double2;  // double_subtraction will be 96.25
  double double_multiplication =
      double1 * double2;  // double_multiplication will be 453.375
  double double_division =
      double1 / double2;  // double_division will be approximately 22.3889

  // --------------------------------------
  // bool examples
  // --------------------------------------

  bool is_true = true;
  bool is_false = false;

  // --------------------------------------
  // char examples
  // --------------------------------------

  char char1 = 'A';
  char char2 = 'B';

  // --------------------------------------
  // long and short examples
  // --------------------------------------

  long long_var = 1234567890;  // Can hold a larger integer value
  short short_var = 12345;     // Can hold a smaller integer value

  // --------------------------------------
  // Modifier combinations
  // --------------------------------------

  // short
  short int short_int_var = 10000;
  unsigned short int unsigned_short_int_var = 20000;

  // No "signed" keyword needed for short, as it's signed by default

  // int (default)
  int int_var = 1234567;
  unsigned int unsigned_int_var =
      4000000000;  // Note: This is a large positive value

  // signed int is the same as int
  signed int signed_int_var = -1234567;

  // long
  long int long_int_var =
      2147483647;  // Can hold a larger value than a regular int
  unsigned long int unsigned_long_int_var = 4000000000;

  // signed long int is the same as long int
  signed long int signed_long_int_var = -2147483647;

  // long long
  long long int long_long_int_var = 9223372036854775807;  // Even larger range
  unsigned long long int unsigned_long_long_int_var = 18446744073709551614;

  // signed long long int is the same as long long int
  signed long long int signed_long_long_int_var = -9223372036854775807;

  // --------------------------------------
  // Modifier combinations with char
  // --------------------------------------

  // char (default)
  char char_var = 'A';  // Holds a single character

  // signed char
  signed char signed_char_var = -128;  // Range is typically -128 to 127

  // unsigned char
  unsigned char unsigned_char_var = 255;  // Range is typically 0 to 255

    return 0;
}
