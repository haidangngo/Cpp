// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> g1;

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);

	std::cout << "Size :" << g1.size();
	std::cout << "\nCapacity :" << g1.capacity();
	std::cout << "\nMax_Size :" << g1.max_size();
	g1.resize(6);
	g1.shrink_to_fit();
	std::cout << "\nCapacity :" << g1.capacity();
	std::cout << "\nMax_Size :" << g1.max_size();
	
	std::cout << "\nOutput of begin and end: ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		std::cout << *i << " ";

	std::cout << "\nOutput of cbegin and cend: ";
	for (auto i = g1.cbegin(); i != g1.cend(); ++i)
		std::cout << *i << " ";

	std::cout << "\nOutput of rbegin and rend: ";
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
		std::cout << *ir << " ";

	std::cout << "\nOutput of crbegin and crend : ";
	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
		std::cout << *ir << " ";

	if (g1.empty() == false)
		std::cout << "\nVector is not empty";
	else 
		std::cout << "\nvector is empty";

}
