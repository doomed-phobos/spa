#include "translator.h"

#include <cstring>
#include <stdexcept>

#include "file.h"
#include "vars.h"

namespace spa
{
   Translator::Translator(const char filename[])
   {
      if(!filename) throw SPA_MENU_THROW_ID;
         
      if(strcmp(get_file_extension(filename).c_str(), "spa")) {
         throw std::runtime_error("File is not .spa");
      }

      m_filename = filename;
   }
} // namespace spa
