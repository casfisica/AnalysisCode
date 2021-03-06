#include "Error_Propagation.hpp"

static Double_t Error_Propagation::SumErr(Double_t _x, Double_t _y,Double_t  _dx, Double_t _dy, Double_t & Error2){
        /*Return de x+y and the error in the reference Error */
        Error2= TMath::Sqrt(_dx*_dx+_dy*_dy);
        return _x+_y;
    }
    
    static Double_t Error_Propagation::MultErr(Double_t _x, Double_t _y,Double_t  _dx, Double_t _dy, Double_t & Error2){
        /*Return de x*y and the error in the reference Error */
        Error2= (_x*_y)*TMath::Sqrt((_dx/_x)*(_dx/_x)+(_dy/_y)*(_dy/_y));
        return _x*_y;
    }
    
    static Double_t Error_Propagation::DivErr(Double_t _x, Double_t _y,Double_t  _dx, Double_t _dy, Double_t & Error2){
        /*Return de x/y and the error in the reference Error */
        Error2= (_x/_y)*TMath::Sqrt((_dx/_x)*(_dx/_x)+(_dy/_y)*(_dy/_y));
        return _x/_y;
    }
    
    static Double_t Error_Propagation::PowErr(Double_t _x, Double_t _y,Double_t  _dx, Double_t & Error2){
        /*Return de x^y and the error in the reference Error */
        Error2= TMath::Power(_x,_y-1.0)*_y*_dx;
        return TMath::Power(_x,_y);
    }
