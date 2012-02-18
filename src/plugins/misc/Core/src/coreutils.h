//==============================================================================
// Core utilities
//==============================================================================

#ifndef COREUTILS_H
#define COREUTILS_H

//==============================================================================

#include "coreglobal.h"

//==============================================================================

#include <QString>

//==============================================================================

namespace OpenCOR {
namespace Core {

//==============================================================================

QByteArray CORE_EXPORT resourceAsByteArray(const QString &pResource);
void CORE_EXPORT saveResourceAs(const QString &pResource,
                                const QString &pFilename);

void CORE_EXPORT * singleton(const QString &pClassName,
                             void *pClassDefaultInstance);

//==============================================================================

}   // namespace Core
}   // namespace OpenCOR

//==============================================================================

#endif

//==============================================================================
// End of file
//==============================================================================
