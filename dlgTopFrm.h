#ifndef DLGTOPFRM_H
#define DLGTOPFRM_H

//(*Headers(dlgTopFrm)
#include <wx/dialog.h>
#include <wx/listbox.h>
#include <wx/sizer.h>
//*)

class dlgTopFrm: public wxDialog
{
	public:

		dlgTopFrm(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~dlgTopFrm();

		//(*Declarations(dlgTopFrm)
		wxListBox* ListBox1;
		wxListBox* ListBox2;
		//*)

	protected:

		//(*Identifiers(dlgTopFrm)
		static const long ID_LISTBOX1;
		static const long ID_LISTBOX2;
		//*)

	private:

		//(*Handlers(dlgTopFrm)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
