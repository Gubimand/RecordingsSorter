//============================================================================
// Name        : iusbreader.h
// Author      : Gubimand
// Date        : May 28, 2022
// Description : 
//============================================================================
#ifndef USBREADER_IUSBREADER_H_
#define USBREADER_IUSBREADER_H_

namespace USB
{

   /*
    *
    */
   class IUSBReader
   {
   public:
      virtual ~IUSBReader () {};

      virtual bool initializer() = 0;
      virtual std::list<std::filesystem::directory_entry> getUSBContent() = 0;
      virtual bool handler() = 0;
   };

} /* namespace USB */

#endif /* USBREADER_IUSBREADER_H_ */
