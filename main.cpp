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
		return  name;
	}



};



int main()

{
initscr();

wclear(stdscr);
PDC_text_output ("Hello");
Hero George;
PDC_text_output (George.get_name());
//cout <<George.get_name() << endl;
//printf("hello world\n");
printw ("\ntell");
getch ();
endwin();


//system("pause");

return 0;

}
