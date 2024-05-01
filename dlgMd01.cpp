#include "dlgMd01.h"
#include <wx/wx.h>
#include <wx/dataview.h>
#include "zDB01.h"
#include "dlgNewCat.h"
#include "dlgNewLink.h"
#include "bcsGui.h"
#include <boost/algorithm/string.hpp>
#include "dlgXqt.h"
#include <wx/clipbrd.h>
#include "dlgSelCat.h"

zDB01 zrdb;
bcsGui gui01;

//#include <mysqlx/xdevapi.h>
//(*InternalHeaders(dlgMd01)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(dlgMd01)
const long dlgMd01::ID_STATICTEXT1 = wxNewId();
const long dlgMd01::ID_LISTBOX1 = wxNewId();
const long dlgMd01::ID_STATICTEXT2 = wxNewId();
const long dlgMd01::ID_LISTBOX2 = wxNewId();
const long dlgMd01::ID_STATICTEXT3 = wxNewId();
const long dlgMd01::ID_MENUITEM1 = wxNewId();
const long dlgMd01::ID_MENUITEM11 = wxNewId();
const long dlgMd01::ID_MENUITEM17 = wxNewId();
const long dlgMd01::ID_MENUITEM10 = wxNewId();
const long dlgMd01::ID_MENUITEM16 = wxNewId();
const long dlgMd01::ID_MENUITEM9 = wxNewId();
const long dlgMd01::ID_MENUITEM23 = wxNewId();
const long dlgMd01::pumNewBlog = wxNewId();
const long dlgMd01::ID_MENUITEM31 = wxNewId();
const long dlgMd01::ID_MENUITEM34 = wxNewId();
const long dlgMd01::ID_MENUITEM33 = wxNewId();
const long dlgMd01::ID_MENUITEM29 = wxNewId();
const long dlgMd01::ID_MENUITEM30 = wxNewId();
const long dlgMd01::ID_MENUITEM28 = wxNewId();
const long dlgMd01::ID_MENUITEM35 = wxNewId();
const long dlgMd01::ID_MENUITEM20 = wxNewId();
const long dlgMd01::ID_MENUITEM21 = wxNewId();
const long dlgMd01::ID_MENUITEM26 = wxNewId();
const long dlgMd01::ID_MENUITEM25 = wxNewId();
const long dlgMd01::ID_MENUITEM27 = wxNewId();
const long dlgMd01::ID_MENUITEM32 = wxNewId();
const long dlgMd01::ID_MENUITEM22 = wxNewId();
const long dlgMd01::ID_MENUITEM12 = wxNewId();
const long dlgMd01::ID_MENUITEM3 = wxNewId();
const long dlgMd01::ID_MENUITEM8 = wxNewId();
const long dlgMd01::ID_MENUITEM19 = wxNewId();
const long dlgMd01::ID_MENUITEM14 = wxNewId();
const long dlgMd01::ID_MENUITEM15 = wxNewId();
const long dlgMd01::ID_MENUITEM13 = wxNewId();
const long dlgMd01::ID_MENUITEM2 = wxNewId();
const long dlgMd01::ID_MENUITEM4 = wxNewId();
const long dlgMd01::ID_MENUITEM5 = wxNewId();
const long dlgMd01::ID_MENUITEM6 = wxNewId();
const long dlgMd01::ID_MENUITEM7 = wxNewId();
const long dlgMd01::ID_MENUITEM24 = wxNewId();
const long dlgMd01::ID_MENUITEM18 = wxNewId();
//*)

BEGIN_EVENT_TABLE(dlgMd01,wxDialog)
    //(*EventTable(dlgMd01)
    //*)
END_EVENT_TABLE()

dlgMd01::dlgMd01(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(dlgMd01)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;

    Create(parent, id, _("BCS Programmer\'s Workbennch"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxSYSTEM_MENU|wxRESIZE_BORDER, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer3 = new wxBoxSizer(wxVERTICAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Categories"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    BoxSizer3->Add(StaticText1, 0, wxALL|wxEXPAND, 0);
    ListBox1 = new wxListBox(this, ID_LISTBOX1, wxDefaultPosition, wxSize(683,162), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
    BoxSizer3->Add(ListBox1, 1, wxALL|wxEXPAND, 5);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Links"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
    BoxSizer3->Add(StaticText2, 0, wxALL|wxEXPAND, 0);
    ListBox2 = new wxListBox(this, ID_LISTBOX2, wxDefaultPosition, wxSize(683,186), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX2"));
    BoxSizer3->Add(ListBox2, 1, wxALL|wxEXPAND, 5);
    lblStatus = new wxStaticText(this, ID_STATICTEXT3, _("Text"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
    BoxSizer3->Add(lblStatus, 0, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND, 1);
    BoxSizer2->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
    SetSizer(BoxSizer1);
    MenuItem6 = new wxMenu();
    menMasters = new wxMenuItem(MenuItem6, ID_MENUITEM1, _("Add New Category"), wxEmptyString, wxITEM_NORMAL);
    MenuItem6->Append(menMasters);
    menEditCats = new wxMenuItem(MenuItem6, ID_MENUITEM11, _("Edit  Categories"), wxEmptyString, wxITEM_NORMAL);
    MenuItem6->Append(menEditCats);
    MenuItem4 = new wxMenuItem(MenuItem6, ID_MENUITEM17, _("Position Categories"), wxEmptyString, wxITEM_NORMAL);
    MenuItem6->Append(MenuItem4);
    MenuItem2 = new wxMenu();
    pumAscCats = new wxMenuItem(MenuItem2, ID_MENUITEM10, _("Asecending"), wxEmptyString, wxITEM_NORMAL);
    MenuItem2->Append(pumAscCats);
    menPriCats = new wxMenuItem(MenuItem2, ID_MENUITEM16, _("Primary Key"), wxEmptyString, wxITEM_NORMAL);
    MenuItem2->Append(menPriCats);
    MenuItem6->Append(ID_MENUITEM9, _("Sort"), MenuItem2, wxEmptyString);
    pumMaster.Append(ID_MENUITEM23, _("Categories"), MenuItem6, wxEmptyString);
    newBlgPost = new wxMenuItem((&pumMaster), pumNewBlog, _("New Blog Post"), wxEmptyString, wxITEM_NORMAL);
    pumMaster.Append(newBlgPost);
    pumCode = new wxMenuItem((&pumMaster), ID_MENUITEM31, _("Code (VS)"), wxEmptyString, wxITEM_NORMAL);
    pumMaster.Append(pumCode);
    MenuItem5 = new wxMenu();
    MenuItem9 = new wxMenu();
    pumSysMon2 = new wxMenuItem(MenuItem9, ID_MENUITEM34, _("System Monitor GUI"), wxEmptyString, wxITEM_NORMAL);
    MenuItem9->Append(pumSysMon2);
    MenuItem5->Append(ID_MENUITEM33, _("System Monitors"), MenuItem9, wxEmptyString);
    MenuItem8 = new wxMenu();
    pumQuerryBuider = new wxMenuItem(MenuItem8, ID_MENUITEM29, _("Query Builder"), wxEmptyString, wxITEM_NORMAL);
    MenuItem8->Append(pumQuerryBuider);
    pumMYSqlBuilder = new wxMenuItem(MenuItem8, ID_MENUITEM30, _("MySQL Desktop"), wxEmptyString, wxITEM_NORMAL);
    MenuItem8->Append(pumMYSqlBuilder);
    MenuItem5->Append(ID_MENUITEM28, _("SQL Tools"), MenuItem8, wxEmptyString);
    pumGitDT = new wxMenuItem(MenuItem5, ID_MENUITEM35, _("GitHub Desktop"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->Append(pumGitDT);
    pum7Zzip = new wxMenuItem(MenuItem5, ID_MENUITEM20, _("7 Zip Gui"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->Append(pum7Zzip);
    pumRSLBk = new wxMenuItem(MenuItem5, ID_MENUITEM21, _("Rsync Lucky Backup"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->Append(pumRSLBk);
    pumRSA = new wxMenuItem(MenuItem5, ID_MENUITEM26, _("Rsync Stand Alone"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->Append(pumRSA);
    pumwxGlade = new wxMenuItem(MenuItem5, ID_MENUITEM25, _("wxGlade"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->Append(pumwxGlade);
    pumBleachBit = new wxMenuItem(MenuItem5, ID_MENUITEM27, _("Bleach Bit"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->Append(pumBleachBit);
    pumSysMon = new wxMenuItem(MenuItem5, ID_MENUITEM32, _("System Monitor"), wxEmptyString, wxITEM_NORMAL);
    MenuItem5->Append(pumSysMon);
    pumMaster.Append(ID_MENUITEM22, _("Tools"), MenuItem5, wxEmptyString);
    MenuItem7 = new wxMenu();
    pumAddDocs = new wxMenuItem(MenuItem7, ID_MENUITEM12, _("Add Docs"), wxEmptyString, wxITEM_NORMAL);
    MenuItem7->Append(pumAddDocs);
    pumDDink = new wxMenuItem(MenuItem7, ID_MENUITEM3, _("Delete A Link"), wxEmptyString, wxITEM_NORMAL);
    MenuItem7->Append(pumDDink);
    pumEditDetail = new wxMenuItem(MenuItem7, ID_MENUITEM8, _("Edit Detail"), wxEmptyString, wxITEM_NORMAL);
    MenuItem7->Append(pumEditDetail);
    pumRelLink = new wxMenuItem(MenuItem7, ID_MENUITEM19, _("Move Link"), wxEmptyString, wxITEM_NORMAL);
    MenuItem7->Append(pumRelLink);
    MenuItem3 = new wxMenu();
    pumSortID = new wxMenuItem(MenuItem3, ID_MENUITEM14, _("Record ID"), wxEmptyString, wxITEM_NORMAL);
    MenuItem3->Append(pumSortID);
    pumAscSeq = new wxMenuItem(MenuItem3, ID_MENUITEM15, _("Ascenging Sequence"), wxEmptyString, wxITEM_NORMAL);
    MenuItem3->Append(pumAscSeq);
    MenuItem7->Append(ID_MENUITEM13, _("Sort"), MenuItem3, wxEmptyString);
    MenuItem1 = new wxMenu();
    menDetails = new wxMenuItem(MenuItem1, ID_MENUITEM2, _("Add New Link"), wxEmptyString, wxITEM_NORMAL);
    MenuItem1->Append(menDetails);
    pumAddPDF = new wxMenuItem(MenuItem1, ID_MENUITEM4, _("Add PDF"), wxEmptyString, wxITEM_NORMAL);
    MenuItem1->Append(pumAddPDF);
    pumAddXqt = new wxMenuItem(MenuItem1, ID_MENUITEM5, _("Add Eecutable"), wxEmptyString, wxITEM_NORMAL);
    MenuItem1->Append(pumAddXqt);
    pumAddWord = new wxMenuItem(MenuItem1, ID_MENUITEM6, _("Add Word Doucment"), wxEmptyString, wxITEM_NORMAL);
    MenuItem1->Append(pumAddWord);
    MenuItem7->Append(ID_MENUITEM7, _("Docs"), MenuItem1, wxEmptyString);
    pumDetails.Append(ID_MENUITEM24, _("Links"), MenuItem7, wxEmptyString);
    pumNewBlogArt = new wxMenuItem((&pumDetails), ID_MENUITEM18, _("New Blog Post"), wxEmptyString, wxITEM_NORMAL);
    pumDetails.Append(pumNewBlogArt);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,(wxObjectEventFunction)&dlgMd01::OnListBox1DClick);
    Connect(ID_LISTBOX2,wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,(wxObjectEventFunction)&dlgMd01::OnListBox2DClick);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnmenMastersSelected);
    Connect(ID_MENUITEM11,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnmenEditCatsSelected);
    Connect(ID_MENUITEM17,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumAscCatsSelected);
    Connect(ID_MENUITEM10,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumAscCatsSelected1);
    Connect(ID_MENUITEM16,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnmenPriCatsSelected);
    Connect(pumNewBlog,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumNewBlogPostSelected);
    Connect(ID_MENUITEM31,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumCodeSelected);
    Connect(ID_MENUITEM34,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumSysMon2Selected);
    Connect(ID_MENUITEM29,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumQuerryBuiderSelected);
    Connect(ID_MENUITEM30,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumMYSqlBuilderSelected);
    Connect(ID_MENUITEM35,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumGitDTSelected);
    Connect(ID_MENUITEM20,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::Onpum7ZzipSelected);
    Connect(ID_MENUITEM21,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumRSLBkSelected);
    Connect(ID_MENUITEM26,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumRSyncSASelected);
    Connect(ID_MENUITEM25,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumwxGladeSelected);
    Connect(ID_MENUITEM27,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumBleachBitSelected);
    Connect(ID_MENUITEM32,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumSysMonSelected1);
    Connect(ID_MENUITEM12,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumAddDocsSelected);
    Connect(ID_MENUITEM3,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumDDinkSelected);
    Connect(ID_MENUITEM8,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumEditDetailSelected);
    Connect(ID_MENUITEM19,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumRelLinkSelected);
    Connect(ID_MENUITEM14,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumSortIDSelected);
    Connect(ID_MENUITEM15,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumAscSeqSelected);
    Connect(ID_MENUITEM2,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnmenDetailsSelected);
    Connect(ID_MENUITEM4,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumAddPDFSelected);
    Connect(ID_MENUITEM5,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumAddXqtSelected);
    Connect(ID_MENUITEM6,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumAddWordSelected);
    Connect(ID_MENUITEM18,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&dlgMd01::OnpumNewBlogPostSelected);
    //*)
//    wxListBox* masterListCtrl = new wxListBox(this, wxID_ANY, wxPoint(10, 10), wxSize(150, 200));
//    wxDataViewListCtrl* masterListCtrl = new wxDataViewListCtrl(this, wxID_ANY, wxPoint(10, 10), wxSize(150, 200));
//    BoxSizer3->Add(masterListCtrl, 0, wxALL|wxEXPAND, 5);
//    m_masterList = new wxListBox(this, wxID_ANY, wxPoint(10, 10), wxSize(150, 200));
//   m_detailList = new wxListBox(this, wxID_ANY, wxPoint(170, 10), wxSize(150, 200));

    ListBox1->Connect(ListBox1->GetId(), wxEVT_RIGHT_UP,
                      wxMouseEventHandler(dlgMd01::OnpanCatsRightUpCats), NULL, this);

    ListBox2->Connect(ListBox2->GetId(), wxEVT_RIGHT_UP,
                      wxMouseEventHandler(dlgMd01::OnLinksRightUp), NULL, this);

    RefreshCats();

}

void dlgMd01::RefreshCats()
{
    ListBox1->Clear();
    zrdb.listCategories(dRID);
    for (size_t i=0; i < zrdb.zres.num_rows(); i++)
    {
        ListBox1->Append(std::string(zrdb.zres[i]["idlk1"]) + " " + std::string(zrdb.zres[i]["cat"]));
        std::string cat = std::string(zrdb.zres[i]["cat"]);
    }
    stringstream  stat;
    stat <<  std::fixed << std::setprecision(2) << std::setfill(',') << std::setw(6) << zrdb.zres.num_rows() << " Records Retrieved";
    string zlabel = std::to_string(zrdb.zres.num_rows()) + " Records Retrieved";
    lblStatus->SetLabel(zlabel);
}

void dlgMd01::RefreshDetails()
{
    ListBox2->Clear();
    zrdb.listLinks(std::stoi(mkVal), dRID);
    for (size_t i=0; i < zrdb.zres.num_rows(); i++)
    {
        ListBox2->Append(zrdb.lk2[i]);
    }
    string zlabel = std::to_string(zrdb.zres.num_rows()) + " Records Retrieved";
    lblStatus->SetLabel(zlabel);
//    lblStatus->Label = zlabel;
//    lblStatus->Update();
//    lblStatus->Refresh();Blog
}

dlgMd01::~dlgMd01()
{
    //(*Destroy(dlgMd01)
    //*)
}

void dlgMd01::OnpanCatsRightUpCats(wxMouseEvent& event)
{
    PopupMenu( & pumMaster );

}

void dlgMd01::OnLinksRightUp(wxMouseEvent& event)
{
    PopupMenu( & pumDetails );

}

void dlgMd01::OnListBox1DClick(wxCommandEvent& event)
{
    ListBox2->Clear();
    std::string masterItem = ListBox1->GetStringSelection().ToStdString();
    zrdb.listLinks(std::stoi(masterItem.substr(0, masterItem.find(" "))), false);
    zrdb.strIdlk1 = masterItem.substr(0, masterItem.find(" "));
    mkVal = zrdb.strIdlk1;
    for (size_t i=0; i < zrdb.zres.num_rows(); i++)
    {
//               m_masterList->Append(res[i]["name"]);
//        ListBox1->Append(res[i]["name"]);


        ListBox2->Append(std::string(zrdb.zres[i]["idlk2"]) + " " + std::string(zrdb.zres[i]["lkn"]));
        std::string lkn = std::string(zrdb.zres[i]["lkn"]);
    }
    RefreshDetails();
    masterItem = masterItem;
}

void dlgMd01::OnListBox2DClick(wxCommandEvent& event)
{
    std::string detailtem = ListBox2->GetStringSelection().ToStdString();
    zrdb.getLink(std::stoi(detailtem.substr(0, detailtem.find(" "))));
    if (zrdb.lk3[0].ToStdString().find("http") < detailtem.length())
    {
        cmd = defBro + " " + zrdb.lk3[0].ToStdString();

    }
    else
    {
        if (zrdb.lk3[0].ToStdString().find(".pdf") < zrdb.lk3[0].ToStdString().length())
        {
            std::string pbuf =  "\"" + zrdb.lk3[0].ToStdString() + "\" & ";
            cmd = "okular " + pbuf;
        }
        else
        {
            if (zrdb.lk3[0].ToStdString().find(".odt") < zrdb.lk3[0].ToStdString().length())
            {
                std::string pbuf =  "\"" + zrdb.lk3[0].ToStdString() + "\" & ";
                cmd = "libreoffice --writer " + pbuf;
            }
            else
            {
                cmd = zrdb.lk3[0].ToStdString();

            }
        }

    }
    system(cmd.c_str());

    detailtem = detailtem;
}

void dlgMd01::OnMenuItem1Selected(wxCommandEvent& event)
{
}

void dlgMd01::OnMenuItem2Selected(wxCommandEvent& event)
{
}

void dlgMd01::OnmenDetailsSelected(wxCommandEvent& event)
{
    dlgNewLink dlg(NULL, wxID_ANY);
//    dlg.strIdlk1 =  dlg.strIdlk1;
    zrdb.initField(mkVal,dlg.edtPrim);

    if (dlg.ShowModal() == wxID_OK)
    {
        ListBox2->Clear();
        zrdb.listLinks(std::stoi(mkVal), false);

        for (size_t i=0; i < zrdb.zres.num_rows(); i++)
        {
            ListBox2->Append(zrdb.lk2[i]);
        }


    }

}

void dlgMd01::OnmenMastersSelected(wxCommandEvent& event)
{
    dlgNewCat dlg(NULL, wxID_ANY);
    if (dlg.ShowModal() == wxID_OK)
    {
        RefreshCats();
    }
}


void dlgMd01::OnpumDDinkSelected(wxCommandEvent& event)
{
//DELETE FROM `lk2` WHERE idlk2 = 712
    std::string detailtem = ListBox2->GetStringSelection().ToStdString();
    std::string recNo = detailtem.substr(0, detailtem.find(" "));
    std::string cap = "Are You sure You would like to delete\n\"" + detailtem +"\"?";
    if (gui01.yornQues(cap, "Delete This Record?") == wxYES)
    {
        zrdb.DeleteLink(recNo);
        RefreshDetails();
    }

}

void dlgMd01::OnpumAddPDFSelected(wxCommandEvent& event)
{
    dlgNewLink dlg(NULL, wxID_ANY);
    zrdb.initField(mkVal,dlg.edtPrim);
    int flags = wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_DEFAULT_STYLE;
    zrdb.initField(gui01.openFileDialog(NULL, "Select A File", "/home/archman/Documents", "", "*.pdf", flags),dlg.edtLink);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
    RefreshDetails();
}

void dlgMd01::OnpumAddXqtSelected(wxCommandEvent& event)
{
    dlgNewLink dlg(NULL, wxID_ANY);
    zrdb.initField(mkVal,dlg.edtPrim);
    int flags = wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_DEFAULT_STYLE;
    zrdb.initField(gui01.openFileDialog(NULL, "Select A File", "/home/archman/workspace/cb/cpp", "", "", flags),dlg.edtLink);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
    RefreshDetails();
}

void dlgMd01::OnpumAddWordSelected(wxCommandEvent& event)
{
    dlgNewLink dlg(NULL, wxID_ANY);
    zrdb.initField(mkVal,dlg.edtPrim);
    int flags = wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_DEFAULT_STYLE;
    zrdb.initField(gui01.openFileDialog(NULL, "Select A Document", "/home/archman/Documents", "", "*.odt", flags),dlg.edtLink);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
    RefreshDetails();

}

void dlgMd01::OnpumEditDetailSelected(wxCommandEvent& event)
{
    std::string detailtem = ListBox2->GetStringSelection().ToStdString();
    std::string recNo = detailtem.substr(0, detailtem.find(" "));
    zrdb.insertMode = false;
    zrdb.getLink(std::stoi(detailtem.substr(0, detailtem.find(" "))));
    dlgNewLink dlg(NULL, wxID_ANY);
//    string sbuf = std::string(ares[i]["idlk2"]) + " " + std::string(ares[i]["lkn"]);
    zrdb.initField(std::string(zrdb.zres[0]["idlk2"]), dlg.edtPrim);
    zrdb.initField(std::string(zrdb.zres[0]["lkn"]), dlg.edtLinkName);
    zrdb.initField(std::string(zrdb.zres[0]["lnk"]), dlg.edtLink);
    zrdb.initField(std::string(zrdb.zres[0]["ddes"]), dlg.edtDetDes);
    dlg.btnInset->SetLabel( "Edit");
    if (dlg.ShowModal() == wxID_OK)
    {
        zrdb.editLink(recNo,zrdb.fieldToString(dlg.edtPrim), zrdb.fieldToString(dlg.edtLink), zrdb.fieldToString(dlg.edtLinkName), zrdb.fieldToString(dlg.edtDetDes), zrdb.strIdlk1);
        RefreshDetails();
    }


}

void dlgMd01::OnpumAscCatsSelected(wxCommandEvent& event)
{
    size_t isel = 0;
    size_t i;
    std::string buf;
    std::string begVal= "C";
    size_t ilen;
    ilen = begVal.length();
    int idet;
    std::string tbuf;
    size_t curRec;
    begVal = gui01.GetText(false, "B", "Select Starting Value", "Get Initial Value");
    for (i=0; ((isel == 1) or (i < ListBox1->GetCount() - 1)); i++)
    {
        buf = ListBox1->GetString(i).ToStdString();
        tbuf = buf.substr(buf.find(" ") + 1, buf.length());
        tbuf = boost::algorithm::to_lower_copy(tbuf);
        begVal = boost::algorithm::to_lower_copy(begVal);
        idet = tbuf.compare(0, ilen, begVal, 0, ilen);
        if (idet < 0)
        {
        }
        else
        {
            curRec = i;
            isel = 1;
            break;
        }
    }
    ListBox1->EnsureVisible(curRec);
    ListBox1->SetSelection(curRec);
}

void dlgMd01::OnmenEditCatsSelected(wxCommandEvent& event)
{
    dlgNewCat dlg(NULL, wxID_ANY);
    std::string detailtem = ListBox1->GetStringSelection().ToStdString();
    std::string recNo = detailtem.substr(0, detailtem.find(" "));
    zrdb.strIdlk1 = recNo;
    dlg.btnInsert->SetLabel( "Edit");
    zrdb.getCat();
    zrdb.initField(std::string(zrdb.zres[0]["cat"]), dlg.edtCat);
    zrdb.initField(std::string(zrdb.zres[0]["ddes"]), dlg.edtMemo);
    if (dlg.ShowModal() == wxID_OK)
    {
        zrdb.editCat(zrdb.strIdlk1, zrdb.fieldToString(dlg.edtCat), zrdb.fieldToString(dlg.edtMemo));
    }
    zrdb.listCategories(false);
    RefreshCats();

}

void dlgMd01::procLink()
{
    dlgNewLink dlg(NULL, wxID_ANY);
//    dlg.strIdlk1 =  dlg.strIdlk1;
    zrdb.initField(mkVal,dlg.edtPrim);

    if (dlg.ShowModal() == wxID_OK)
    {
        RefreshDetails();
    }
}

void dlgMd01::procPdf()
{
    dlgNewLink dlg(NULL, wxID_ANY);
    zrdb.initField(mkVal,dlg.edtPrim);
    int flags = wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_DEFAULT_STYLE;
    zrdb.initField(gui01.openFileDialog(NULL, "Select A File", "/home/archman/Documents", "", "*.pdf", flags),dlg.edtLink);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
    RefreshDetails();

}

void dlgMd01::procDoc()
{
    dlgNewLink dlg(NULL, wxID_ANY);
    zrdb.initField(mkVal,dlg.edtPrim);
    int flags = wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_DEFAULT_STYLE;
    zrdb.initField(gui01.openFileDialog(NULL, "Select A Document", "/home/archman/Documents", "", "*.odt", flags),dlg.edtLink);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
    RefreshDetails();

}

void dlgMd01::procExe()
{
    dlgNewLink dlg(NULL, wxID_ANY);
    zrdb.initField(mkVal,dlg.edtPrim);
    int flags = wxFD_OPEN | wxFD_FILE_MUST_EXIST | wxFD_DEFAULT_STYLE;
    zrdb.initField(gui01.openFileDialog(NULL, "Select A File", "/home/archman/workspace/cb/cpp", "", "", flags),dlg.edtLink);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
    RefreshDetails();

}

void dlgMd01::OnpumAddDocsSelected(wxCommandEvent& event)
{
    dlgXqt dlg(NULL, wxID_ANY);
    if (dlg.ShowModal() == wxID_OK)
    {
        switch (dlg.isel)
        {
        case 0:
            procLink();
            break;
        case 1:
            procPdf();
            break;
        case 2:
            procDoc();
            break;
        case 3:
            procExe();
            break;
        default:
            //   to be executed if expression doesn't match any constant
            break;
        }

    }

}

void dlgMd01::OnpumSortIDSelected(wxCommandEvent& event)
{
    dRID = true;
    RefreshDetails();
    dRID = false;
}

void dlgMd01::OnpumAscSeqSelected(wxCommandEvent& event)
{
    RefreshDetails();
}

void dlgMd01::OnmenPriCatsSelected(wxCommandEvent& event)
{
    dRID = true;
    RefreshCats();
    dRID = false;

}

void dlgMd01::OnpumAscCatsSelected1(wxCommandEvent& event)
{
    RefreshCats();
}

void dlgMd01::OnpumNewBlogPostSelected(wxCommandEvent& event)
{
    const char * c;
    //"<img src=\"https://archbrooks.us/images/usa_3a.gif\" alt=\"\" />\n\nMr. Arch Brooks, Software Engineer, Brooks Computing Systems, LLC authored this article."
//<a href="http://archman.us" target="_blank" rel="noopener">
//    <img src="http://archman.us/images/usa_3a.gif" alt=" " />
//</a>

    string tbuf;
    tbuf = "<a href=\"https://archman.us\" target=\"_blank\" rel=\"noopener\">";
    tbuf = tbuf + "    <img src=\"https://archman.us/images/usa_3a.gif\" alt=\" \" />";
    tbuf = tbuf + "</a>\n\n";
    //tbuf = "<img src=\"http://archman.us/images/usa_3a.gif\" alt=\"\" />\n\n";
    tbuf = tbuf + "Mr. Arch Brooks, Software Engineer, Brooks Computing Systems, LLC authored this article.";
    if (wxTheClipboard->Open())
    {
        // This data objects are held by the clipboard,
        // so do not delete them in the app.
        c = tbuf.c_str();
        wxTheClipboard->SetData(new wxTextDataObject(c));
        wxTheClipboard->Close();
    }


    cmd = defBro + " " + "http://archman.us/b4/wp-admin/post-new.php & ";
    system(cmd.c_str());


}

void dlgMd01::OnpumRelLinkSelected(wxCommandEvent& event)
{
    std::string detailtem = ListBox2->GetStringSelection().ToStdString();
    std::string fromId = detailtem.substr(0, detailtem.find(" ") - 0);
    zrdb.getLink(std::stoi(fromId));
    dlgSelCat dlg(NULL, wxID_ANY);
    if (dlg.ShowModal() == wxID_OK)
    {
        string selCat = dlg.catltem;
        string toId = selCat.substr(0, selCat.find(" "));
        zrdb.editLink(zrdb.zres[0]["idlk2"].c_str(), toId, zrdb.zres[0]["lnk"].c_str(), zrdb.zres[0]["lkn"].c_str(), zrdb.zres[0]["ddes"].c_str(), zrdb.zres[0]["idlk1"].c_str());
        selCat = selCat;
    }
    detailtem = detailtem;
}

void dlgMd01::Onpum7ZzipSelected(wxCommandEvent& event)
{
    system("7zFM & ");
}

void dlgMd01::OnpumRSLBkSelected(wxCommandEvent& event)
{
    system("/usr/bin/luckybackup-pkexec & ");
}

void dlgMd01::OnpumRSyncSASelected(wxCommandEvent& event)
{
    int retVal = -99;
    string rdir;
    string tdir;
    string fCommand;
    //echo <password> | sudo -S make install && halt
    fCommand = "echo ";
    fCommand = fCommand + "peace" + " |  sudo -S mount /dev/sdb1 /mnt/sdb1";
    retVal = system(fCommand.c_str());
    retVal = retVal;
    retVal = system("ls -alh /mnt/sdb1 > ls.txt");
    rdir = gui01.SelDir("/home/archman/workspace/cb/cpp/grailsGen/");
    tdir = rdir.substr(rdir.find("workspace") -1, rdir.length());
    string ldir_cmd = "ls -alh /mnt/sdb1" + tdir + " > ldir.txt";
    string lpath = tdir.substr(tdir.find_last_of("/'"), tdir.length());
    tdir = rdir.substr(0, rdir.find_last_of("/") + 1);
    string cmd = "echo ";
    cmd = cmd + "peace" + " | sudo -S rsync -rva " + rdir + " /mnt/sdb1" + tdir;
    retVal = system(cmd.c_str());
//     retVal = system("echo peace |  sudo -S mount /dev/sdb1 /mnt/sdb1");
    system(ldir_cmd.c_str());
    rdir = rdir;
    //sudo rsync -rva /home/archman/$1 /mnt/sdb1/$1
    //retvl = system("");
}

void dlgMd01::OnpumBleachBitSelected(wxCommandEvent& event)
{
    string cmd = "echo ";
    cmd = cmd + "peace" +" | sudo -S bleachbit &";
    system(cmd.c_str());
}

void dlgMd01::OnpumwxGladeSelected(wxCommandEvent& event)
{
    system("wxglade & ");
}

void dlgMd01::OnpumFormBldSelected(wxCommandEvent& event)
{
    system("wxfb & ");
}

void dlgMd01::OnpumMVSSelected(wxCommandEvent& event)
{
    string cmd = "";
//   cmd = cmd + "cd \"/home/archman/apps/tk4-_v1.00_current \" " +  " && " + " . /mvs ";
    cmd = cmd + " source \"/home/archman/apps/tk4-_v1.00_current/mvs \"";
    system(cmd.c_str());
}

void dlgMd01::OnpumSysMonSelected(wxCommandEvent& event)
{
    system("system-monitoring-center  & ");
}

void dlgMd01::OnpumQuerryBuiderSelected(wxCommandEvent& event)
{
    system("sqlworkbench &");
}

void dlgMd01::OnpumMYSqlBuilderSelected(wxCommandEvent& event)
{
    system("mysql-workbench & ");
}

void dlgMd01::OnpumCodeSelected(wxCommandEvent& event)

{
    wxDirDialog dlg = new wxDirDialog();
    if (dlg.ShowModal() == wxID_OK)
    {
        wxString selected_dir = dlg.GetPath();
//           dir_label.SetLabel(f"Selected Directory: {selected_dir}")
    }

    std::string cmd = "";
    cmd = "code ";
    cmd = cmd + dlg.GetPath().ToStdString() + "  ";

    dlg.Destroy();
    system(cmd.c_str());
}

void dlgMd01::OnpumSysMonSelected1(wxCommandEvent& event)
{
    system("system-monitoring-center & ");
}

void dlgMd01::OnpumSysMon2Selected(wxCommandEvent& event)
{
    system("system-monitoring-center & ");
}

void dlgMd01::OnpumGitDTSelected(wxCommandEvent& event)
{
    system("/usr/bin/github-desktop & ");
}
