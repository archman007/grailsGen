/***************************************************************
 * Name:      grailsGenMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Mr. Arch Brooks (arch@archbrooks.com)
 * Created:   2023-02-27
 * Copyright: Mr. Arch Brooks (https://archbrooks.us/b4)
 * License:
 **************************************************************/

#include "grailsGenMain.h"
#include <wx/wx.h>
#include <wx/msgdlg.h>
#include <wx/textfile.h>
#include "zDB01.h"
#include "bcsGui.h"
#include "dlgDe01.h"
#include "curlStuff.h"
#include "dlgPopTree.h"
#include "dlgMd01.h"
#include "dlgNewCat.h"
#include "dlgNewLink.h"
#include "dlgXqt.h"
#include "dlgSelCat.h"

using namespace std;

zDB01 db;
bcsGui gui;
curlStuff cus;


//(*InternalHeaders(grailsGenFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(grailsGenFrame)
const long grailsGenFrame::ID_MENUITEM10 = wxNewId();
const long grailsGenFrame::ID_MENUITEM8 = wxNewId();
const long grailsGenFrame::ID_MENUITEM9 = wxNewId();
const long grailsGenFrame::ID_MENUITEM1 = wxNewId();
const long grailsGenFrame::ID_MENUITEM6 = wxNewId();
const long grailsGenFrame::ID_MENUITEM7 = wxNewId();
const long grailsGenFrame::ID_MENUITEM4 = wxNewId();
const long grailsGenFrame::ID_MENUITEM3 = wxNewId();
const long grailsGenFrame::ID_MENUITEM5 = wxNewId();
const long grailsGenFrame::ID_MENUITEM2 = wxNewId();
const long grailsGenFrame::ID_MENUITEM11 = wxNewId();
const long grailsGenFrame::ID_MENUITEM12 = wxNewId();
const long grailsGenFrame::idMenuQuit = wxNewId();
const long grailsGenFrame::idMenuAbout = wxNewId();
const long grailsGenFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(grailsGenFrame,wxFrame)
    //(*EventTable(grailsGenFrame)
    //*)
END_EVENT_TABLE()

grailsGenFrame::grailsGenFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(grailsGenFrame)
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    menTestDlg = new wxMenuItem(Menu1, ID_MENUITEM10, _("Test New Component"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(menTestDlg);
    menPopTree = new wxMenuItem(Menu1, ID_MENUITEM8, _("Populate Tree"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(menPopTree);
    menMD01 = new wxMenuItem(Menu1, ID_MENUITEM9, _("MasterDetail"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(menMD01);
    menOpt1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Oprion 1"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(menOpt1);
    menGrailsApp = new wxMenuItem(Menu1, ID_MENUITEM6, _("Create New Grails App"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(menGrailsApp);
    menResetGrails = new wxMenuItem(Menu1, ID_MENUITEM7, _("Reset Grails"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(menResetGrails);
    MenuItem3 = new wxMenu();
    menLinksApp = new wxMenuItem(MenuItem3, ID_MENUITEM4, _("Links App"), wxEmptyString, wxITEM_NORMAL);
    MenuItem3->Append(menLinksApp);
    menNewCat = new wxMenuItem(MenuItem3, ID_MENUITEM3, _("New Category"), wxEmptyString, wxITEM_NORMAL);
    MenuItem3->Append(menNewCat);
    menNewLink = new wxMenuItem(MenuItem3, ID_MENUITEM5, _("New Links"), wxEmptyString, wxITEM_NORMAL);
    MenuItem3->Append(menNewLink);
    Menu1->Append(ID_MENUITEM2, _("Links"), MenuItem3, wxEmptyString);
    menRSync = new wxMenuItem(Menu1, ID_MENUITEM11, _("R Sync"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(menRSync);
    menHerc = new wxMenuItem(Menu1, ID_MENUITEM12, _("Hercules"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(menHerc);
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_MENUITEM10,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenTestDlgSelected);
    Connect(ID_MENUITEM8,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenPopTreeSelected);
    Connect(ID_MENUITEM9,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenMD01Selected);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenOpt1Selected);
    Connect(ID_MENUITEM6,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenGrailsAppSelected);
    Connect(ID_MENUITEM7,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenResetGrailsSelected);
    Connect(ID_MENUITEM4,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenLinksAppSelected);
    Connect(ID_MENUITEM3,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenNewCatSelected);
    Connect(ID_MENUITEM5,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenNewLinkSelected);
    Connect(ID_MENUITEM11,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenRSyncSelected);
    Connect(ID_MENUITEM12,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnmenHercSelected);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&grailsGenFrame::OnAbout);
    //*)
//    checkForProcess();
//    Close();

        wxCommandEvent event;
        grailsGenFrame::OnmenMD01Selected( event);
        Close();
}

void grailsGenFrame::checkForProcess()
{
    if (gui.yornQues("Would you like to continue Grails project creation", "Continue Process?") == wxYES)
    {
        startNewProject();
    }

}

grailsGenFrame::~grailsGenFrame()
{
    //(*Destroy(grailsGenFrame)
    //*)
}

void grailsGenFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void grailsGenFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void grailsGenFrame::loadBuild(wxString inpFile)
{
    str.Clear();
    inf.Open(inpFile);
    for ( wxString fbuf = inf.GetFirstLine(); !inf.Eof(); fbuf = inf.GetNextLine() )
    {
        str.Add(fbuf);
    }
    inf.Close();

}

void grailsGenFrame::saveBuild(wxString outFile)
{
    out.Open(outFile);
    out.Clear();
    for (size_t i=0; i < str.Count(); i++)
    {
        out.AddLine(str[i]);
    }
    out.Write();
    out.Close();

}

void grailsGenFrame::updateGradleBuild()
{
    loadBuild(defPath + "/" + projName + "/build.gradle");
    insertGradleBuild();
    saveBuild(defPath + "/" + projName + "/build.gradle");

}

void grailsGenFrame::insertGradleBuild()
{
//   str.Insert("    implementation 'org.grails.plugins:spring-security-core:5.1.0'", 62, 1);
    str.Insert("    runtimeOnly 'org.mariadb.jdbc:mariadb-java-client:3.1.3'", 66, 1);

}

void grailsGenFrame::updateAppYaml()
{
    loadBuild(defPath + "/" + projName + "/grails-app/conf/application.yml");
    mariaDBInsert();
    saveBuild(defPath + "/" + projName + "/grails-app/conf/application.yml");

}

void grailsGenFrame::mariaDBInsert()
{
    str.RemoveAt(105, 6);
    str.Insert("dataSource:", 105, 1);
    str.Insert("    driverClassName: org.mariadb.jdbc.Driver", 105+1, 1);
    str.Insert("    dialect: org.hibernate.dialect.MariaDBDialect", 105+2, 1);
    str.Insert("    username: bcs", 105+3, 1);
    str.Insert("    password: Pece007!amb", 105+4, 1);
    str.Insert("    url: jdbc:mariadb://localhost:3306/" + db.curDB, 105+5, 1);
//    str.Insert("            url: jdbc:mariadb://localhost:3306/your_database_name", 117, 1);
//    str.Insert("            dbCreate: update", 116, 1);
    str[115] = "            dbCreate: update";
    str[116] = "            url: jdbc:mariadb://localhost:3306/" + db.curDB;

}

void grailsGenFrame::initProject()
{
    defPath = gui.SelDir("/home/archman/workspace/cb/cpp/");
    db.listDatabases();
    db.selDB();

}

void grailsGenFrame::startNewProject()
{
    projName = gui.GetText(false, "", "Enter Project Name", "Select Project Name");
    defPath = gui.SelDir("/home/archman/workspace/grails/");
    targetDir = defPath + "/" + projName;
    if (wxDirExists(targetDir))
    {
        string messageText = "This Project ";
        messageText = messageText + targetDir + " Already Exists!\n                                                  Processing is aborted.";
        wxMessageBox(messageText, "Project Cannot Be Created", wxOK | wxICON_INFORMATION | wxICON_STOP);
    }
    else
    {
        xqtString = "cd " + defPath + "&& /home/archman/.sdkman/candidates/grails/5.3.2/bin/grails create-app " + projName + " ";
        system(xqtString.c_str());
        updateGradleBuild();
        xqtString = "cd " + defPath + "/" + projName + "&& /home/archman/.sdkman/candidates/grails/5.3.2/bin/grails compile ";
        system(xqtString.c_str());
        db.listDatabases();
        db.selDB();
        updateAppYaml();
        string className = gui.GetText(false, "", "Enter Class Name", "Select Class Name");
        xqtString = "cd " + defPath + "/" + projName + "&& /home/archman/.sdkman/candidates/grails/5.3.2/bin/grails create-domain-class " + className + " ";
        system(xqtString.c_str());
    }
}

void grailsGenFrame::myLinks()
{
    db.listCategories(false);
    db.nb01();

}

void grailsGenFrame::OnmenOpt1Selected(wxCommandEvent& event)
{
//    updateGradleBuild();
//    updateAppYaml();
//    initProject();
//    checkForProcess();
//    startNewProject();
//    db.de01();
//    db.nb01();
    myLinks();

// string buf = cus.getZTitle("https://www.youtube.com/archman007");
// buf = buf;
    /**   string buf = "";
       buf = cus.clipUrl();
       buf = buf;
       */
}

void grailsGenFrame::OnmenLinksAppSelected(wxCommandEvent& event)
{
    myLinks();
}

void grailsGenFrame::OnmenGrailsAppSelected(wxCommandEvent& event)
{
    startNewProject();
}

void grailsGenFrame::OnmenResetGrailsSelected(wxCommandEvent& event)
{
    ///home/archman/workspace/home/archman/path/to/file.txt";
    wxString filename = "/home/archman/btear.txt";
    if (!wxFileExists(filename))
    {
        system("touch " + filename);
    }
    else
    {
//        wxPrintf("%s does not exist!\n", filename);
    }
    out.Open(filename);
    if (!out.Exists())
    {
        out.Create();
    }
    out.Create();
    out.Clear();

    string fbuf = "/home/archman/workspace/grails/max/grails-app/views/lk1";
    int ista = fbuf.find_last_of("/") + 1;
    string fam = fbuf.substr(ista, fbuf.length());
    string subName = fbuf;
    string detStr = "/home/archman/workspace/grails/";
    subName.erase(0, detStr.length());
    subName.erase(subName.find("/"), subName.length());
    string cmd = "rm -r " + detStr + subName + "/grails-app/views/" + fam;
    out.AddLine(cmd);
    system(cmd.c_str());
    cmd = "rm -r " + detStr + subName + "/grails-app/controllers/" + subName;
    out.AddLine(cmd);
    system(cmd.c_str());
    cmd = "rm -r " + detStr + subName + "/grails-app/services/" + subName;
    out.AddLine(cmd);
    system(cmd.c_str());
    cmd = "rm -r " + detStr + subName + "/src/test/groovy/" + subName;
    out.AddLine(cmd);
    system(cmd.c_str());
    cmd = "rm -r " + detStr + subName + "/src/integration-test/groovy/" + subName;
    out.AddLine(cmd);
    system(cmd.c_str());
    out.Write();
    out.Close();

    fbuf = fbuf;
}

void grailsGenFrame::OnmenPopTreeSelected(wxCommandEvent& event)
{
    dlgPopTree dlg(NULL, wxID_ANY);
    dlg.TreeCtrl1;
    if (dlg.ShowModal() == wxID_OK)
    {

    }
}

void grailsGenFrame::OnmenMD01Selected(wxCommandEvent& event)
{
    dlgMd01 dlg(NULL, wxID_ANY);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
}

void grailsGenFrame::OnmenNewCatSelected(wxCommandEvent& event)
{
    dlgNewCat dlg(NULL, wxID_ANY);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
}

void grailsGenFrame::OnmenNewLinkSelected(wxCommandEvent& event)
{
    dlgNewLink dlg(NULL, wxID_ANY);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
}


void grailsGenFrame::OnmenTestDlgSelected(wxCommandEvent& event)
{
    /*
    dlgXqt dlg(NULL, wxID_ANY);
    if (dlg.ShowModal() == wxID_OK)
    {

    }
    */
    dlgSelCat dlg(NULL, wxID_ANY);
    if (dlg.ShowModal() == wxID_OK)
    {
        string selCat = dlg.catltem;
        selCat = selCat;
    }
}

void grailsGenFrame::OnmenRSyncSelected(wxCommandEvent& event)
{
    int retVal = -99;
    string rdir;
    string tdir;
    //echo <password> | sudo -S make install && halt
    retVal = system("echo peace |  sudo -S mount /dev/sdb1 /mnt/sdb1");
    retVal = retVal;
    retVal = system("ls -alh /mnt/sdb1 > ls.txt");
    rdir = gui.SelDir("/home/archman/workspace/cb/cpp/grailsGen/");
    tdir = rdir.substr(rdir.find("workspace") -1, rdir.length());
    string ldir_cmd = "ls -alh /mnt/sdb1" + tdir + " > ldir.txt";
    string lpath = tdir.substr(tdir.find_last_of("/'"), tdir.length());
    tdir = rdir.substr(0, rdir.find_last_of("/") +1 );
    string cmd = "echo peace | sudo -S rsync -rva " + rdir + " /mnt/sdb1" + tdir;
    retVal = system(cmd.c_str());
//     retVal = system("echo peace |  sudo -S mount /dev/sdb1 /mnt/sdb1");
    system(ldir_cmd.c_str());
    rdir = rdir;
    //sudo rsync -rva /home/archman/$1 /mnt/sdb1/$1
    //retvl = system("");
}

void grailsGenFrame::OnmenHercSelected(wxCommandEvent& event)
{
    system("/usr/bin/hercules -f /home/archman/herc/hercules.cnf  ");
}
