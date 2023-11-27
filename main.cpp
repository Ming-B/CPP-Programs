#include <iostream>

class Dog
{
public:
    Dog() = default;
    Dog(std::string name_param, std::string breed_param, int age_param);
    ~Dog();

    void printInfo(){
        std::cout << "Dog (" << this << ") : [ name : " << name 
        << " breed : " << breed << " age : " << *pAge << '\n';
    }

    // setters
    void setName(std::string name){
        this->name = name;
    }


private:
    std::string name;
    std::string breed;
    int *pAge{nullptr};
};

Dog::Dog(std::string name_param, std::string breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    pAge = new int;
    *pAge = age_param;
    std::cout << "Dog constructor called for " << name << " at " << this << '\n';
}

Dog::~Dog()
{
    delete pAge;
    std::cout << "Dog destructor called for: " << name << " at " << this << '\n';
}


int main()
{

    Dog dog1("Fluffy", "Sheperd", 2); // constructor
    dog1.printInfo();

    dog1.setName("Pumba");
    dog1.printInfo();

    std::cout << "Done!" << std::endl;
    // Destructor

    return 0;
}