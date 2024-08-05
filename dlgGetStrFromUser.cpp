#include "dlgGetStrFromUser.h"

//(*InternalHeaders(dlgGetStrFromUser)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(dlgGetStrFromUser)
const long dlgGetStrFromUser::ID_TEXTCTRL1 = wxNewId();
const long dlgGetStrFromUser::ID_HYPERLINKCTRL1 = wxNewId();
const long dlgGetStrFromUser::ID_BUTTON1 = wxNewId();
const long dlgGetStrFromUser::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(dlgGetStrFromUser,wxDialog)
	//(*EventTable(dlgGetStrFromUser)
	//*)
END_EVENT_TABLE()

dlgGetStrFromUser::dlgGetStrFromUser(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(dlgGetStrFromUser)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxSize(331,43), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer3->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	HyperlinkCtrl1 = new wxHyperlinkCtrl(this, ID_HYPERLINKCTRL1, _("http://www.codeblocks.org"), wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHL_CONTEXTMENU|wxHL_ALIGN_CENTRE, _T("ID_HYPERLINKCTRL1"));
	BoxSizer3->Add(HyperlinkCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	btnCancel = new wxButton(this, ID_BUTTON1, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer4->Add(btnCancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	btnOk = new wxButton(this, ID_BUTTON2, _("Ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer4->Add(btnOk, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dlgGetStrFromUser::OnbtnCancelClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&dlgGetStrFromUser::OnbtnOkClick);
	//*)
}

dlgGetStrFromUser::~dlgGetStrFromUser()
{
	//(*Destroy(dlgGetStrFromUser)
	//*)
}


void dlgGetStrFromUser::OnbtnOkClick(wxCommandEvent& event)
{
    EndModal(wxID_OK);
}

void dlgGetStrFromUser::OnbtnCancelClick(wxCommandEvent& event)
{
    EndModal(wxID_CANCEL);
}
