//============================================================================
// Name        : cusbreader.h
// Author      : Gubimand
// Date        : May 28, 2022
// Description : 
//============================================================================
#ifndef USBREADER_CUSBREADER_H_
#define USBREADER_CUSBREADER_H_

#include <filesystem>
#include <list>
#include <string>

#include "iusbreader.h"

namespace USB
{
   /*
    *
    */
   class USBReader : public IUSBReader
   {
   public:
      USBReader (std::string _usbReader);
      ~USBReader () {};

      bool initializer();
      std::list<std::filesystem::directory_entry> getUSBContent();
      bool handler();

   private:
      bool binitializer;
      std::string usbReader;
      std::list<std::filesystem::directory_entry> pathList;

      bool checkIfUSBIsReady();
      std::list<std::filesystem::directory_entry> readUSBContent();

   };
} /* namespace USB */

#endif /* USBREADER_CUSBREADER_H_ */
