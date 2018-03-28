#ifndef LIBRADOR_GLOBAL_H
#define LIBRADOR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBRADOR_LIBRARY)
#  define LIBRADORSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBRADORSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBRADOR_GLOBAL_H
