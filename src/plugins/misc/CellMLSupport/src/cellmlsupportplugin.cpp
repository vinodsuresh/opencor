//==============================================================================
// CellMLSupport plugin
//==============================================================================

#include "cellmlsupportplugin.h"

//==============================================================================

namespace OpenCOR {
namespace CellMLSupport {

//==============================================================================

PLUGININFO_FUNC CellMLSupportPluginInfo()
{
    Descriptions descriptions;

    descriptions.insert("en", "A plugin to support <a href=\"http://www.cellml.org/\">CellML</a>");
    descriptions.insert("fr", "Une extension pour supporter <a href=\"http://www.cellml.org/\">CellML</a>");

    return PluginInfo(PluginInfo::V001,
                      PluginInfo::General,
                      PluginInfo::Miscellaneous,
                      false,
                      QStringList() << "CellML" << "Computer",
                      descriptions);
}

//==============================================================================

Q_EXPORT_PLUGIN2(CellMLSupport, CellMLSupportPlugin)

//==============================================================================

QList<FileType> CellMLSupportPlugin::fileTypes() const
{
    // Return the CellML file type that the CellMLSupport plugin supports

    return QList<FileType>() << FileType(qobject_cast<FileInterface *>(this),
                                         CellmlMimeType, CellmlFileExtension);
}

//==============================================================================

QString CellMLSupportPlugin::fileTypeDescription(const QString &mMimeType) const
{
    // Return the description for the requested MIME type, that is as long as it
    // is for the CellML MIME type

    if (!mMimeType.compare(CellmlMimeType))
        return tr("CellML File");
    else
        // Not a MIME type that we can recognise, so...

        return FileInterface::fileTypeDescription(mMimeType);
}

//==============================================================================

}   // namespace CellMLSupport
}   // namespace OpenCOR

//==============================================================================
// End of file
//==============================================================================
