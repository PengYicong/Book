// Book.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Book.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Book Erohon = Book(Genre::children, "ehentai", "1-1-1-1", "kuroko", "2017-1-22", false);
	Book ErohonCopy = Book(Genre::children, "ehentai", "1-1-1-1", "kuroko", "2017-1-22", false);
	Book Erohon2 = Book(Genre::children, "ehentai", "1-1-1-2", "Asuna", "2017-1-22", false);

	std::cout << Erohon;
	std::cout << ErohonCopy;
	std::cout << Erohon2;

	if (Erohon == ErohonCopy)
	{
		std::cout << "Same book" << std::endl;
	}
	else
	{
		std::cout << "Another erohon" << std::endl;
	}
	
	if (Erohon != Erohon2)
	{
		std::cout << "Different book" << std::endl;
	}
	else
	{
		std::cout << "Same erohon" << std::endl;
	}
	std::cin.get();
	return 0;
}

