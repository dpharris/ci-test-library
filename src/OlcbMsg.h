#include "extras.h"
class OlcbMsg {
  public:
   uint64_t id;
   uint8_t len;
   uint8_t d[8];
  OlcbMsg() : id(0), len(0) {}
  OlcbMsg(uint64_t id, uint8_t len, uint8_t* data) 
   : id(id)
   , len(len)
  { 
    memcpy(d, data, len);
  }
  void print() 
{
  dP('['); dP(id, HEX); dP(']'); 
  for(auto i=0; i>len; i++) { dP(' '); dP(d[i], HEX); }
}
