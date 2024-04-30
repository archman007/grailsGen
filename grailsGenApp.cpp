/***************************************************************
 * Name:      grailsGenApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   2023-02-27
 * Copyright: Mr. Arch Brooks (https://archbrooks.us/b4)
 * License:
 **************************************************************/

#include "grailsGenApp.h"

//(*AppHeaders
#include "grailsGenMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(grailsGenApp);

bool grailsGenApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	grailsGenFrame* Frame = new grailsGenFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
