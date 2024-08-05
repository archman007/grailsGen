#ifndef DLGGETSTRFROMUSER_H
#define DLGGETSTRFROMUSER_H

//(*Headers(dlgGetStrFromUser)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/hyperlink.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
//*)

class dlgGetStrFromUser: public wxDialog
{
	public:

		dlgGetStrFromUser(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~dlgGetStrFromUser();

		//(*Declarations(dlgGetStrFromUser)
		wxButton* btnCancel;
		wxButton* btnOk;
		wxHyperlinkCtrl* HyperlinkCtrl1;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(dlgGetStrFromUser)
		static const long ID_TEXTCTRL1;
		static const long ID_HYPERLINKCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(dlgGetStrFromUser)
		void OnbtnOkClick(wxCommandEvent& event);
		void OnbtnCancelClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
