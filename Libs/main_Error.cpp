#include<iostream>
using std::cout;
using std::endl;

#include<Error_Propagation.hpp>


int main()
{
  Double_t Error2;
  Error_Propagation::PowErr(3,0.5,2,Error2);
  cout<<Error2<<endl;
 

}

