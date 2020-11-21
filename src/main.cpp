/*
 * spa example.spa 
 */
#include "spa.h"

int main(int argc, char* argv[])
{
   try {
      spa::Translator translator(argv[1]);

      translator.interpret();
   }catch(std::exception& exception) {
      puts(exception.what());
   }catch(int id) {
      if(id == SPA_MENU_THROW_ID) {
         puts("MENU HELP!");
      }
   }

   return 0;
}

//TODO: Crear el interpretador del "lenguaje"