#include <iostream>
#include <string>

class Animal {
 public:
  Animal(std::string t_animal);
  virtual ~Animal() = default;
  virtual void speak() = 0;
  void walk();

 protected:
  std::string t_animal;
};

class Dog : public Animal {
 public:
  Dog();
  ~Dog() = default;
  void speak();
};

class Cat : public Animal {
 public:
  Cat();
  ~Cat() = default;
  void speak();
};

// Error:
// class Animal : public Cat, public Dog {
// ...
// }
//
// Man kan inte ha flera constructors pga
// multiple inheritance. Du vet inte vilken
// av klassernas funktion som blir overridas.

int main() {
  Dog dog = *new Dog();

  dog.walk();
  dog.speak();

  Cat cat = *new Cat();

  cat.walk();
  cat.speak();

  return 0;
}

Animal::Animal(std::string t_animal) {
  Animal::t_animal = t_animal;
}

void Animal::walk() {
  std::cout << "The " << t_animal << " is walking" << std::endl;
}

Dog::Dog() : Animal("dog") {
  std::cout << t_animal << " has been constructed" << std::endl;
}

void Dog::speak() {
  std::cout << "Woof" << std::endl;
}

Cat::Cat() : Animal("cat") {
  std::cout << t_animal << " has been constructed" << std::endl;
}

void Cat::speak() {
  std::cout << "Meow" << std::endl;
}
