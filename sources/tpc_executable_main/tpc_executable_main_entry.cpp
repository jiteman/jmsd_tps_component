#include "tp_executable/tp_executable_class.h"


#include <iostream>


int main( int const /*argc*/, char const *const * /*argv*/ ) {
	auto *example = new ::jmsd::tp_executable::Tp_executable_class;

	::std::cout << example->say_base_hello() << ::std::endl;
	::std::cout << example->say_derived_hello() << ::std::endl;
	::std::cout << example->say_executable_hello() << ::std::endl;

	delete example;

	return 0;
}
