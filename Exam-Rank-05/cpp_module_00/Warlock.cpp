// #include "Warlock.hpp"

// Warlock::Warlock(std::string const &name, std::string const &title)
// {
//     this->name = name;
//     this->title = title;
//     std::cout << this->name << ": This looks like another boring day.\n";
// }

// Warlock::~Warlock() {std::cout << this->name << ": My job here is done!\n";}

// std::string const &Warlock::getName() const { return (this->name);}
// std::string const &Warlock::getTitle() const { return (this->title);}

// void Warlock::setTitle(std::string const &title) { this->title = title;}

// void Warlock::introduce() const { std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";}


#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
    : name(name), title(title)
{
    std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const
{
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}

void Warlock::setTitle(std::string const &title)
{
    this->title = title;
}

std::string const &Warlock::getName() const
{
    return this->name;
}

std::string const &Warlock::getTitle() const
{
    return title;
}
