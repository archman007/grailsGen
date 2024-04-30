#include "wxBCS.h"
#include <wx/dirctrl.h>

wxBCS::wxBCS()
{
    //ctor
}

wxBCS::~wxBCS()
{
    //dtor
}

void wxBCS::SelDir()
{
    wxDirPickerCtrl *currentDirectoryPicker = new wxDirPickerCtrl(this, ID_DirectoryPicker, wxEmptyString, _("Choose a root directory for your music"), wxPoint(5, 25), wxDefaultSize, wxDIRP_USE_TEXTCTRL | wxDIRP_DIR_MUST_EXIST);
//  wxGenericDirCtrl *sd = new wxGenericDirCtrl("Select A Directory", "/home/archman/workspace/grails");
}
