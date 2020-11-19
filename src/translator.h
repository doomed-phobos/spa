#ifndef SPA_TRANSLATOR_H
#define SPA_TRANSLATOR_H

namespace spa
{
   class SpaFile;

   //////////////////////////////////////////
   /// @brief Translate the file to a SpaFile
   //////////////////////////////////////////
   class Translator
   {
   public:
      static SpaFile Decode(const char filename[]);
   };
} // namespace spa


#endif