/***************************************************************
 * Name:      grailsGenMain.h
 * Purpose:   Defines Application Frame
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   2023-02-27
 * Copyright: Mr. Arch Brooks (https://archbrooks.us/b4)
 * License:
 **************************************************************/

#ifndef GRAILSGENMAIN_H
#define GRAILSGENMAIN_H

//(*Headers(grailsGenFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

#include <wx/textfile.h>

using namespace std;

class grailsGenFrame: public wxFrame
{
public:

    grailsGenFrame(wxWindow* parent,wxWindowID id = -1);
    virtual ~grailsGenFrame();
    wxArrayString str;
    wxTextFile inf, out;
    void loadBuild(wxString inpFile);
    void saveBuild(wxString outFile);
    void updateGradleBuild();
    void insertGradleBuild();
    void updateAppYaml();
    void mariaDBInsert();
    string defPath;
    void initProject();
    void startNewProject();
    string projName;
    string targetDir;
    string xqtString;
    void checkForProcess();
    void myLinks();

private:

    //(*Handlers(grailsGenFrame)
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    void OnmenOpt1Selected(wxCommandEvent& event);
    void OnmenLinksAppSelected(wxCommandEvent& event);
    void OnmenGrailsAppSelected(wxCommandEvent& event);
    void OnmenResetGrailsSelected(wxCommandEvent& event);
    void OnmenPopTreeSelected(wxCommandEvent& event);
    void OnmenMD01Selected(wxCommandEvent& event);
    void OnmenNewCatSelected(wxCommandEvent& event);
    void OnmenNewLinkSelected(wxCommandEvent& event);
    void OnmenTestDlgSelected(wxCommandEvent& event);
    void OnmenRSyncSelected(wxCommandEvent& event);
    void OnmenHercSelected(wxCommandEvent& event);
    //*)

    //(*Identifiers(grailsGenFrame)
    static const long ID_MENUITEM10;
    static const long ID_MENUITEM8;
    static const long ID_MENUITEM9;
    static const long ID_MENUITEM1;
    static const long ID_MENUITEM6;
    static const long ID_MENUITEM7;
    static const long ID_MENUITEM4;
    static const long ID_MENUITEM3;
    static const long ID_MENUITEM5;
    static const long ID_MENUITEM2;
    static const long ID_MENUITEM11;
    static const long ID_MENUITEM12;
    static const long idMenuQuit;
    static const long idMenuAbout;
    static const long ID_STATUSBAR1;
    //*)

    //(*Declarations(grailsGenFrame)
    wxMenu* MenuItem3;
    wxMenuItem* menGrailsApp;
    wxMenuItem* menHerc;
    wxMenuItem* menLinksApp;
    wxMenuItem* menMD01;
    wxMenuItem* menNewCat;
    wxMenuItem* menNewLink;
    wxMenuItem* menOpt1;
    wxMenuItem* menPopTree;
    wxMenuItem* menRSync;
    wxMenuItem* menResetGrails;
    wxMenuItem* menTestDlg;
    wxStatusBar* StatusBar1;
    //*)

    DECLARE_EVENT_TABLE()
};

#endif // GRAILSGENMAIN_H
