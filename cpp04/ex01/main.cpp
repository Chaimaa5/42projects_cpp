#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    Animal	*animals[10];
	Brain	*brain;

	for (int i = 0; i < 10; i++)
	{
		if (i < 10 / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	for (int i = 0; i < 10; i++)
		delete animals[i];
		
	Cat *c = new Cat;

	brain = c->getBrain();
	brain->setIdeas("first idea");
	std::cout << c->getBrain()->getIdeas()[0] << std::endl;
	delete c;
}