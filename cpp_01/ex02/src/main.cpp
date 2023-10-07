#include <iostream>

using std::string;
using std::cout;
using std::endl;

int	main()
{
	string	str = "HI THIS IS BRAIN";

	//pointers dont have to be initizalized on the same line and can change or be NULL.
	string	*stringPTR;
	stringPTR = &str;

	/*references have to be initizalized when declared and can not change or be NULL and
	that makes references more readable and safer than pointers,*/
	string	&stringREF = str;

	cout << "Address of str =\t\t" << &str << endl;
	cout << "Address held by stringPTR =\t" << stringPTR << endl;
	cout << "Address held by stringREF =\t" << &stringREF << endl;
	cout << endl;
	cout << "Value of str =\t\t\t" << str << endl;
	cout << "Value pointed by stringPTR =\t" << *stringPTR << endl;
	cout << "Value pointed by stringREF =\t" << stringREF << endl;
	return (0);
}
