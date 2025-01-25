#include <iostream>
#include <string>

class Dog {
 public:
  Dog();
  ~Dog();
  void speak();
  void toggle_walking();
  bool is_walking();
  std::string name = "dog";

 private:
  bool __is_walking = false;
};

void print_state(Dog& dog);

int main() {
  Dog dog = *new Dog();

  dog.speak();

  print_state(dog);

  dog.toggle_walking();

  print_state(dog);

  dog.toggle_walking();

  print_state(dog);

  return 0;
}

Dog::Dog() {
  Dog::name = "Jerry";
  std::cout << Dog::name << " has been constructed" << std::endl;
}

Dog::~Dog() {
  std::cout << Dog::name << " has been destructed" << std::endl;
}

void Dog::speak() {
  std::cout << "Woof" << std::endl;
}

void Dog::toggle_walking() {
  Dog::__is_walking = !Dog::__is_walking;
}

bool Dog::is_walking() {
  return Dog::__is_walking;
}

void print_state(Dog& dog) {
  // Att använda dog.__is_walking liksom vi gör med dog.name skulle ge ett error.
  std::cout << "The state of walking for " << dog.name << ": "
            << dog.is_walking() << std::endl;
}
