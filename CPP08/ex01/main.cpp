#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(20);
		Span s;
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		int arr[] = {2, 4, 1, 0, 54};
		std::vector<int> v(arr, arr + 5);

		sp.addAll(v.begin(), v.end());
		s = sp;

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << "The span can't hold all these elements :/ " << '\n';
	}
	
	return 0;
}
