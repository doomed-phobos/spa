#include "translator.h"

#include "file.h"

namespace spa
{
   SpaFile Translator::Decode(const char filename[])
   {
      return SpaFile(filename);
   }
} // namespace spa
