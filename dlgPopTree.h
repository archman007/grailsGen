#ifndef DLGPOPTREE_H
#define DLGPOPTREE_H

//(*Headers(dlgPopTree)
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/treectrl.h>
//*)

class dlgPopTree: public wxDialog
{
	public:

		dlgPopTree(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~dlgPopTree();

		//(*Declarations(dlgPopTree)
		wxTreeCtrl* TreeCtrl1;
		//*)

	protected:

		//(*Identifiers(dlgPopTree)
		static const long ID_TREECTRL1;
		//*)

	private:

		//(*Handlers(dlgPopTree)
		void OnTreeCtrl1ItemRightClick(wxTreeEvent& event);
		void OnTreeCtrl1SelectionChanged(wxTreeEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
