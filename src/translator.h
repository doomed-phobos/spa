#ifndef SPA_TRANSLATOR_H
#define SPA_TRANSLATOR_H
#include <string>

namespace spa
{
   class SpaFile;

   //////////////////////////////////////////
   /// @brief Translate the file to a SpaFile
   //////////////////////////////////////////
   class Translator
   {
   public:
      Translator(const char filename[]);

      void intersprets();
   private:
      std::string m_filename;
   };
} // namespace spa


#endif