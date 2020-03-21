
/*************************************************************
 * Open Ventilator
 * Copyright (C) 2020 - Marcelo Varanda
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 **************************************************************
*/


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

