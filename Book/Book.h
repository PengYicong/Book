#pragma once
#ifndef _BOOK_H
#define _BOOK_H
#include <iostream>
#include <string>

enum Genre
{
	fiction, nonfiction, periodical, biography, children, null
};


class Book
{
private:
	Genre genre;
	std::string title;
	std::string ISBN;
	std::string author;
	std::string copyrightDate;
	bool isLended;
public:
	Book();
	Book::Book(const Genre& bookGenre, std::string booktitle, std::string isbnNumber, std::string authorName, std::string date, bool lendState);
	~Book();

	std::string GetTitle();
	std::string GetISBN();
	std::string GetAuthor();
	std::string GetCopyRightDate();
	bool GetLendState();

	void SetTitle(std::string input);
	void SetISBN(std::string input);
	void SetAuthor(std::string input);
	void SetCopyrightDate(std::string input);
	void SetLendState(bool state);

	bool operator == (Book& b);
	bool operator != (Book& b);
	friend std::ostream &operator << (std::ostream& out, Book& b);

	bool TitleInputCheck(std::string& input);
	bool ISBNInputCheck(std::string& input);
	bool AuthorNameInputCheck(std::string& input);
	bool CopyrightDateInputCheck(std::string& input);

};

#endif
