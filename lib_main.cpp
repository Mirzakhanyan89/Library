/* lib_main.cpp
*/
#include "lib_header.h"

int main ()
{
	Library library;
	std::string title {"Professional C++"};
	std::string author {"Gregoire"};
	std::string stud_name {"Hayk"};
	Book book (title,  author, 2021);
	Student student (stud_name);
	std::cout<< "Is the "<< title << " new book:\t" 
			 << std::boolalpha << book.is_new ();
	std::cout<< "\nIs the "<< title << " worn out book:\t" 
			 << std::boolalpha << book.worn_out ();
	student.read (book);
	std::cout<< "\nAre currently reading " << title <<" book? \t"<< std::boolalpha 
			 << student.get_reading();
	std::cout<< "\nAre any student take "<< title << " in library? \t" 
			 << std::boolalpha << library.is_taken (book); 
	student.relax (book);
	std::cout<< "\nThe students returns the books to the library when they go to the break.\nIs the "
			 << title << " returned to library.\t"<<  library.is_return (book);
		
return 0;
}

