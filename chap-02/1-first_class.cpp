#include <iostream>
#include <string>

class Person
{
private:
    std::string  _name;
    unsigned int _age;

public:
    void         set_name(std::string name) { _name = name; }
    void         set_age(unsigned int age) { _age = age; }
    std::string  get_name() const { return _name; } // Don't forget const
    unsigned int get_age() const { return _age; }   // Don't forget const
};

int main()
{
    Person p;

    p.set_name("Batman");
    p.set_age(23);

    std::cout << "Person named '" << p.get_name() << "' is " << p.get_age() << " years old." << std::endl;

    return 0;
}
