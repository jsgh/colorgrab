//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"


// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;


MainFrameBaseClass::MainFrameBaseClass(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    // Set icon(s) to the application/dialog
    wxIconBundle app_icons;
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("16x16"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("32x32"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("64x64"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("128x128"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("256x256"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon( icn );
    }
    SetIcons( app_icons );

    
    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizer1);
    
    m_mainPanel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), wxTAB_TRAVERSAL);
    
    boxSizer1->Add(m_mainPanel, 1, wxEXPAND, 5);
    
    wxFlexGridSizer* flexGridSizer68 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer68->SetFlexibleDirection( wxBOTH );
    flexGridSizer68->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    m_mainPanel->SetSizer(flexGridSizer68);
    
    wxFlexGridSizer* flexGridSizer33 = new wxFlexGridSizer(0, 2, 0, 0);
    flexGridSizer33->SetFlexibleDirection( wxBOTH );
    flexGridSizer33->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    flexGridSizer68->Add(flexGridSizer33, 1, wxLEFT|wxTOP|wxEXPAND, 5);
    
    m_firstLabel = new wxStaticText(m_mainPanel, wxID_ANY, _("R:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer33->Add(m_firstLabel, 0, wxRIGHT|wxTOP, 5);
    
    m_firstCtrl = new wxSpinCtrl(m_mainPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize(50,20), wxSP_ARROW_KEYS);
    m_firstCtrl->SetRange(0, 100);
    m_firstCtrl->SetValue(0);
    
    flexGridSizer33->Add(m_firstCtrl, 0, wxALL, 2);
    
    m_secondLabel = new wxStaticText(m_mainPanel, wxID_ANY, _("G:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer33->Add(m_secondLabel, 0, wxRIGHT|wxTOP, 5);
    
    m_secondCtrl = new wxSpinCtrl(m_mainPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize(50,20), wxSP_ARROW_KEYS);
    m_secondCtrl->SetRange(0, 100);
    m_secondCtrl->SetValue(0);
    
    flexGridSizer33->Add(m_secondCtrl, 0, wxALL, 2);
    
    m_thirdLabel = new wxStaticText(m_mainPanel, wxID_ANY, _("B:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer33->Add(m_thirdLabel, 0, wxRIGHT|wxTOP, 5);
    
    m_thirdCtrl = new wxSpinCtrl(m_mainPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize(50,20), wxSP_ARROW_KEYS);
    m_thirdCtrl->SetRange(0, 100);
    m_thirdCtrl->SetValue(0);
    
    flexGridSizer33->Add(m_thirdCtrl, 0, wxALL, 2);
    
    m_fourthLabel = new wxStaticText(m_mainPanel, wxID_ANY, _("K:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer33->Add(m_fourthLabel, 0, wxRIGHT|wxTOP, 5);
    
    m_fourthCtrl = new wxSpinCtrl(m_mainPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize(50,20), wxSP_ARROW_KEYS);
    m_fourthCtrl->SetRange(0, 100);
    m_fourthCtrl->SetValue(0);
    
    flexGridSizer33->Add(m_fourthCtrl, 0, wxALL, 2);
    
    wxBoxSizer* boxSizer51 = new wxBoxSizer(wxVERTICAL);
    
    flexGridSizer68->Add(boxSizer51, 1, wxLEFT|wxRIGHT|wxTOP|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer155 = new wxBoxSizer(wxHORIZONTAL);
    
    boxSizer51->Add(boxSizer155, 1, wxTOP|wxBOTTOM|wxEXPAND, 1);
    
    m_colorButton = new wxPanel(m_mainPanel, wxID_ANY, wxDefaultPosition, wxSize(70,70), wxBORDER_THEME);
    m_colorButton->SetBackgroundColour(wxColour(wxT("rgb(0,0,0)")));
    
    boxSizer155->Add(m_colorButton, 0, wxRIGHT|wxALIGN_LEFT, 1);
    
    m_colorStack = new wxPanel(m_mainPanel, wxID_ANY, wxDefaultPosition, wxSize(52,70), wxTAB_TRAVERSAL);
    
    boxSizer155->Add(m_colorStack, 0, wxLEFT, 5);
    
    wxFlexGridSizer* flexGridSizer159 = new wxFlexGridSizer(0, 2, 1, 2);
    flexGridSizer159->SetFlexibleDirection( wxBOTH );
    flexGridSizer159->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    m_colorStack->SetSizer(flexGridSizer159);
    
    m_formatText = new wxTextCtrl(m_mainPanel, wxID_ANY, wxT("#000000"), wxDefaultPosition, wxSize(128,20), wxTE_PROCESS_ENTER|wxTE_CENTRE);
    #if wxVERSION_NUMBER >= 3000
    m_formatText->SetHint(wxT(""));
    #endif
    
    boxSizer51->Add(m_formatText, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL, 2);
    
    wxBoxSizer* boxSizer57 = new wxBoxSizer(wxVERTICAL);
    
    flexGridSizer68->Add(boxSizer57, 1, wxLEFT|wxRIGHT|wxTOP|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_pickerButton = new wxButton(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(50,50), 0);
    #if wxVERSION_NUMBER >= 2904
    m_pickerButton->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("Cross")), wxLEFT);
    m_pickerButton->SetBitmapMargins(2,2);
    #endif
    m_pickerButton->SetToolTip(_("Pick color."));
    
    boxSizer57->Add(m_pickerButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 0);
    
    wxGridSizer* gridSizer153 = new wxGridSizer(0, 2, 0, 0);
    
    boxSizer57->Add(gridSizer153, 1, wxTOP|wxEXPAND, 27);
    
    m_button1281 = new wxButton(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(24,24), 0);
    #if wxVERSION_NUMBER >= 2904
    m_button1281->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("add")), wxLEFT);
    m_button1281->SetBitmapMargins(2,2);
    #endif
    m_button1281->SetToolTip(_("Zoom in"));
    
    gridSizer153->Add(m_button1281, 0, wxRIGHT|wxTOP|wxBOTTOM, 1);
    
    m_button128 = new wxButton(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(24,24), 0);
    #if wxVERSION_NUMBER >= 2904
    m_button128->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("remove")), wxLEFT);
    m_button128->SetBitmapMargins(2,2);
    #endif
    m_button128->SetToolTip(_("Zoom out"));
    
    gridSizer153->Add(m_button128, 0, wxLEFT|wxTOP|wxBOTTOM, 1);
    
    m_button12845 = new wxButton(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(24,24), 0);
    #if wxVERSION_NUMBER >= 2904
    m_button12845->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("refresh")), wxLEFT);
    m_button12845->SetBitmapMargins(2,2);
    #endif
    m_button12845->SetToolTip(_("Refresh image"));
    
    gridSizer153->Add(m_button12845, 0, wxRIGHT|wxTOP, 1);
    
    m_timerButton = new wxButton(m_mainPanel, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(24,24), 0);
    #if wxVERSION_NUMBER >= 2904
    m_timerButton->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("timer")), wxLEFT);
    m_timerButton->SetBitmapMargins(2,2);
    #endif
    m_timerButton->SetToolTip(_("Refresh image in..."));
    
    gridSizer153->Add(m_timerButton, 0, wxLEFT|wxTOP, 1);
    
    m_zoomPanel = new ZoomPanel(m_mainPanel, wxID_ANY, wxDefaultPosition, wxSize(128,128), wxBORDER_THEME);
    
    flexGridSizer68->Add(m_zoomPanel, 0, wxALL, 5);
    m_zoomPanel->SetMinSize(wxSize(128,128));
    
    m_menuBar = new wxMenuBar(0);
    this->SetMenuBar(m_menuBar);
    
    m_name6 = new wxMenu();
    m_menuBar->Append(m_name6, _("&File"));
    
    m_menuItem191 = new wxMenuItem(m_name6, wxID_ANY, _("&Copy Color\tCtrl-C"), wxT(""), wxITEM_NORMAL);
    m_name6->Append(m_menuItem191);
    
    m_menuItem195 = new wxMenuItem(m_name6, wxID_ANY, _("&Paste Color\tCtrl-V"), wxT(""), wxITEM_NORMAL);
    m_name6->Append(m_menuItem195);
    
    m_menuItem197 = new wxMenuItem(m_name6, wxID_ANY, _("Copy &Magnified Area\tCtrl-Shift-C"), wxT(""), wxITEM_NORMAL);
    m_name6->Append(m_menuItem197);
    
    m_name6->AppendSeparator();
    
    m_menuItem9 = new wxMenuItem(m_name6, wxID_ABOUT, _("&About..."), wxT(""), wxITEM_NORMAL);
    m_name6->Append(m_menuItem9);
    
    m_menuItem7 = new wxMenuItem(m_name6, wxID_EXIT, _("E&xit\tCtrl-Q"), _("Quit"), wxITEM_NORMAL);
    m_name6->Append(m_menuItem7);
    
    m_name8 = new wxMenu();
    m_menuBar->Append(m_name8, _("&Tools"));
    
    m_menuItem79 = new wxMenuItem(m_name8, wxID_ANY, _("&System Color Picker\tCtrl-P"), wxT(""), wxITEM_NORMAL);
    m_name8->Append(m_menuItem79);
    
    m_menu65 = new wxMenu();
    m_menuBar->Append(m_menu65, _("&Settings"));
    
    m_colorModelMenu = new wxMenu();
    m_menu65->AppendSubMenu(m_colorModelMenu, _("Color &Model"));
    
    m_colorOutputMenu = new wxMenu();
    m_menu65->AppendSubMenu(m_colorOutputMenu, _("Color &Output"));
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre(wxBOTH);
    // Connect events
    this->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MainFrameBaseClass::OnCaptureEnd), NULL, this);
    this->Connect(wxEVT_MOTION, wxMouseEventHandler(MainFrameBaseClass::OnCaptureMove), NULL, this);
    this->Connect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(MainFrameBaseClass::OnCaptureZoom), NULL, this);
    this->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnCapturePush), NULL, this);
    m_firstCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_firstCtrl->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_secondCtrl->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_secondCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_thirdCtrl->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_thirdCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_fourthCtrl->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_fourthCtrl->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_colorButton->Connect(wxEVT_RIGHT_UP, wxMouseEventHandler(MainFrameBaseClass::OnPushColor), NULL, this);
    m_formatText->Connect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorOutputChange), NULL, this);
    m_formatText->Connect(wxEVT_KILL_FOCUS, wxFocusEventHandler(MainFrameBaseClass::OnInputOutputBlur), NULL, this);
    m_formatText->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(MainFrameBaseClass::OnInputOutputEnter), NULL, this);
    m_pickerButton->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnCaptureStart), NULL, this);
    m_button1281->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnZoomIn), NULL, this);
    m_button128->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnZoomOut), NULL, this);
    m_button12845->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnRefreshImage), NULL, this);
    m_timerButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnTimerRefreshImage), NULL, this);
    m_zoomPanel->Connect(wxEVT_LEFT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnZoomPanelDown), NULL, this);
    m_zoomPanel->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MainFrameBaseClass::OnZoomPanelUp), NULL, this);
    m_zoomPanel->Connect(wxEVT_MOTION, wxMouseEventHandler(MainFrameBaseClass::OnZoomPanelMove), NULL, this);
    m_zoomPanel->Connect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(MainFrameBaseClass::OnZoomPanelZoom), NULL, this);
    m_zoomPanel->Connect(wxEVT_RIGHT_UP, wxMouseEventHandler(MainFrameBaseClass::OnPushColor), NULL, this);
    this->Connect(m_menuItem191->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnCopyColor), NULL, this);
    this->Connect(m_menuItem195->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnPasteColor), NULL, this);
    this->Connect(m_menuItem197->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnCopyMagnifiedArea), NULL, this);
    this->Connect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnAbout), NULL, this);
    this->Connect(m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Connect(m_menuItem79->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnSystemColorPicker), NULL, this);
    
}

MainFrameBaseClass::~MainFrameBaseClass()
{
    this->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MainFrameBaseClass::OnCaptureEnd), NULL, this);
    this->Disconnect(wxEVT_MOTION, wxMouseEventHandler(MainFrameBaseClass::OnCaptureMove), NULL, this);
    this->Disconnect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(MainFrameBaseClass::OnCaptureZoom), NULL, this);
    this->Disconnect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnCapturePush), NULL, this);
    m_firstCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_firstCtrl->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_secondCtrl->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_secondCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_thirdCtrl->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_thirdCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_fourthCtrl->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_fourthCtrl->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorChange), NULL, this);
    m_colorButton->Disconnect(wxEVT_RIGHT_UP, wxMouseEventHandler(MainFrameBaseClass::OnPushColor), NULL, this);
    m_formatText->Disconnect(wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler(MainFrameBaseClass::OnColorOutputChange), NULL, this);
    m_formatText->Disconnect(wxEVT_KILL_FOCUS, wxFocusEventHandler(MainFrameBaseClass::OnInputOutputBlur), NULL, this);
    m_formatText->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(MainFrameBaseClass::OnInputOutputEnter), NULL, this);
    m_pickerButton->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnCaptureStart), NULL, this);
    m_button1281->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnZoomIn), NULL, this);
    m_button128->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnZoomOut), NULL, this);
    m_button12845->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnRefreshImage), NULL, this);
    m_timerButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnTimerRefreshImage), NULL, this);
    m_zoomPanel->Disconnect(wxEVT_LEFT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnZoomPanelDown), NULL, this);
    m_zoomPanel->Disconnect(wxEVT_LEFT_UP, wxMouseEventHandler(MainFrameBaseClass::OnZoomPanelUp), NULL, this);
    m_zoomPanel->Disconnect(wxEVT_MOTION, wxMouseEventHandler(MainFrameBaseClass::OnZoomPanelMove), NULL, this);
    m_zoomPanel->Disconnect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(MainFrameBaseClass::OnZoomPanelZoom), NULL, this);
    m_zoomPanel->Disconnect(wxEVT_RIGHT_UP, wxMouseEventHandler(MainFrameBaseClass::OnPushColor), NULL, this);
    this->Disconnect(m_menuItem191->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnCopyColor), NULL, this);
    this->Disconnect(m_menuItem195->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnPasteColor), NULL, this);
    this->Disconnect(m_menuItem197->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnCopyMagnifiedArea), NULL, this);
    this->Disconnect(m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnAbout), NULL, this);
    this->Disconnect(m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Disconnect(m_menuItem79->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnSystemColorPicker), NULL, this);
    
}
