//============================================================================
// Name        : RecordingsSorter.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <string>

#include "usbreader/cusbreader.h"
#include "usbreader/iusbreader.h"

int main() {
      /*
       *
       */
   std::string path = ".";
   USB::IUSBReader* usbReader = new USB::USBReader(path);
   (void)usbReader;

   std::cout << "hello!" << std::endl;
   return 0;
}
