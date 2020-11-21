#include "file.h"

#include <iostream>
#include <cstring>
#include <algorithm>

#include "string.h"

namespace spa
{
   std::string get_file_extension(const std::string& filename)
   {
      std::string::const_reverse_iterator rit;
      std::string result;
      
      for(rit = filename.rbegin(); rit < filename.rend(); rit++) {
         if(*rit == '.') break;
      }

      if(rit != filename.rend()) {
         std::copy(rit.base(), filename.end(), std::back_inserter(result));
      }

      return result;
   }

//TODO: Crear una funcion que lee una linea que no esté vacía (bucle)
   bool get_line(std::istream& in, String& dst)
   {
      String aux_str = dst;

      std::getline(in, aux_str);
      
      while(!aux_str.empty()) {
         aux_str.trim();
         std::getline(in, aux_str);
         puts(aux_str.c_str());
      }

      dst = aux_str;

      return true;
   }
} // namespace spa
