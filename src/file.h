#ifndef SPA_FILE_H
#define SPA_FILE_H
#include <iosfwd>
#include <string>

namespace spa
{
   class String;

   std::string get_file_extension(const std::string& filename);
   bool get_line(std::istream& in, String& dst);
} // namespace spa


#endif