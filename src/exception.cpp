#include "exception.h"

#include <cstring>
#include <cstdarg>

#include "string.h"

namespace spa
{
   Exception::Exception() noexcept
   {}

   Exception::Exception(std::string msg) noexcept
   {
      m_msg = msg;
   }

   Exception::Exception(const char* format, ...) noexcept
   {
      if(!strchr(format, '%')) m_msg = format;

      va_list args;
      va_start(args, format);
      m_msg = format_to_str(format, args);
      va_end(args);
   }

   const char* Exception::what() const noexcept
   {
      return m_msg.c_str();
   }
} // namespace spa
