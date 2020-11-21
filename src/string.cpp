#include "string.h"

#include <cstdio>
#include <algorithm>
#include <vector>

namespace spa
{
   std::string format_to_str(const char* format, ...)
   {
      va_list args;
      va_start(args, format);
      return format_to_str(format, args);
      va_end(args);
   }

   std::string format_to_str(const char* format, va_list args)
   {
      int required_size = vsnprintf(nullptr, 0, format, args);

      if(required_size > 0) {
         std::vector<char> buf(++required_size);
         vsnprintf(&buf[0] , buf.size(), format, args);

         return std::string(&buf[0]);
      }

      return std::string();
   }
   
   String::String()
   {}

   String::String(const char* s) :
   m_str(s)
   {}

   void String::trim_start()
   {
      int i;
      for(i = 0; i < m_str.size(); i++) {
         if(!isspace(m_str[i])) {
            m_str = m_str.substr(i, m_str.size() - i);
            break;
         }
      }
      
      // Si el string está lleno de espacios
      if(i == m_str.size()) {
         m_str.erase();
      }
   }

   void String::trim()
   {
      trim_start();
      trim_end();
   }

   void String::trim_end()
   {
      int i;
      for(i = m_str.size() - 1; i > 0; --i) {
         if(!isspace(m_str[i])) {
            m_str = m_str.substr(0, i + 1);
            break;
         }
      }

      if(i == 0) {
         m_str.erase();
      }
   }
} // namespace spa
