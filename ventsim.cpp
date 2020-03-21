#include "ventsim.h"
#include "arduino_libs.h"

//#ifdef __cplusplus
// extern "C" {
//#endif
   
static int gCount = 0;

 void loop()
 {
   gCount++; 
   LOG("This is printf counter = %d\n");
//   qDebug("loop called\n");
//   printf("This is printf counter = %d\n", gCount);
//   fflush(stdout);
 }

//#ifdef __cplusplus
// }
//#endif

