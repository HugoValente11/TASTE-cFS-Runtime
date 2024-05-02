#include "sbn_tbl.h"
#include "cfe_tbl_filedef.h"

SBN_ConfTbl_t SBN_ConfTbl = {.ProtocolModules = {
                                                  {
                                                    .Name        = "UDP",
                                                    .LibFileName = "/cf/sbn_udp.so",
                                                    .LibSymbol   = "SBN_UDP_Ops",
                                                    .BaseEID     = 0x0100
                                                  },
                                                },
                             .ProtocolCnt     = 1,
                             .Peers =
                                 {



                                     {
.ProcessorID  = 1 ,
                                      .SpacecraftID = 0x42,
                                      .NetNum       = 0,
                                      .ProtocolName = "UDP",
                                      .Address      = "127.0.0.1:1234",
                                      .TaskFlags    = SBN_TASK_POLL},



                                     {
.ProcessorID  = 2 ,
                                      .SpacecraftID = 0x42,
                                      .NetNum       = 0,
                                      .ProtocolName = "UDP",
                                      .Address      = "127.0.0.1:4321",
                                      .TaskFlags    = SBN_TASK_POLL},

                                 },
                             .PeerCnt = 2};

CFE_TBL_FILEDEF(SBN_ConfTbl, SBN.SBN_ConfTbl, SBN Configuration Table, sbn_conf_tbl.tbl)
