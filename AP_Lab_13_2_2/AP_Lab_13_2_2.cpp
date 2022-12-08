// Якубовський Владислав, РІ-11, АП, ЛР 13.2.2
#include <iostream>

#define LOG std::cout << "It is a " << __LINE__ << " line in " << __FILE__ << " file." << std::endl;

int main()
{
	LOG;
	LOG;
	LOG;
}

