#include <iostream>

class Dog
{
public:
    Dog() = default;
    Dog(std::string name_param, std::string breed_param, int age_param);
    ~Dog();

private:
    std::string name;
    std::string breed;
    int *p_age{nullptr};
};

Dog::Dog(std::string name_param, std::string breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << " at " << this << '\n';
}

Dog::~Dog()
{
    delete p_age;
    std::cout << "Dog destructor called for: " << name << " at " << this << '\n';
}

void printInfo(){
    std::cout << "Name: " << '\n';
    std::cout << "Breed: " << '\n';
    std::cout << "Age: " << '\n';
}

int main()
{

    Dog dog1("Fluffy", "Sheperd", 2); //constructor

    std::cout << "Done!" << '\n';
    //Destructor
    return 0;
}