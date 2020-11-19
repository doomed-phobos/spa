#include "file.h"

#include <algorithm>

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
} // namespace spa
