#include "stdafx.h"
#include "Book.h"


Book::Book()
{
	genre = null;
	ISBN = "NULL";
	author = "NULL";
	copyrightDate = "NULL";
	isLended = false;
}

Book::Book(const Genre& bookGenre, std::string booktitle, std::string isbnNumber, std::string authorName, std::string date, bool lendState)
{
	genre = bookGenre;
	title = TitleInputCheck(booktitle) ? booktitle : "Invalid";
	ISBN = ISBNInputCheck(isbnNumber) ? isbnNumber : "Invalid";
	author = AuthorNameInputCheck(authorName) ? authorName : "Invalid";
	copyrightDate = CopyrightDateInputCheck(date) ? date : "Invalid";
	isLended = lendState;
}

std::string Book::GetTitle()
{
	return title;
}

std::string Book::GetISBN()
{
	return ISBN;
}

std::string Book::GetAuthor()
{
	return author;
}

std::string Book::GetCopyRightDate()
{
	return copyrightDate;
}

bool Book::GetLendState()
{
	return isLended;
}

Book::~Book()
{
}


void Book::SetTitle(std::string input)
{
	title = TitleInputCheck(input) ? input : "Invalid";
	std::cout << std::endl << "Invalid title format input" << std::endl;
}

void Book::SetISBN(std::string input)
{
	ISBN = ISBNInputCheck(input) ? input : "Invalid";
	std::cout << std::endl << "Invalid ISBN format input" << std::endl;
}

void Book::SetAuthor(std::string input)
{
	author = AuthorNameInputCheck(input) ? input : "Invalid";
	std::cout << std::endl << "Invalid author name format input" << std::endl;
}

void Book::SetCopyrightDate(std::string input)
{
	copyrightDate = CopyrightDateInputCheck(input) ? input : "Invalid";
	std::cout << std::endl << "Invalid copyright date format input" << std::endl;
}


//Sudo Code for input validation check
bool Book::TitleInputCheck(std::string& input)
{
	//Check Code Here
	return true;
}

bool Book::ISBNInputCheck(std::string& input)
{
	//Check Code Here
	return true;
}

bool Book::AuthorNameInputCheck(std::string& input)
{
	//Check Code Here
	return true;
}

bool Book::CopyrightDateInputCheck(std::string& input)
{
	//Check Code Here
	return true;
}


//Operator overloads
bool Book::operator != (Book& b)
{
	int length = ISBN.length();
	int comparelength = b.GetISBN().length();
	bool flag = true;
	if (length == comparelength)
	{
		for (int i = 0; i < length; i++)
		{
			if (ISBN[i] != b.GetISBN()[i])
			{
				flag = false;
			}
		}
	}
	else
	{
		flag = false;
	}
	return !flag;
}

bool Book::operator == (Book& b)
{
	int length = ISBN.length();
	int comparelength = b.GetISBN().length();
	bool flag = true;
	if (length == comparelength)
	{
		for (int i = 0; i < length; i++)
		{
			if (ISBN[i] != b.GetISBN()[i])
			{
				flag = false;
			}
		}
	}
	else
	{
		flag = false;
	}
	return flag;
}

std::ostream& operator << (std::ostream& out ,Book& b)
{
	out << "Title:\t" << b.GetTitle() << std::endl;
	out << "ISBN:\t" << b.GetISBN() << std::endl;
	out << "Author:\t" << b.GetAuthor() << std::endl;
	return out;
}