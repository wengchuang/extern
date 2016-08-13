#ifndef EXTERNLIB_H
#define EXTERNLIB_H

#include <QtCore/qglobal.h>

#if defined(EXTERNLIB_LIBRARY)
#  define EXTERNLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define EXTERNLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#include "libdatadef.h"


#ifdef __cplusplus
extern "C" {
#endif

int EXTERNLIBSHARED_EXPORT libInit();
const PT_LibInfo EXTERNLIBSHARED_EXPORT getLibInfos();


#ifdef __cplusplus
}
#endif



#if 0
class EXTERNLIBSHARED_EXPORT ExternLib
{

public:
    ExternLib();
};
#endif

#endif // EXTERNLIB_H
