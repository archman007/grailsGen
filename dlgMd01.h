#ifndef DLGMD01_H
#define DLGMD01_H

//(*Headers(dlgMd01)
#include <wx/dialog.h>
#include <wx/listbox.h>
#include <wx/menu.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class dlgMd01: public wxDialog
{
public:

    dlgMd01(wxWindow* parent,wxWindowID id=wxID_ANY);
    virtual ~dlgMd01();
    void OnpanCatsRightUpCats(wxMouseEvent& event);
    void OnLinksRightUp(wxMouseEvent& event);
    std::string mkVal;
    std::string cmd;
    void RefreshCats();
    void RefreshDetails();
    void procLink();
    void procPdf();
    void procDoc();
    void procExe();
    bool dRID = false;
    std::string defBro = "/usr/bin/thorium-browser";

    //(*Declarations(dlgMd01)
    wxListBox* ListBox1;
    wxListBox* ListBox2;
    wxMenu pumDetails;
    wxMenu pumMaster;
    wxMenu* MenuItem10;
    wxMenu* MenuItem11;
    wxMenu* MenuItem12;
    wxMenu* MenuItem13;
    wxMenu* MenuItem14;
    wxMenu* MenuItem15;
    wxMenu* MenuItem1;
    wxMenu* MenuItem2;
    wxMenu* MenuItem3;
    wxMenu* MenuItem5;
    wxMenu* MenuItem6;
    wxMenu* MenuItem7;
    wxMenu* MenuItem8;
    wxMenu* MenuItem9;
    wxMenuItem* MenuItem16;
    wxMenuItem* MenuItem17;
    wxMenuItem* MenuItem18;
    wxMenuItem* MenuItem19;
    wxMenuItem* MenuItem20;
    wxMenuItem* MenuItem4;
    wxMenuItem* menDetails;
    wxMenuItem* menEditCats;
    wxMenuItem* menMasters;
    wxMenuItem* menPriCats;
    wxMenuItem* newBlgPost;
    wxMenuItem* pum7Zzip;
    wxMenuItem* pumAddDocs;
    wxMenuItem* pumAddPDF;
    wxMenuItem* pumAddWord;
    wxMenuItem* pumAddXqt;
    wxMenuItem* pumAscCats;
    wxMenuItem* pumAscSeq;
    wxMenuItem* pumBleachBit;
    wxMenuItem* pumCode;
    wxMenuItem* pumDDink;
    wxMenuItem* pumEditDetail;
    wxMenuItem* pumEmail01;
    wxMenuItem* pumGitDT;
    wxMenuItem* pumLACob;
    wxMenuItem* pumMYSqlBuilder;
    wxMenuItem* pumNewBlogArt;
    wxMenuItem* pumPikaBK;
    wxMenuItem* pumQuerryBuider;
    wxMenuItem* pumRSA;
    wxMenuItem* pumRSLBk;
    wxMenuItem* pumRelLink;
    wxMenuItem* pumSmartyApp;
    wxMenuItem* pumSortID;
    wxMenuItem* pumSysMon2;
    wxMenuItem* pumSysMon;
    wxMenuItem* pumWiki;
    wxMenuItem* pumwxGlade;
    wxStaticText* StaticText1;
    wxStaticText* StaticText2;
    wxStaticText* lblStatus;
    //*)

protected:

    //(*Identifiers(dlgMd01)
    static const long ID_STATICTEXT1;
    static const long ID_LISTBOX1;
    static const long ID_STATICTEXT2;
    static const long ID_LISTBOX2;
    static const long ID_STATICTEXT3;
    static const long ID_MENUITEM1;
    static const long ID_MENUITEM11;
    static const long ID_MENUITEM17;
    static const long ID_MENUITEM10;
    static const long ID_MENUITEM16;
    static const long ID_MENUITEM9;
    static const long ID_MENUITEM23;
    static const long pumNewBlog;
    static const long ID_MENUITEM48;
    static const long ID_MENUITEM49;
    static const long ID_MENUITEM50;
    static const long ID_MENUITEM51;
    static const long ID_MENUITEM42;
    static const long ID_MENUITEM39;
    static const long ID_MENUITEM43;
    static const long ID_MENUITEM37;
    static const long ID_MENUITEM44;
    static const long ID_MENUITEM38;
    static const long ID_MENUITEM45;
    static const long ID_MENUITEM40;
    static const long ID_MENUITEM46;
    static const long ID_MENUITEM41;
    static const long ID_MENUITEM36;
    static const long ID_MENUITEM31;
    static const long ID_MENUITEM34;
    static const long ID_MENUITEM33;
    static const long ID_MENUITEM29;
    static const long ID_MENUITEM30;
    static const long ID_MENUITEM28;
    static const long ID_MENUITEM35;
    static const long ID_MENUITEM47;
    static const long ID_MENUITEM20;
    static const long ID_MENUITEM21;
    static const long ID_MENUITEM26;
    static const long ID_MENUITEM25;
    static const long ID_MENUITEM27;
    static const long ID_MENUITEM32;
    static const long ID_MENUITEM22;
    static const long ID_MENUITEM12;
    static const long ID_MENUITEM3;
    static const long ID_MENUITEM8;
    static const long ID_MENUITEM19;
    static const long ID_MENUITEM14;
    static const long ID_MENUITEM15;
    static const long ID_MENUITEM13;
    static const long ID_MENUITEM2;
    static const long ID_MENUITEM4;
    static const long ID_MENUITEM5;
    static const long ID_MENUITEM6;
    static const long ID_MENUITEM7;
    static const long ID_MENUITEM24;
    static const long ID_MENUITEM18;
    //*)

private:

    //(*Handlers(dlgMd01)
    void OnListBox1DClick(wxCommandEvent& event);
    void OnListBox2DClick(wxCommandEvent& event);
    void OnMenuItem1Selected(wxCommandEvent& event);
    void OnMenuItem2Selected(wxCommandEvent& event);
    void OnmenDetailsSelected(wxCommandEvent& event);
    void OnmenMastersSelected(wxCommandEvent& event);
    void OnpumDDinkSelected(wxCommandEvent& event);
    void OnpumAddPDFSelected(wxCommandEvent& event);
    void OnpumAddXqtSelected(wxCommandEvent& event);
    void OnpumAddWordSelected(wxCommandEvent& event);
    void OnpumEditDetailSelected(wxCommandEvent& event);
    void OnpumAscCatsSelected(wxCommandEvent& event);
    void OnmenEditCatsSelected(wxCommandEvent& event);
    void OnpumAddDocsSelected(wxCommandEvent& event);
    void OnpumSortIDSelected(wxCommandEvent& event);
    void OnpumAscSeqSelected(wxCommandEvent& event);
    void OnmenPriCatsSelected(wxCommandEvent& event);
    void OnpumAscCatsSelected1(wxCommandEvent& event);
    void OnpumNewBlogPostSelected(wxCommandEvent& event);
    void OnpumRelLinkSelected(wxCommandEvent& event);
    void Onpum7ZzipSelected(wxCommandEvent& event);
    void OnpumRSLBkSelected(wxCommandEvent& event);
    void OnpumRSyncSASelected(wxCommandEvent& event);
    void OnpumBleachBitSelected(wxCommandEvent& event);
    void OnpumwxGladeSelected(wxCommandEvent& event);
    void OnpumFormBldSelected(wxCommandEvent& event);
    void OnpumMVSSelected(wxCommandEvent& event);
    void OnpumSysMonSelected(wxCommandEvent& event);
    void OnpumQuerryBuiderSelected(wxCommandEvent& event);
    void OnpumMYSqlBuilderSelected(wxCommandEvent& event);
    void OnpumCodeSelected(wxCommandEvent& event);
    void OnpumSysMonSelected1(wxCommandEvent& event);
    void OnpumSysMon2Selected(wxCommandEvent& event);
    void OnpumGitDTSelected(wxCommandEvent& event);
    void OnpumPikaBKSelected(wxCommandEvent& event);
    void OnpumWikiSelected(wxCommandEvent& event);
    void OnpumDBeaverSelected(wxCommandEvent& event);
    void OnpumSmartyAppSelected(wxCommandEvent& event);
    void OnpumSpringInitSelected(wxCommandEvent& event);
    void OnpumEmail01Selected(wxCommandEvent& event);
    void OnpumLACobSelected(wxCommandEvent& event);
    //*)

    DECLARE_EVENT_TABLE()
};

#endif
