#ifndef SPA_FILE_H
#define SPA_FILE_H
#include <string>

namespace spa
{
   class SpaFile
   {
   public:
      SpaFile(const char filename[]);
   };

   std::string get_extension(const std::string& filename);
} // namespace spa


#endif