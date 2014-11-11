#ifndef _AUTOGUARD_Feature_H_
#define _AUTOGUARD_Feature_H_

#include "define.h"
#include "configure.h"

namespace bio {

class point {
public:
    int x, y;
    point() {}
    point(int x, int y) : x(x), y(y) {}
};

class Feature {
public:
    static int descriptor_length;
    /* Location in the image */
    point location;

    /* scale */
    double scale;

    /*  orientation */
    double orient;

    double descriptor[DEFAULT_DESCR_LEN];

//    Mat *img;
};

}

#endif

