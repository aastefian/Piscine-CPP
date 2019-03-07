
#include <iostream>
#include "Array.class.hpp"

int main(void)
{
	srand(time(NULL));

	unsigned int n = rand() % 20;
	Array<int> test(n);

	// std::cout << "Array["  << "] Content: " << Array<int>(*test)[n] << std::endl;
	try
	{
		unsigned int i = 0;
		while (i < n)
		{
			(test)[i] = rand() % 15;
			i++;
		}
		i = 0;
		while (i <= n)
		{
			std::cout << "Test[" << i << "] = " << (test)[i] << std::endl;
			i++;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<int> test2(2);
	test2 = test;
	try
	{
		unsigned int i = 0;
		while (i <= n)
		{
			std::cout << "Test2[" << i << "] = " << (test2)[i] << std::endl;
			i++;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<int> *tataa;

	tataa = &test2;
	try
	{
		unsigned int i = 0;
		while (i <= n)
		{
			std::cout << "Tataa[" << i << "] = " << (*tataa)[i] << std::endl;
			i++;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<float> test_float(n);

	try
	{
		unsigned int i = 0;
		while (i < n)
		{
			(test_float)[i] = 4810.156531;
			i++;
		}
		i = 0;
		while (i <= n)
		{
			std::cout << "test_float[" << i << "] = " << (test_float)[i] << std::endl;
			i++;
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<int> *t = new Array<int>(12);
	try
	{
		for (unsigned int i = 0; i < 12; i++)
			(*t)[i] = i;
		int i = (*t)[1];
		std::cout << i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	////////////////////////////////////////////////

	Array<int> *Trick = new Array<int>(42);
	Trick[42] =  42;
	Array<int> *cpy = new Array<int>(*Trick);

	Array<int> *cpy2;

	cpy2 = cpy;

    try {
	std::cout << "Cpy [41] " << (*cpy)[42] << std::endl;
	std::cout << "cp2 [42] " << (*cpy2)[42] << std::endl;
	std::cout << "Trick [43] " << (*Trick)[43] << std::endl;
    }catch(std::exception &e){
        std::cout << "Exception: " << e.what();
    }

	Array<float> v(12);
	try
	{

		for (float y = 1.5f; y < 12.5f; y++)
		{
			(v)[y + 0.1] = y + 12.56f;
		}
		std::cout << static_cast<float>((v)[11]) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//   ////////////////////////////////////////////////
	Array<float> vv(v);
	try
	{
		std::cout << static_cast<float>((vv)[11]) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Array<float> vvv = vv;
	try
	{
		std::cout << static_cast<float>((vvv)[11]) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	////////////////////////////////////////////////
	Array<std::string> strs(12);
	for (size_t i = 0; i < strs.size(); i++)
	{
		strs[i] = std::string("asdlkfjsadf");
	}
	try
	{
		std::cout << static_cast<std::string>((strs)[2]) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete t;
	return (0);
}
