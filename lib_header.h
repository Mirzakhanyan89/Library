/*	lib_header.h
 */

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string> 
#include <vector>


class Book
{
public:
	Book (std::string &, std::string &, int);
	bool worn_out () const;
	bool is_new () const;
	int change_read_count ();
	void set_using(bool);
	bool get_using ();
private:
	std::string m_title;
	std::string m_author;
	int m_read_count {};
	int m_release_year;
	bool m_using {false};
};

class Student
{
public: 
	Student (std::string &);
	void read (Book &); 
	bool get_reading() {return m_reading;}	
	bool relax (Book &);
private:
	std::string m_name;
	int m_rating_books_read {};
	bool m_reading {false};
};

class Library
{
public:
	std::vector <Book*> books;	
	void add_book (Book &);
	bool is_taken (Book &);
	bool is_return (Book &);
};

#endif // HEADER_H
