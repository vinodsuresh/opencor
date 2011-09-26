#include "rawcellmlviewplugin.h"

#include <QTabBar>

namespace OpenCOR {
namespace RawCellMLView {

PLUGININFO_FUNC RawCellMLViewPluginInfo()
{
    Descriptions descriptions;

    descriptions.insert("en", "A plugin to edit <a href=\"http://www.cellml.org/\">CellML</a> files using an XML editor");
    descriptions.insert("fr", "Une extension pour �diter des fichiers <a href=\"http://www.cellml.org/\">CellML</a> � l'aide d'un �diteur XML");

    return PluginInfo(PluginInfo::V001,
                      PluginInfo::Gui,
                      PluginInfo::Editing,
                      true,
                      QStringList() << "CoreCellMLEditing" << "QScintilla",
                      descriptions);
}

Q_EXPORT_PLUGIN2(RawCellMLView, RawCellMLViewPlugin)

RawCellMLViewPlugin::RawCellMLViewPlugin()
{
    // Set our settings

    mGuiSettings->addView(GuiViewSettings::Editing);
}

void RawCellMLViewPlugin::retranslateUi()
{
    // Retranslate our view's tab

    GuiViewSettings *view = mGuiSettings->views().at(0);

    view->tabBar()->setTabText(view->tabIndex(), tr("Raw CellML"));
}

} }
