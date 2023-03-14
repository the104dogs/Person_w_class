#include <iostream>
#include <string>
#include <unordered_map>

class Person {
private:
  std::string name;
  int age;

public:
  Person(std::string name, int age) : name(name), age(age) {}

  std::string getName() const { return name; }
  int getAge() const { return age; }
};

int main() {
  std::unordered_map<std::string, Person> people;
  people["Alice"] = Person("Alice", 25);
  people["Bob"] = Person("Bob", 30);
  people["Charlie"] = Person("Charlie", 35);

  for (const auto& [name, person] : people) {
    std::cout << name << " is " << person.getAge() << " years old." << std::endl;
  }

  return 0;
}

/*This program defines a Person class with a name and age field, and a constructor that initializes these fields. It also includes a couple of getter methods to retrieve the name and age values.

In the main function, we use an unordered_map to store a collection of Person objects, indexed by their name. We then use a range-based for loop to iterate over the map and print each person's name and age to the console.

This example demonstrates some advanced concepts in C++, such as class definitions, constructors, getter methods, and the use of an unordered map container. It is just one of many possible examples of complex C++ code.*/