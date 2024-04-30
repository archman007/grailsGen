#include "dlgBrowser.h"
#include <wx/webview.h>

//(*InternalHeaders(dlgBrpwser)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(dlgBrpwser)
const long dlgBrpwser::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(dlgBrpwser,wxDialog)
	//(*EventTable(dlgBrpwser)
	//*)
END_EVENT_TABLE()

dlgBrpwser::dlgBrpwser(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(dlgBrpwser)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxSYSTEM_MENU|wxRESIZE_BORDER|wxMAXIMIZE_BOX, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3->Add(Panel1, 0, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer3, 0, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
//wxWebView* webView = new wxWebView(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize);
//webView->LoadURL("https://www.example.com");
//	BoxSizer3->Add(webView)
}

dlgBrpwser::~dlgBrpwser()
{
	//(*Destroy(dlgBrpwser)
	//*)
}

