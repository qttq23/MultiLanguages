#include <wx/wx.h>

// http://zetcode.com/gui/wxwidgets/firstprograms/
class Simple : public wxFrame
{
public:

	wxStaticText* lbel;
	wxTextCtrl* tbox;

	Simple(const wxString& title)
	: wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
	{
		SetIcon(wxIcon(wxT("myicon.ico"), wxBITMAP_TYPE_ICO)
			);
		Centre();


		// button
		wxPanel* panel = new wxPanel(this, wxID_ANY);
		wxButton* btn = new wxButton(
			panel
			, wxID_EXIT
			, wxT("double text")
			);
		Connect(wxID_EXIT
			, wxEVT_COMMAND_BUTTON_CLICKED
			, wxCommandEventHandler(OnDouble)
			);

		// label
		lbel = new wxStaticText(
			panel
			, -10
			, wxT("This is text")
			, wxPoint(100,40)
			);

		// textbox
		tbox = new wxTextCtrl(
			panel
			, -1
			, wxT("")
			, wxPoint(95, 105)
			);


	}

	void OnQuit(wxCommandEvent& e){
		Close(true);
	}

	void OnDouble(wxCommandEvent& e){


		// wxString text = lbel->GetLabelText();
		wxString text = tbox->GetLineText(0);
		lbel->SetLabel(wxString::Format(wxT("%s %s"), text, text));

		// dialog
		wxMessageDialog *dial = new wxMessageDialog(
			NULL
			, text
			, wxT("Info")
			, wxOK
			);
		dial->ShowModal();
	}

};

class MyApp : public wxApp
{
public:
	bool OnInit()
	{
		Simple *simple = new Simple(wxT("Simple"));
		simple->Show(true);
		return true;
	}
};

wxIMPLEMENT_APP(MyApp);


