#include <iostream>
#include <string>

class Person
{
public:
    Person(std::string name, std::string surname)
        : _name { name }
        , _surname { surname }
    {}
    std::string  get_name() const { return _name; }
    unsigned int get_age() const { return _age; }
    std::string  get_full_name() const { return _name + " " + _surname; }

    void wait(unsigned int n) { _age += n; }

private:
    std::string  _name;
    std::string  _surname;
    unsigned int _age = 0u;
};

int main()
{
    Person p { "Bruce", "Wayne" };

    p.wait(23);

    std::cout << "Person named '" << p.get_full_name() << "' is " << p.get_age() << " years old."
              << std::endl;

    return 0;
}
