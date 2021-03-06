// ecma48.h - control functions for coded character sets in 7-bit codes
// https://www.ecma-international.org/publications-and-standards/standards/ecma-48

// Elements of the C0 set
#define ECMA48_ACK "\x06"
#define ECMA48_BEL "\x07"
#define ECMA48_BS  "\x08"
#define ECMA48_CAN "\x18"
#define ECMA48_CR  "\x0d"
#define ECMA48_DC1 "\x11"
#define ECMA48_DC2 "\x12"
#define ECMA48_DC3 "\x13"
#define ECMA48_DC4 "\x14"
#define ECMA48_DLE "\x10"
#define ECMA48_EM  "\x19"
#define ECMA48_ENQ "\x05"
#define ECMA48_EOT "\x04"
#define ECMA48_ESC "\x1b"
#define ECMA48_ETB "\x17"
#define ECMA48_ETX "\x03"
#define ECMA48_FF  "\x0c"
#define ECMA48_HT  "\x09"
#define ECMA48_IS1 "\x1f"
#define ECMA48_IS2 "\x1e"
#define ECMA48_IS3 "\x1d"
#define ECMA48_IS4 "\x1c"
#define ECMA48_LF  "\x0a"
#define ECMA48_LS0 "\x0f"
#define ECMA48_LS1 "\x0e"
#define ECMA48_NAK "\x15"
#define ECMA48_NUL "\x00"
#define ECMA48_SI  "\x0f"
#define ECMA48_SO  "\x0e"
#define ECMA48_SOH "\x01"
#define ECMA48_STX "\x02"
#define ECMA48_SUB "\x1a"
#define ECMA48_SYN "\x16"
#define ECMA48_VT  "\x0b"

// Elements of the C1 set
#define ECMA48_APC ECMA48_ESC "_"
#define ECMA48_BPH ECMA48_ESC "B"
#define ECMA48_CCH ECMA48_ESC "T"
#define ECMA48_CSI ECMA48_ESC "["
#define ECMA48_DCS ECMA48_ESC "P"
#define ECMA48_EPA ECMA48_ESC "W"
#define ECMA48_ESA ECMA48_ESC "G"
#define ECMA48_HTJ ECMA48_ESC "I"
#define ECMA48_HTS ECMA48_ESC "H"
#define ECMA48_MW  ECMA48_ESC "U"
#define ECMA48_NBH ECMA48_ESC "C"
#define ECMA48_NEL ECMA48_ESC "E"
#define ECMA48_OSC ECMA48_ESC "]"
#define ECMA48_PLD ECMA48_ESC "K"
#define ECMA48_PLU ECMA48_ESC "L"
#define ECMA48_PM  ECMA48_ESC "^"
#define ECMA48_PU1 ECMA48_ESC "Q"
#define ECMA48_PU2 ECMA48_ESC "R"
#define ECMA48_RI  ECMA48_ESC "M"
#define ECMA48_SCI ECMA48_ESC "Z"
#define ECMA48_SOS ECMA48_ESC "X"
#define ECMA48_SPA ECMA48_ESC "V"
#define ECMA48_SSA ECMA48_ESC "F"
#define ECMA48_SS2 ECMA48_ESC "N"
#define ECMA48_SS3 ECMA48_ESC "O"
#define ECMA48_ST  ECMA48_ESC "\\"
#define ECMA48_STS ECMA48_ESC "S"
#define ECMA48_VTS ECMA48_ESC "J"

// Independent control functions
#define ECMA48_CMD  ECMA48_ESC "d"
#define ECMA48_DMI  ECMA48_ESC "`"
#define ECMA48_EMI  ECMA48_ESC "b"
#define ECMA48_INT  ECMA48_ESC "a"
#define ECMA48_LS1R ECMA48_ESC "~"
#define ECMA48_LS2  ECMA48_ESC "n"
#define ECMA48_LS2R ECMA48_ESC "}"
#define ECMA48_LS3  ECMA48_ESC "o"
#define ECMA48_LS3R ECMA48_ESC "|"
#define ECMA48_RIS  ECMA48_ESC "c"

// Control sequences
#define ECMA48_CBT(p)  ECMA48_CSI p "Z"
#define ECMA48_CHA(p)  ECMA48_CSI p "G"
#define ECMA48_CHT(p)  ECMA48_CSI p "I"
#define ECMA48_CNL(p)  ECMA48_CSI p "E"
#define ECMA48_CPL(p)  ECMA48_CSI p "F"
#define ECMA48_CPR(p)  ECMA48_CSI p "R"
#define ECMA48_CTC(p)  ECMA48_CSI p "W"
#define ECMA48_CUB(p)  ECMA48_CSI p "D"
#define ECMA48_CUD(p)  ECMA48_CSI p "B"
#define ECMA48_CUF(p)  ECMA48_CSI p "C"
#define ECMA48_CUP(p)  ECMA48_CSI p "H"
#define ECMA48_CUU(p)  ECMA48_CSI p "A"
#define ECMA48_CVT(p)  ECMA48_CSI p "Y"
#define ECMA48_DA(p)   ECMA48_CSI p "c"
#define ECMA48_DAQ(p)  ECMA48_CSI p "o"
#define ECMA48_DCH(p)  ECMA48_CSI p "P"
#define ECMA48_DL(p)   ECMA48_CSI p "M"
#define ECMA48_DSR(p)  ECMA48_CSI p "n"
#define ECMA48_DTA(p)  ECMA48_CSI p " T"
#define ECMA48_EA(p)   ECMA48_CSI p "O"
#define ECMA48_ECH(p)  ECMA48_CSI p "X"
#define ECMA48_ED(p)   ECMA48_CSI p "J"
#define ECMA48_EF(p)   ECMA48_CSI p "N"
#define ECMA48_EL(p)   ECMA48_CSI p "K"
#define ECMA48_FNK(p)  ECMA48_CSI p " W"
#define ECMA48_FNT(p)  ECMA48_CSI p " D"
#define ECMA48_GCC(p)  ECMA48_CSI p " _"
#define ECMA48_GSM(p)  ECMA48_CSI p " B"
#define ECMA48_GSS(p)  ECMA48_CSI p " C"
#define ECMA48_HPA(p)  ECMA48_CSI p "`"
#define ECMA48_HPB(p)  ECMA48_CSI p "j"
#define ECMA48_HPR(p)  ECMA48_CSI p "a"
#define ECMA48_HVP(p)  ECMA48_CSI p "f"
#define ECMA48_ICH(p)  ECMA48_CSI p "@"
#define ECMA48_IDCS(p) ECMA48_CSI p " O"
#define ECMA48_IGS(p)  ECMA48_CSI p " M"
#define ECMA48_IL(p)   ECMA48_CSI p "L"
#define ECMA48_JFY(p)  ECMA48_CSI p " F"
#define ECMA48_MC(p)   ECMA48_CSI p "i"
#define ECMA48_NP(p)   ECMA48_CSI p "U"
#define ECMA48_PEC(p)  ECMA48_CSI p " Z"
#define ECMA48_PFS(p)  ECMA48_CSI p " J"
#define ECMA48_PP(p)   ECMA48_CSI p "V"
#define ECMA48_PPA(p)  ECMA48_CSI p " P"
#define ECMA48_PPB(p)  ECMA48_CSI p " R"
#define ECMA48_PPR(p)  ECMA48_CSI p " Q"
#define ECMA48_PTX(p)  ECMA48_CSI p "\\"
#define ECMA48_QUAD(p) ECMA48_CSI p " H"
#define ECMA48_REP(p)  ECMA48_CSI p "b"
#define ECMA48_RM(p)   ECMA48_CSI p "l"
#define ECMA48_SACS(p) ECMA48_CSI p " \\"
#define ECMA48_SAPV(p) ECMA48_CSI p " ]"
#define ECMA48_SCO(p)  ECMA48_CSI p " e"
#define ECMA48_SCP(p)  ECMA48_CSI p " k"
#define ECMA48_SCS(p)  ECMA48_CSI p " g"
#define ECMA48_SD(p)   ECMA48_CSI p "T"
#define ECMA48_SDS(p)  ECMA48_CSI p "]"
#define ECMA48_SEE(p)  ECMA48_CSI p "Q"
#define ECMA48_SEF(p)  ECMA48_CSI p " Y"
#define ECMA48_SGR(p)  ECMA48_CSI p "m"
#define ECMA48_SHS(p)  ECMA48_CSI p " K"
#define ECMA48_SIMD(p) ECMA48_CSI p "^"
#define ECMA48_SL(p)   ECMA48_CSI p " @"
#define ECMA48_SLH(p)  ECMA48_CSI p " U"
#define ECMA48_SLL(p)  ECMA48_CSI p " V"
#define ECMA48_SLS(p)  ECMA48_CSI p " h"
#define ECMA48_SM(p)   ECMA48_CSI p "h"
#define ECMA48_SPD(p)  ECMA48_CSI p " S"
#define ECMA48_SPH(p)  ECMA48_CSI p " i"
#define ECMA48_SPI(p)  ECMA48_CSI p " G"
#define ECMA48_SPL(p)  ECMA48_CSI p " j"
#define ECMA48_SPQR(p) ECMA48_CSI p " X"
#define ECMA48_SR(p)   ECMA48_CSI p " A"
#define ECMA48_SRCS(p) ECMA48_CSI p " f"
#define ECMA48_SRS(p)  ECMA48_CSI p "["
#define ECMA48_SSU(p)  ECMA48_CSI p " I"
#define ECMA48_SSW(p)  ECMA48_CSI p " ["
#define ECMA48_STAB(p) ECMA48_CSI p " ^"
#define ECMA48_SU(p)   ECMA48_CSI p "S"
#define ECMA48_SVS(p)  ECMA48_CSI p " L"
#define ECMA48_TAC(p)  ECMA48_CSI p " b"
#define ECMA48_TALE(p) ECMA48_CSI p " a"
#define ECMA48_TATE(p) ECMA48_CSI p " `"
#define ECMA48_TBC(p)  ECMA48_CSI p "g"
#define ECMA48_TCC(p)  ECMA48_CSI p " c"
#define ECMA48_TSR(p)  ECMA48_CSI p " d"
#define ECMA48_TSS(p)  ECMA48_CSI p " E"
#define ECMA48_VPA(p)  ECMA48_CSI p "d"
#define ECMA48_VPB(p)  ECMA48_CSI p "k"
#define ECMA48_VPR(p)  ECMA48_CSI p "e"
