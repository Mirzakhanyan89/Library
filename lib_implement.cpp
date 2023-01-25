/* lib_implement.cpp
*/
#include "lib_header.h"

Book::Book (std::string & title, std::string & author, int release_year)
	: m_title {title}, m_author {author}, m_release_year {release_year} {} 

bool Book::worn_out () const
{ 
	if (this-> m_read_count > 100)	
	{	
		return true; 
	}
	return false;
}
	
bool Book::is_new () const
{
	if (this-> m_release_year >= 2020)
	{
	 	return true;
	}
	return false;	
}

int Book::change_read_count ()
{
	return ++this-> m_read_count;
}

bool Book::change_using ()
{
	return m_using = (m_using == false) ? true : false; 
}

bool Book::get_using ()
{
	return m_using;
}

Student::Student (std::string & name) 
	: m_name {name} {}

// if the read() function is called, then m_reading data_member is changed to true

void Student::read (Book & src) 
{
	++m_rating_books_read;
	this-> m_reading = true;
	src.change_read_count ();
	src.change_using ();	
}

// the student returns the books to the library when he goes to the break.
bool Student::relax (Book & src)
{
	this-> m_reading = false;
	src.change_using();
	return true;
}

void Library::add_book (Book & src)
{
	this-> books.push_back (& src);
}

bool Library::is_taken (Book & src) 
{ 
	return src.change_using();	
}

bool Library::is_return (Book & src) 
{
	return src.get_using();	
}

