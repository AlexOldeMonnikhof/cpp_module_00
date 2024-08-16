#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

//serialization is the process of converting an object into a stream of bytes.
//the reverse process is called deserialization.
//is useful for: storing, transmitting, reconstructing etc.

int	main()
{
	Data		*data;
	//uintptr_t holds value of pointer as uint
	uintptr_t	serialNumber;
	
	data = new Data(1337);

	std::cout << "data value: " << data->getValue() << '\n';
	std::cout << "data address: " << data << '\n';

	std::cout << "\nserializing data to serial number (uintptr_t)\n";
	serialNumber = Serializer::serialize(data);

	std::cout << "serial number: " << serialNumber << '\n';

	std::cout << "deserializing serial number back to data\n\n";
	data = Serializer::deserialize(serialNumber);

	std::cout << "data value: " << data->getValue() << '\n';
	std::cout << "data address:  " << data << std::endl;

    delete data;

    return 0;
}
