#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void	defaultTest(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();

	meta->makeSound();

	delete meta;
	delete i;
	delete j;
}

void	wrongTest(void)
{
	WrongAnimal *wmeta = new WrongAnimal();
	WrongAnimal *wc = new WrongCat();

	wmeta->makeSound();
	wc->makeSound();
	delete wmeta;
	delete wc;
}

void	myTest(void)
{
	const Animal animal;
	const Cat cat;
	const Dog dog;

	animal.makeSound();
	cat.makeSound();
	dog.makeSound();
}

void	myTest2(void)
{
	Animal *animal = new Cat();

	animal->makeSound();
	delete animal;

	animal = new Dog();
	animal->makeSound();
	delete animal;
}

int main()
{
	defaultTest();
	wrongTest();
	myTest();
	myTest2();
	return 0;
}
