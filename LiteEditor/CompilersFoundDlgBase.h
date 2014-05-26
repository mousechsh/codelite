//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: CompilersFoundDlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef COMPILERSFOUNDDLG_BASE_CLASSES_H
#define COMPILERSFOUNDDLG_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/bannerwindow.h>
#include <wx/stattext.h>
#include <wx/dataview.h>
#include "compilersfoundmodel.h"
#include <wx/button.h>

class CompilersFoundDlgBase : public wxDialog
{
protected:
    wxBannerWindow* m_banner10;
    wxStaticText* m_staticText29;
    wxDataViewCtrl* m_dataview;
    wxObjectDataPtr<CompilersFoundModel> m_dataviewModel;

    wxStdDialogButtonSizer* m_stdBtnSizer4;
    wxButton* m_buttonCancel;
    wxButton* m_buttonOK;

protected:
    virtual void OnItemActivated(wxDataViewEvent& event) { event.Skip(); }

public:
    CompilersFoundDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Find Installed Compilers"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~CompilersFoundDlgBase();
};


class CompilersModifiedDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText27;
    wxDataViewListCtrl* m_dvListCtrl;
    wxStdDialogButtonSizer* m_stdBtnSizer18;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    CompilersModifiedDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Compilers Modified"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~CompilersModifiedDlgBase();
};

#endif