#ifndef SPA_EXCEPTION_H
#define SPA_EXCEPTION_H
#include <string>
#include <exception>

namespace spa
{
   class Exception : public std::exception
   {
   public:
      Exception() noexcept;
      Exception(std::string msg) noexcept;
      Exception(const char* format, ...) noexcept;

      const char* what() const noexcept;
   private:
      std::string m_msg;
   };
} // namespace spa


#endif