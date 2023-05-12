#include "../src/log.h"

int main(int argc, char* argv[]) {
  
  logQ("this is a demonstration of this logging library");
  
  logW(LL_WARN, "set debug levels");
  
  // empty line
  logE();

  logC("compare", "two values");

  // empty line
  logE();

  logQ("an", "example", "of", "the", "power", "of", "variadic", "logging", 1234);
  

  return 0;
}
