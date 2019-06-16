%module struc

%{
#include "struc.h"
%}

%include "std_vector.i"

namespace std {
%template(Double_Vector)  vector < double >;
}

struct moments
{
	double mm1, mm2, mm3, mm4, mm5, mm6;
};

moments moments_cal(std::vector< double > angles, std::vector< double > velocities, std::vector< double > accelerates);
void print_angles(std::vector< double > angles);
void print_vels(std::vector< double > vels);
void print_accs(std::vector< double > accs);
