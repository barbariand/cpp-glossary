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

// WARNING: Klasser har ett problem så kallat "diamond problem"
// gällande arv. Problemet innefattar att du inte kan inherita
// från flera andra klasser på en och samma gång. C++ vet inte
// vilken "parent" som har sin virtuella funktion overridad.
//
// ```cc
// class Animal {
//   virtual void walk();
// }
//
// class Pet {
//   virtual void walk();
// }
//
// class Dog : public Pet, public Animal {
//   void walk();
// }
// ```

// WARNING: Klasser har ett problem så kallat "circular
// inheritance" vilket menar på att funktionaliteten av en
// klass som ärver från en annan som ärver från den första
// klassen gör så att 'virtuella' funktioner och annat kan vara
// odefinierat.
//
// ```cc
// class One : public Two {
//   ...
// }
//
// class Two : public One {
//   ...
// }
// ```

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
