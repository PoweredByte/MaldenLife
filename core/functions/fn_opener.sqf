{
 if ((_x animationPhase "Door_2_rot" > 0.7) || {_x animationPhase "Door_1_rot" > 0.7} || {_x animationPhase "Door_1_move" > 0.7}) then {
 _x animate ["Door_1_rot", 0];
 _x animate ["Door_2_rot", 0];
 _x animate ["Door_1_move", 0];
 _x animate ["Door_1_move", 0];
 } else {
 _x animate ["Door_1_rot", 1];
 _x animate ["Door_2_rot", 1];
 _x animate ["Door_1_move", 1];
 };
}
 forEach (nearestObjects [player, ["Land_BarGate_F","Land_Net_Fence_Gate_F","Land_ConcreteWall_02_m_d_F","Land_ConcreteWall_01_m_gate_F","Land_NetFence_02_m_gate_v1_F","Land_ConcreteWall_01_l_gate_F","Land_ConcreteWall_01_I_gate_F"], 15]);