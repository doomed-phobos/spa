#include "translator.h"

#include <fstream>
#include <cstring>

#include "file.h"
#include "vars.h"
#include "exception.h"
#include "string.h"

namespace spa
{
   Translator::Translator(const char filename[])
   {
      if(!filename) throw SPA_MENU_THROW_ID;
         
      if(strcmp(get_file_extension(filename).c_str(), SPA_EXTENSION_FILE)) {
         throw Exception("File is not .%s", SPA_EXTENSION_FILE);
      }

      m_filename = filename;
   }

   void Translator::interpret()
   {
      std::ifstream file(m_filename.c_str());
      String s;

      get_line(file, s);
      printf("%s", s.c_str());
   }
} // namespace spa
