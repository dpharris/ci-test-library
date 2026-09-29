// extra stuff
#ifdef OLCBDEBUG
  #define dP(...) Serial.print(__VA_ARGS__)
  #define dPV(x) { dP(" " #x "="); dP(x); }
  #define dPVH(x) { dP(" " #x "="); dP(x,HEX); }
#else
  #define dP(...)
#endif

typedef uint64_t Eid;
typedef uint64_t Nid;
typedef uint32_t Id;
typedef uint16_t Alias;
typedef uint64_t U64;
typedef uint32_t U32;
typedef uint16_t U16;
typedef uint8_t  U8;

