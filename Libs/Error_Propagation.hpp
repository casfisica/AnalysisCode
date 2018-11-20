class Error_Propagation{
    
    protected:

    
    private:
    
    public:
    
    static Double_t SumErr(Double_t _x, Double_t _y,Double_t  _dx, Double_t _dy, Double_t & Error2);
    
    static Double_t MultErr(Double_t _x, Double_t _y,Double_t  _dx, Double_t _dy, Double_t & Error2);
    
    static Double_t DivErr(Double_t _x, Double_t _y,Double_t  _dx, Double_t _dy, Double_t & Error2)
    
    static Double_t PowErr(Double_t _x, Double_t _y,Double_t  _dx, Double_t & Error2)
    
}