#include <iostream>
#include <conio.h>
#include <PDCurses.h>
//#include <ncurses.h>
int main()
{
std::cout <<"Is this shit working?"<< std::endl;
getch();
return 0;
}


git clone https://github.com/nanorc/nanorc.git
cd nanorc
make install
Add these lines to the ~/.nanorc

include ~/.nano/syntax/html.nanorc
include ~/.nano/syntax/css.nanorc
include ~/.nano/syntax/php.nanorc
include ~/.nano/syntax/ALL.nanorc
