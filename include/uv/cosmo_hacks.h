/* COMPATIBILITY HACKS FIXME */
#define EAI_NODATA (-5)
#define EAI_ADDRFAMILY (-9)
#define EAI_CANCELED (-101)
#define EAI_BADHINTS (-3013)
#define EAI_PROTOCOL (-3014)
#define ECHARSET (-4080)
#define UNKNOWN (-4094)
static unsigned int if_nametoindex(const char *ifname) {
  errno = ENODEV;
  return 0;
}
static char *if_indextoname(unsigned int ifindex, char *ifname) {
  errno = ENODEV;
  return NULL;
}