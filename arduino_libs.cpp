#include "arduino_libs.h"
#include <stdio.h>

void LOG(char * s) {
    qDebug() << QString(s);
}
