#ifndef BOARDS_H
#define BOARDS_H

#define BOARD_UNKNOWN -1


#define BOARD_RAMBO             301  // Rambo
#define BOARD_RAMBO_MINI_1_3    302  // Rambo-mini 1.3
#define BOARD_RAMBO_MINI_1_0    102  // Rambo-mini 1.0

#define BOARD_MKS_BASE          40   // MKS BASE 1.0
#define BOARD_GT2560_REV_A_PLUS 75   // Geeetech GT2560 Rev. A+ (with auto level probe)


#define MB(board) (MOTHERBOARD==BOARD_##board)
#define IS_RAMPS (MB(RAMPS_OLD) || MB(RAMPS_13_EFB) || MB(RAMPS_13_EEB) || MB(RAMPS_13_EFF) || MB(RAMPS_13_EEF))

#endif //__BOARDS_H
