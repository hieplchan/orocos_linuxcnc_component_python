import sys
sys.path.append('/home/hiep/Desktop/linuxcnc_dynamics_puma/cplusplus_code')
sys.path.append('/home/hiep/linuxcnc-dev/lib/python')

import struc

import linuxcnc
s = linuxcnc.stat()
s.poll()

angles = struc.Double_Vector()
angles = [s.joint_actual_position[0], s.joint_position[1], s.joint_position[2], s.joint_position[3], s.joint_position[4], s.joint_position[5]]

print angles

velocities = struc.Double_Vector()
velocities = [s.axis[0]['velocity'], s.axis[1]['velocity'], s.axis[2]['velocity'], s.axis[3]['velocity'], s.axis[4]['velocity'], s.axis[5]['velocity']]

accelerates = struc.Double_Vector()
accelerates = [1, 1, 1, 1, 1, 1]

struc.print_angles(angles)
struc.print_vels(velocities)
struc.print_accs(accelerates)

moments = struc.moments_cal(angles, velocities, accelerates)

print moments.mm1
print moments.mm2
print moments.mm3
print moments.mm4
print moments.mm5
print moments.mm6
