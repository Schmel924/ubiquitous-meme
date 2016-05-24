/*output.h
All screen output methods...
*/
#include "includes.h"
void Text_Output (std::string  output_string)
{
//base variant
	std::cout << output_string << std::endl;
}

void PDC_text_output ( std::string output_string)
{
printw ("%s",output_string);
}
