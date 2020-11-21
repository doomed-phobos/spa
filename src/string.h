#ifndef SPA_STRING_H
#define SPA_STRING_H
#include <cstdarg>
#include <string>

namespace spa
{
   std::string format_to_str(const char* format, ...);
   std::string format_to_str(const char* format, va_list args);
   
   class String : public std::string
   {
   public:
      String();
      String(const char* s);

      void trim_start();
      void trim();
      void trim_end();
   private:
      std::string m_str;
   };
} // namespace spa


#endif