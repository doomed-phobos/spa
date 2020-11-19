/*
 * spa example.spa 
 */
#include "spa.h"

int main(int argc, char* argv[])
{
   spa::SpaFile spafile = spa::Translator::Decode(argv[1]);

   return 0;
}

//TODO: Create SpaFile class, which reads *.spa
//TODO: Create a exception, which displays a message within the console