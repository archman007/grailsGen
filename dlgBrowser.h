#ifndef DLGBRPWSER_H
#define DLGBRPWSER_H

//(*Headers(dlgBrpwser)
#include <wx/dialog.h>
#include <wx/panel.h>
#include <wx/sizer.h>
//*)

class dlgBrpwser: public wxDialog
{
	public:

		dlgBrpwser(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~dlgBrpwser();

		//(*Declarations(dlgBrpwser)
		wxPanel* Panel1;
		//*)

	protected:

		//(*Identifiers(dlgBrpwser)
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(dlgBrpwser)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
