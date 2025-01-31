#include <iostream>
#include <string>

class Object {
 public:
  int order;
  std::string item_id;
};

class Foo {
 public:
  Object* o;
};

int main() {
  Object object;
  Foo foo;

  // This assign a pointer to an Object that point to the same memory
  // address as the object variable.
  foo.o = &object;

  // We assign values to the object after assigning the memory address
  // fot object to foo.
  object.item_id = "test";
  object.order = 0;

  std::cout << foo.o->item_id << std::endl;
  std::cout << foo.o->order << std::endl;

  // We increment the objects order and the object in foo get updated
  // since it is the same object.
  object.order++;

  std::cout << foo.o->order << std::endl;

  return 0;
}
