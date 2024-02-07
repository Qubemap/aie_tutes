#include <iostream>
/*
int main()
{
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;

	p3 = &d;

	std::cout << "*p3 = " << *p3 << std::endl; //p3 = S

	p3 = p1;

	std::cout << "*p3 = " << *p3; //p3 = T
	std::cout << ", p3 = " << p3 << std::endl; //p3 = '6940'

	*p1 = *p2;

	std::cout << "p1 = " << *p1; //p1 = S
	std::cout << ", p1 = " << p1 << std::endl; //p1 = '9772'

}
*/

int main()
{
	char blocks[3] = {'A', 'B', 'C'};
	char *ptr = &blocks[0];
	char temp;

	temp = blocks[0];
	std::cout << "temp = "<< temp << std::endl;
	temp = *(blocks + 2);
	std::cout << temp << std::endl;
	temp = *(ptr + 1);
	std::cout << temp << std::endl;
	temp = *ptr;
	std::cout << temp << "\n" << std::endl;

	ptr = blocks + 1;
	std::cout << temp << std::endl;
	temp = *ptr;
	std::cout << temp << std::endl;
	temp = *(ptr + 1);
	std::cout << temp << "\n" << std::endl;

	ptr = blocks;
	std::cout << temp << std::endl;
	temp = *++ptr;
	std::cout << temp << std::endl;
	temp = *++ptr;
	std::cout << temp << std::endl;
	temp = *ptr++;
	std::cout << temp << std::endl;
	temp = *ptr;
	std::cout << temp << std::endl;

	return 0;
}


