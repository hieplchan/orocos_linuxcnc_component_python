#include <stdio.h>
#include <vector>

struct moments
{
	double mm1, mm2, mm3, mm4, mm5, mm6;
};

//-------
typedef struct struct_dynamic {
	double array2d[10][10];
} darray;

//extern darray;
darray cal_inertia(double joint[6]);
darray cal_coriolis(double joint[6],double dq[6]);
darray cal_gravity(double joint[6]);
darray rne(double joint[6], double dq[6], double ddq[6]);


moments moments_cal(std::vector< double > angles, std::vector< double > velocities, std::vector< double > accelerates);
void print_angles(std::vector< double > angles);
void print_vels(std::vector< double > vels);
void print_accs(std::vector< double > accs);
double* sum(std::vector< double > a, std::vector< double > b, std::vector< double > c);


//define DH parameter
#define a1 	0.200
#define a2	0.600
#define a3	0.115
#define d1	0.585
#define d4	0.680
#define d6	0.100

//define inertia tenxo
//link 1
#define Ixx1 	0.1
#define Iyy1	0.2
#define Izz1	0.3
#define Ixy1	0.4
#define Ixz1	0.5
#define Iyz1	0.6
#define X1	-1
#define Y1	-2
#define Z1	-3
#define m_1	1

//link 	2
#define Ixx2	0.1
#define Iyy2	0.2
#define Izz2	0.3
#define Ixy2	0.4
#define Ixz2	0.5
#define Iyz2	0.6
#define X2	-1
#define Y2	-2
#define Z2	-3
#define m_2	1

//link 	3
#define Ixx3	0.1
#define Iyy3	0.2
#define Izz3	0.3
#define Ixy3	0.4
#define Ixz3	0.5
#define Iyz3	0.6
#define X3	-1
#define Y3	-2
#define Z3	-3
#define m_3	1

//link 	4
#define Ixx4	0.1
#define Iyy4	0.2
#define Izz4	0.3
#define Ixy4	0.4
#define Ixz4	0.5
#define Iyz4	0.6
#define X4	-1
#define Y4	-2
#define Z4	-3
#define m_4	1

//link 	5
#define Ixx5	0.1
#define Iyy5	0.2
#define Izz5	0.3
#define Ixy5	0.4
#define Ixz5	0.5
#define Iyz5	0.6
#define X5	-1
#define Y5	-2
#define Z5	-3
#define m_5	1

//link 	6
#define Ixx6	0.1
#define Iyy6	0.2
#define Izz6	0.3
#define Ixy6	0.4
#define Ixz6	0.5
#define Iyz6	0.6
#define X6	-1
#define Y6	-2
#define Z6	-3
#define m_6	1

//define gravity
#define grav 9.81
#define PM_PI 3.1415
