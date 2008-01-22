#ifndef __cscopetab__
#define __cscopetab__

/**
@file
Subclass of CscopeTabBase, which is generated by wxFormBuilder.
*/

#include "cscopetabbase.h"
#include "cscopeentrydata.h"
#include "cscopedbbuilderthread.h"

class IManager;
class CscopeTabClientData : public wxTreeItemData 
{
	CscopeEntryData _entry;
	
public:
	CscopeTabClientData(const CscopeEntryData& entry) : _entry(entry) {}
	~CscopeTabClientData(){}
		
	//Setters
	void SetEntry(const CscopeEntryData& _entry) {this->_entry = _entry;}
	//Getters
	const CscopeEntryData& GetEntry() const {return _entry;}
};


/** Implementing CscopeTabBase */
class CscopeTab : public CscopeTabBase
{
	CscopeResultTable *m_table;
	IManager *m_mgr;
	
protected:
	// Handlers for CscopeTabBase events.
	void OnItemActivated( wxTreeEvent& event );
	void OnLeftDClick(wxMouseEvent &event);
	void DoItemActivated( wxTreeItemId &item, wxEvent &event );
	void FreeTable();
public:
	/** Constructor */
	CscopeTab( wxWindow* parent, IManager *mgr );
	void BuildTable(CscopeResultTable *table);
	
};

#endif // __cscopetab__
