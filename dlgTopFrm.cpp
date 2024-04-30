#include "dlgTopFrm.h"

//(*InternalHeaders(dlgTopFrm)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(dlgTopFrm)
const long dlgTopFrm::ID_LISTBOX1 = wxNewId();
const long dlgTopFrm::ID_LISTBOX2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(dlgTopFrm,wxDialog)
	//(*EventTable(dlgTopFrm)
	//*)
END_EVENT_TABLE()

dlgTopFrm::dlgTopFrm(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(dlgTopFrm)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	ListBox1 = new wxListBox(this, ID_LISTBOX1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
	BoxSizer3->Add(ListBox1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ListBox2 = new wxListBox(this, ID_LISTBOX2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX2"));
	BoxSizer3->Add(ListBox2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	//*)
}

dlgTopFrm::~dlgTopFrm()
{
	//(*Destroy(dlgTopFrm)
	//*)
}

