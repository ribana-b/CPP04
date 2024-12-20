#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


void	defaultTest(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
}

void	myTest(void)
{
	Cat	*c1 = new Cat();
	Cat	*c2 = new Cat();

	c1->getBrain()->setIdeas("Foo");
	for (int i = 0; i < 100; ++i)
	{
		if (c1->getBrain()->getIdeas()->length() != 0)
		{
			std::cout << "Yes: " << c1->getBrain()->getIdeas()[i] << std::endl;
		}
	}
	delete c2;
	c2 = c1;
	for (int i = 0; i < 100; ++i)
	{
		if (c2->getBrain()->getIdeas()->length() != 0)
		{
			std::cout << "Non't: " << c2->getBrain()->getIdeas()[i] << std::endl;
		}
	}
	delete c1;
}

void	myTest2(void)
{
	Animal *animals[100];
	for (int i = 0; i < 100; ++i)
	{
		if (i < 50)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i<  100; ++i)
	{
		delete animals[i];
	}
}

void	myTest3(void)
{
	Animal *animals[100];
	for (int i = 0; i < 100; ++i)
	{
		if (i < 50)
		{
			animals[i] = new Dog();
		}
		else
		{
			animals[i] = new Cat();
		}
	}

	delete animals[5];
	animals[5] = new Cat();

	for (int i = 0; i < 100; ++i)
	{
		delete animals[i];
	}
}

void	myTest4(void)
{
	Animal animals[10];
	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)
		{
			animals[i] = Dog();
		}
		else
		{
			animals[i] = Cat();
		}
	}
}

void	myTest5(void)
{
	Animal *animals[10];
	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)
		{
			animals[i] = new Dog();
		}
		else
		{
			animals[i] = new Cat();
		}
	}

	const int N_IDEAS = 100;
	Brain *newBrain = new Brain();
	newBrain->setIdeas("lol");
	((Cat *)animals[5])->setBrain(newBrain);
	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)
		{
			if (((Dog *)animals[i])->getBrain()->getIdeas()->length())
			{
				for (std::size_t j = 0; j < N_IDEAS; ++j)
				{
					std::cout << ((Dog *)animals[i])->getBrain()->getIdeas()[j] << std::endl;
				}
			}
		}
		else
		{
			if (((Cat *)animals[i])->getBrain()->getIdeas()->length())
			{
				for (std::size_t j = 0; j < N_IDEAS; ++j)
				{
					std::cout << ((Cat *)animals[i])->getBrain()->getIdeas()[j] << std::endl;
				}
			}
		}
	}

	for (int i = 0; i < 10 ; ++i)
	{
		delete animals[i];
	}
}

int main()
{
	defaultTest();
	myTest();
	myTest2();
	myTest3();
	myTest4();
	myTest5();
	return 0;
}
