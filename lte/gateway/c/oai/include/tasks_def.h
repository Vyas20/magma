TASK_DEF(TASK_TIMER, TASK_PRIORITY_MED, 16)
// Other possible tasks in the process
/// GTPV1-U task
TASK_DEF(TASK_GTPV1_U, TASK_PRIORITY_MED, 256)
/// FW_IP task
TASK_DEF(TASK_FW_IP, TASK_PRIORITY_MED, 256)
/// MME Applicative task
TASK_DEF(TASK_MME_APP, TASK_PRIORITY_MED, 256)
/// NAS task
TASK_DEF(TASK_NAS_MME, TASK_PRIORITY_MED, 256)
/// NAS ESM task
TASK_DEF(TASK_NAS_ESM,  TASK_PRIORITY_MED, 256)
/// S11 task
TASK_DEF(TASK_S11, TASK_PRIORITY_MED, 256)
/// S1AP task
TASK_DEF(TASK_S1AP, TASK_PRIORITY_MED, 256)
/// S6a task
TASK_DEF(TASK_S6A, TASK_PRIORITY_MED, 256)
/// SCTP task
TASK_DEF(TASK_SCTP, TASK_PRIORITY_MED, 256)
/// Serving and Proxy Gateway Application task
TASK_DEF(TASK_SPGW_APP, TASK_PRIORITY_MED, 256)
/// PGW Application task
TASK_DEF(TASK_PGW_APP, TASK_PRIORITY_MED, 256)
/// UDP task
TASK_DEF(TASK_UDP, TASK_PRIORITY_MED, 256)
//MESSAGE GENERATOR TASK
TASK_DEF(TASK_MSC, TASK_PRIORITY_MED, 256)
//LOGGING TXT TASK
TASK_DEF(TASK_LOG, TASK_PRIORITY_MED, 1024)
//GENERAL PURPOSE SHARED LOGGING TASK
TASK_DEF(TASK_SHARED_TS_LOG, TASK_PRIORITY_MED, 1024)
//UTILITY TASK FOR SYSTEM() CALLS
TASK_DEF(TASK_ASYNC_SYSTEM, TASK_PRIORITY_MED, 256)
//SERVICE303 TASK
TASK_DEF(TASK_SERVICE303, TASK_PRIORITY_MED, 16)
TASK_DEF(TASK_SERVICE303_SERVER, TASK_PRIORITY_MED, 16)
/// SGs task
TASK_DEF(TASK_SGS, TASK_PRIORITY_MED, 256)
/// GRPC service task for SGs, S6a, SPGW
TASK_DEF(TASK_GRPC_SERVICE, TASK_PRIORITY_MED, 512)
