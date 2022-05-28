//============================================================================
// Name        : cusbreader.cpp
// Author      : Gubimand
// Date        : May 28, 2022
// Description : 
//============================================================================
#include "cusbreader.h"

namespace USB
{

   USBReader::USBReader (std::string _usbReader)
   {
      binitializer = false;
      usbReader = _usbReader;
   }

   bool USBReader::initializer()
   {
      return binitializer;
   }

   std::list<std::filesystem::directory_entry> USBReader::getUSBContent()
   {
      std::list<std::filesystem::directory_entry> temp;

      return temp;
   }

   bool USBReader::checkIfUSBIsReady()
   {
      return true;
   }

   std::list<std::filesystem::directory_entry> USBReader::readUSBContent()
   {
      std::list<std::filesystem::directory_entry> temp;

      return temp;
   }

   bool USBReader::handler()
   {
      return true;
   }

} /* namespace USB */
