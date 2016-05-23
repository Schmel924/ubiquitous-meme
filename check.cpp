
/*  checkthis.c  */
#include "includes.h"
#include "output.h"

class Hero
{
	std::string name;
	int charcteristic;

public:
	Hero(std::string i_name="Johnny", int i_characteristic = 13)
	{
		name=i_name;
		charcteristic=i_characteristic;
	}

	~Hero()
	{
	//clear name;
	}
	std::string get_name ()
	{
		return name;
	}



};



int main()

{

//initscr();

//wclear(stdscr);
Text_Output ("Hello");
Hero George;
Text_Output (George.get_name());
//cout <<George.get_name() << endl;
//printf("hello world\n");



system("pause");

return 0;

}
