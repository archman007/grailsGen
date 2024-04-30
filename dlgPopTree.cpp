#include "dlgPopTree.h"
#include "zDB01.h"
#include <string.h>

zDB01 zdb;

//(*InternalHeaders(dlgPopTree)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(dlgPopTree)
const long dlgPopTree::ID_TREECTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(dlgPopTree,wxDialog)
    //(*EventTable(dlgPopTree)
    //*)
END_EVENT_TABLE()

dlgPopTree::dlgPopTree(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(dlgPopTree)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;

    Create(parent, id, _("Links Manipulator"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    TreeCtrl1 = new wxTreeCtrl(this, ID_TREECTRL1, wxDefaultPosition, wxSize(442,224), wxTR_DEFAULT_STYLE, wxDefaultValidator, _T("ID_TREECTRL1"));
    BoxSizer3->Add(TreeCtrl1, 1, wxALL|wxEXPAND, 5);
    BoxSizer2->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_TREECTRL1,wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK,(wxObjectEventFunction)&dlgPopTree::OnTreeCtrl1ItemRightClick);
    Connect(ID_TREECTRL1,wxEVT_COMMAND_TREE_SEL_CHANGED,(wxObjectEventFunction)&dlgPopTree::OnTreeCtrl1SelectionChanged);
    //*)

    zdb.listLk1Lk2();
    wxTreeItemId pl;
    std::string dt;
    std::string storedCat = "";
    wxTreeItemId parentId = TreeCtrl1->AddRoot("Links", 0, -1);
    for (size_t i = 0; i < zdb.zres.num_rows(); i++)
    {
        std::string sbuf = std::string(zdb.zres[i]["cat"]);
        if (storedCat != sbuf)
        {
            pl = TreeCtrl1->AppendItem(parentId, sbuf,0,-1);
            storedCat = sbuf;

            dt = std::string(zdb.zres[i]["idlk2"]);
            dt = dt + " ";
            dt = dt + std::string(zdb.zres[i]["lkn"]);
            TreeCtrl1->AppendItem(pl,  dt, 0, -1);

        }
        else
        {
            dt = std::string(zdb.zres[i]["idlk2"]);
            dt = dt + " ";
            dt = dt + std::string(zdb.zres[i]["lkn"]);
            TreeCtrl1->AppendItem(pl,  dt, 0, -1);

        }
//            string sbuf = std::string(ares[i]["idlk1"]) + " " + std::string(ares[i]["cat"]);
//            lk1.Add(std::string(zres[i]["idlk1"]) + " " + std::string(zres[i]["cat"]));

//            wxMessageBox(std::string(ares[i]["idlk1"]) + " " + std::string(ares[i]["cat"]));
//           wxString tbuf = buf;
//           dbn.Insert(tbuf,0,1);
//            lbxDbName.InsertItems(ares[i]["Database"]);
//            cout << "Name: " << ares[i]["idlk1"] << " - Address: " << ares[i]["cat"] << endl;

    }

}

dlgPopTree::~dlgPopTree()
{
    //(*Destroy(dlgPopTree)
    //*)
}


void dlgPopTree::OnTreeCtrl1ItemRightClick(wxTreeEvent& event)
{
    wxString sb = TreeCtrl1->GetItemText(TreeCtrl1->GetSelection());
    sb = sb;
}

void dlgPopTree::OnTreeCtrl1SelectionChanged(wxTreeEvent& event)
{
    wxTreeItemId selection = TreeCtrl1->GetSelection();
    wxString selectedItemText = TreeCtrl1->GetItemText(selection);
    std::string cmd = "";
    std::string selTxt = selectedItemText.ToStdString();
    std::string intVal = selTxt.substr(0, selTxt.find(" "));


    zdb.getLink(std::stoi(intVal));
    if (zdb.lk3[0].ToStdString().find("http") < zdb.lk3[0].length())
    {
        cmd = "/usr/lib/ghostery/Ghostery " + zdb.lk3[0].ToStdString();
    }
    else
    {
        if (zdb.lk3[0].ToStdString().find(".pdf") < zdb.lk3[0].length())
        {
            cmd = "okular \"" + zdb.lk3[0].ToStdString() + "\"";

        }
        else
        {
            cmd = zdb.lk3[0].ToStdString();

        }
    }
    system(cmd.c_str());
    cmd = cmd;


//    wxString gs = event.
//    wxString selectedItem = TreeCtrl1->GetItemText(selection);
    selectedItemText = selectedItemText;
}
