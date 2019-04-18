#include <wx.h>
#include "Taskas3D.h"
/*

*/
class Langas : public wxFrame
{
private:
    Taskas3D tsk_;  
public:
    Langas(Taskas3D* tsk) : wxFrame(nullptr, wxID_ANY, "Pavyzdys")
    {
        tsk_ = *tsk; 

        auto lentele = new wxBoxSizer(wxVERTICAL);
  //////////////////////////////////////////////////////////////////////////////////
        auto eilute1 = new wxBoxSizer(wxHORIZONTAL);
        eilute1->Add(new wxStaticText(this, wxID_ANY, "Koordinatės >>>"));
        auto lX =  new wxTextCtrl(this, wxID_ANY);
        auto lY =  new wxTextCtrl(this, wxID_ANY);
        auto lZ =  new wxTextCtrl(this, wxID_ANY);

        *lX << tsk_.koksX();
        *lY << tsk_.koksY();
        *lZ << tsk_.koksZ();

        eilute1->Add(lX, wxSizerFlags().Border().Centre());
        eilute1->Add(lY, wxSizerFlags().Border().Centre());
        eilute1->Add(lZ, wxSizerFlags().Border().Centre());


        lentele->Add(eilute1); 

  ///////////////////////////////////////////////////////////////////////////////////

        auto eilute2 = new wxBoxSizer(wxHORIZONTAL);
        auto mygtukasIsimink = new wxButton(this, wxID_HIGHEST + 1, _T("Įsimink"));
        mygtukasIsimink->Bind(wxEVT_BUTTON, [=](wxCommandEvent&) {
                double x = 0.0; 
                wxString s = lX->GetLineText(0);
                s.ToDouble(&x);
                double y = 0.0; 
                s = lY->GetLineText(0);
                s.ToDouble(&y);
                double z = 0.0; 
                s = lZ->GetLineText(0);
                s.ToDouble(&z);
                tsk_.tegulX(x);
                tsk_.tegulY(y);
                tsk_.tegulZ(z);

                wxMessageBox(wxString::FromUTF8("Taškas įsimintas"), wxString::FromUTF8("Pranešimas "), wxOK | wxICON_INFORMATION);
                Fit();
            });


        eilute2->Add(mygtukasIsimink, wxSizerFlags().Border().Centre());
      

        auto mygtukasSkaiciuok = new wxButton(this, wxID_HIGHEST + 1, _T("Atstumas iki centro"));
        mygtukasSkaiciuok->Bind(wxEVT_BUTTON, [=](wxCommandEvent&) {
                wxMessageBox("Gavome "+ wxString::FromDouble(tsk_.atstumasIkiCentro(),4), "Atsakymas ", wxOK | wxICON_INFORMATION);
                Fit();
            });


        eilute2->Add(mygtukasSkaiciuok, wxSizerFlags().Border().Centre());
       // SetSizerAndFit(eilute2);

        lentele->Add(eilute2); 

        SetSizerAndFit(lentele);
        Show(true);
    }


};

class Programa : public wxApp
{
public:
    virtual bool OnInit() override { 
        Taskas3D t(1,2,3);
        new Langas(&t); 
        return true;  
    }
};

wxIMPLEMENT_APP(Programa);

int main() {
    Programa *p = new Programa();
    p->OnInit();
}
