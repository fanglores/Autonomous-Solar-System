#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____SInt64__RAWTYPE__
#define ____SInt64__RAWTYPE__
nk_static_assert(sizeof(nk_sint64_t) == 8, bad_nk_sint64_t_size);
nk_static_assert(nk_alignof(nk_sint64_t) == 8, bad_nk_sint64_t_align);
#endif /* ____SInt64__RAWTYPE__ */

#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);
#endif /* ____UInt8__RAWTYPE__ */

#ifndef ____SInt32__RAWTYPE__
#define ____SInt32__RAWTYPE__
nk_static_assert(sizeof(nk_sint32_t) == 4, bad_nk_sint32_t_size);
nk_static_assert(nk_alignof(nk_sint32_t) == 4, bad_nk_sint32_t_align);
#endif /* ____SInt32__RAWTYPE__ */

#ifndef ____UInt64__RAWTYPE__
#define ____UInt64__RAWTYPE__
nk_static_assert(sizeof(nk_uint64_t) == 8, bad_nk_uint64_t_size);
nk_static_assert(nk_alignof(nk_uint64_t) == 8, bad_nk_uint64_t_align);
#endif /* ____UInt64__RAWTYPE__ */

#ifndef ____UInt32__RAWTYPE__
#define ____UInt32__RAWTYPE__
nk_static_assert(sizeof(nk_uint32_t) == 4, bad_nk_uint32_t_size);
nk_static_assert(nk_alignof(nk_uint32_t) == 4, bad_nk_uint32_t_align);
#endif /* ____UInt32__RAWTYPE__ */

#ifndef __kl_VfsTypes__VfsProtoentT__STRUCT__
#define __kl_VfsTypes__VfsProtoentT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsProtoentT {
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t aliases;
            __nk_alignas(4) nk_sint32_t proto;
        } kl_VfsTypes_VfsProtoentT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsProtoentT kl_VfsTypes_VfsProtoentT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsProtoentT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsTimespecT__STRUCT__
#define __kl_VfsTypes__VfsTimespecT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsTimespecT {
            __nk_alignas(8) nk_sint64_t tvSec;
            __nk_alignas(8) nk_sint64_t tvNsec;
        } kl_VfsTypes_VfsTimespecT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsTimespecT kl_VfsTypes_VfsTimespecT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsTimespecT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsStatT__STRUCT__
#define __kl_VfsTypes__VfsStatT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsStatT {
            __nk_alignas(8) nk_uint64_t stDev;
            __nk_alignas(8) nk_uint64_t stIno;
            __nk_alignas(8) nk_uint64_t stMode;
            __nk_alignas(4) nk_uint32_t stNlink;
            __nk_alignas(4) nk_uint32_t stUid;
            __nk_alignas(4) nk_uint32_t stGid;
            __nk_alignas(8) nk_uint64_t stRdev;
            __nk_alignas(8) nk_sint64_t stSize;
            __nk_alignas(8) nk_sint64_t stBlksize;
            __nk_alignas(8) nk_sint64_t stBlocks;
            __nk_alignas(8)
            struct kl_VfsTypes_VfsTimespecT stAtm;
            __nk_alignas(8)
            struct kl_VfsTypes_VfsTimespecT stMtm;
            __nk_alignas(8)
            struct kl_VfsTypes_VfsTimespecT stCtm;
            __nk_alignas(8)
            struct kl_VfsTypes_VfsTimespecT stBtm;
        } kl_VfsTypes_VfsStatT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsStatT kl_VfsTypes_VfsStatT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsStatT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsStatVfsT__STRUCT__
#define __kl_VfsTypes__VfsStatVfsT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsStatVfsT {
            __nk_alignas(8) nk_uint64_t fBsize;
            __nk_alignas(8) nk_uint64_t fFrsize;
            __nk_alignas(8) nk_uint64_t fBlocks;
            __nk_alignas(8) nk_uint64_t fBfree;
            __nk_alignas(8) nk_uint64_t fBavail;
            __nk_alignas(8) nk_uint64_t fFiles;
            __nk_alignas(8) nk_uint64_t fFfree;
            __nk_alignas(8) nk_uint64_t fFavail;
            __nk_alignas(8) nk_uint64_t fFsid;
            __nk_alignas(8) nk_uint64_t fFlag;
            __nk_alignas(8) nk_uint64_t fNamemax;
        } kl_VfsTypes_VfsStatVfsT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsStatVfsT kl_VfsTypes_VfsStatVfsT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsStatVfsT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsIovecT__STRUCT__
#define __kl_VfsTypes__VfsIovecT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsIovecT {
            __nk_alignas(4) nk_ptr_t iovData;
        } kl_VfsTypes_VfsIovecT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsIovecT kl_VfsTypes_VfsIovecT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsIovecT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsMsghdrT__STRUCT__
#define __kl_VfsTypes__VfsMsghdrT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsMsghdrT {
            __nk_alignas(4) nk_ptr_t msgName;
            __nk_alignas(4) nk_ptr_t msgIovs;
            __nk_alignas(4) nk_ptr_t msgData;
            __nk_alignas(4) nk_sint32_t msgFlags;
        } kl_VfsTypes_VfsMsghdrT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsMsghdrT kl_VfsTypes_VfsMsghdrT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsMsghdrT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsNetentT__STRUCT__
#define __kl_VfsTypes__VfsNetentT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsNetentT {
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t aliases;
            __nk_alignas(4) nk_sint32_t addrtype;
            __nk_alignas(4) nk_uint32_t net;
        } kl_VfsTypes_VfsNetentT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsNetentT kl_VfsTypes_VfsNetentT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsNetentT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsIfAddrT__STRUCT__
#define __kl_VfsTypes__VfsIfAddrT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsIfAddrT {
            __nk_alignas(4) nk_ptr_t ifaName;
            __nk_alignas(4) nk_uint32_t ifaFlags;
            __nk_alignas(4) nk_ptr_t ifaAddr;
            __nk_alignas(4) nk_ptr_t ifaNetmask;
            __nk_alignas(4) nk_ptr_t ifaDstaddr;
        } kl_VfsTypes_VfsIfAddrT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsIfAddrT kl_VfsTypes_VfsIfAddrT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsIfAddrT__STRUCT__ */

#ifndef ____UInt16__RAWTYPE__
#define ____UInt16__RAWTYPE__
nk_static_assert(sizeof(nk_uint16_t) == 2, bad_nk_uint16_t_size);
nk_static_assert(nk_alignof(nk_uint16_t) == 2, bad_nk_uint16_t_align);
#endif /* ____UInt16__RAWTYPE__ */

#ifndef __kl_VfsTypes__VfsNpfEntT__STRUCT__
#define __kl_VfsTypes__VfsNpfEntT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsNpfEntT {
            __nk_alignas(4) nk_ptr_t addr;
            __nk_alignas(1) nk_uint8_t mask;
        } kl_VfsTypes_VfsNpfEntT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsNpfEntT kl_VfsTypes_VfsNpfEntT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsNpfEntT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsNpfTableEntT__STRUCT__
#define __kl_VfsTypes__VfsNpfTableEntT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsNpfTableEntT {
            __nk_alignas(1) nk_uint8_t nctCmd;
            __nk_alignas(4) nk_ptr_t nctName;
            __nk_alignas(4)
            struct kl_VfsTypes_VfsNpfEntT nctEnt;
        } kl_VfsTypes_VfsNpfTableEntT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsNpfTableEntT kl_VfsTypes_VfsNpfTableEntT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsNpfTableEntT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsBpfInsnT__STRUCT__
#define __kl_VfsTypes__VfsBpfInsnT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsBpfInsnT {
            __nk_alignas(2) nk_uint16_t code;
            __nk_alignas(1) nk_uint8_t jt;
            __nk_alignas(1) nk_uint8_t jf;
            __nk_alignas(4) nk_uint32_t k;
        } kl_VfsTypes_VfsBpfInsnT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsBpfInsnT kl_VfsTypes_VfsBpfInsnT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsBpfInsnT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsIfaMsghdrT__STRUCT__
#define __kl_VfsTypes__VfsIfaMsghdrT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsIfaMsghdrT {
            __nk_alignas(2)
            nk_uint16_t ifamMsglen;
            __nk_alignas(1)
            nk_uint8_t ifamVersion;
            __nk_alignas(1) nk_uint8_t ifamType;
            __nk_alignas(2) nk_uint16_t ifamIndex;
            __nk_alignas(4) nk_sint32_t ifamFlags;
            __nk_alignas(4) nk_sint32_t ifamAddrs;
            __nk_alignas(4) nk_sint32_t ifamPid;
            __nk_alignas(4)
            nk_sint32_t ifamAddrflags;
            __nk_alignas(4)
            nk_sint32_t ifamMetric;
        } kl_VfsTypes_VfsIfaMsghdrT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsIfaMsghdrT kl_VfsTypes_VfsIfaMsghdrT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsIfaMsghdrT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsRtMetricsT__STRUCT__
#define __kl_VfsTypes__VfsRtMetricsT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsRtMetricsT {
            __nk_alignas(8) nk_uint64_t rmxLocks;
            __nk_alignas(8) nk_uint64_t rmxMtu;
            __nk_alignas(8)
            nk_uint64_t rmxHopcount;
            __nk_alignas(8)
            nk_uint64_t rmxRecvpipe;
            __nk_alignas(8)
            nk_uint64_t rmxSendpipe;
            __nk_alignas(8)
            nk_uint64_t rmxSsthresh;
            __nk_alignas(8) nk_uint64_t rmxRtt;
            __nk_alignas(8) nk_uint64_t rmxRttvar;
            __nk_alignas(8) nk_sint64_t rmxExpire;
            __nk_alignas(8) nk_sint64_t rmxPksent;
        } kl_VfsTypes_VfsRtMetricsT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsRtMetricsT kl_VfsTypes_VfsRtMetricsT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsRtMetricsT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsRtMsghdrT__STRUCT__
#define __kl_VfsTypes__VfsRtMsghdrT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsRtMsghdrT {
            __nk_alignas(2) nk_uint16_t rtmMsglen;
            __nk_alignas(1) nk_uint8_t rtmVersion;
            __nk_alignas(1) nk_uint8_t rtmType;
            __nk_alignas(2) nk_uint16_t rtmIndex;
            __nk_alignas(4) nk_sint32_t rtmFlags;
            __nk_alignas(4) nk_sint32_t rtmAddrs;
            __nk_alignas(4) nk_sint32_t rtmPid;
            __nk_alignas(4) nk_sint32_t rtmSeq;
            __nk_alignas(4) nk_sint32_t rtmErrno;
            __nk_alignas(4) nk_sint32_t rtmUse;
            __nk_alignas(4) nk_sint32_t rtmInits;
            __nk_alignas(8)
            struct kl_VfsTypes_VfsRtMetricsT rtmRmx;
        } kl_VfsTypes_VfsRtMsghdrT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsRtMsghdrT kl_VfsTypes_VfsRtMsghdrT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsRtMsghdrT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsIfDataT__STRUCT__
#define __kl_VfsTypes__VfsIfDataT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsIfDataT {
            __nk_alignas(1) nk_uint8_t ifiType;
            __nk_alignas(1) nk_uint8_t ifiAddrlen;
            __nk_alignas(1) nk_uint8_t ifiHdrlen;
            __nk_alignas(4)
            nk_sint32_t ifiLinkState;
            __nk_alignas(8) nk_uint64_t ifiMtu;
            __nk_alignas(8) nk_uint64_t ifiMetric;
            __nk_alignas(8)
            nk_uint64_t ifiBaudrate;
            __nk_alignas(8)
            nk_uint64_t ifiIpackets;
            __nk_alignas(8)
            nk_uint64_t ifiIerrors;
            __nk_alignas(8)
            nk_uint64_t ifiOpackets;
            __nk_alignas(8)
            nk_uint64_t ifiOerrors;
            __nk_alignas(8)
            nk_uint64_t ifiCollisions;
            __nk_alignas(8) nk_uint64_t ifiIbytes;
            __nk_alignas(8) nk_uint64_t ifiObytes;
            __nk_alignas(8)
            nk_uint64_t ifiImcasts;
            __nk_alignas(8)
            nk_uint64_t ifiOmcasts;
            __nk_alignas(8)
            nk_uint64_t ifiIqdrops;
            __nk_alignas(8)
            nk_uint64_t ifiNoproto;
            __nk_alignas(8)
            struct kl_VfsTypes_VfsTimespecT ifiLastchange;
        } kl_VfsTypes_VfsIfDataT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsIfDataT kl_VfsTypes_VfsIfDataT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsIfDataT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsIfMsghdrT__STRUCT__
#define __kl_VfsTypes__VfsIfMsghdrT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsIfMsghdrT {
            __nk_alignas(2) nk_uint16_t ifmMsglen;
            __nk_alignas(1) nk_uint8_t ifmVersion;
            __nk_alignas(1) nk_uint8_t ifmType;
            __nk_alignas(4) nk_sint32_t ifmAddrs;
            __nk_alignas(4) nk_sint32_t ifmFlags;
            __nk_alignas(2) nk_uint16_t ifmIndex;
            __nk_alignas(8)
            struct kl_VfsTypes_VfsIfDataT ifmData;
        } kl_VfsTypes_VfsIfMsghdrT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsIfMsghdrT kl_VfsTypes_VfsIfMsghdrT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsIfMsghdrT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsIfConfT__STRUCT__
#define __kl_VfsTypes__VfsIfConfT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsIfConfT {
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t addr;
        } kl_VfsTypes_VfsIfConfT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsIfConfT kl_VfsTypes_VfsIfConfT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsIfConfT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsIfAliasReqT__STRUCT__
#define __kl_VfsTypes__VfsIfAliasReqT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsIfAliasReqT {
            __nk_alignas(4) nk_ptr_t ifraName;
            __nk_alignas(4) nk_ptr_t ifraAddr;
            __nk_alignas(4) nk_ptr_t ifraDstaddr;
            __nk_alignas(4) nk_ptr_t ifraMask;
        } kl_VfsTypes_VfsIfAliasReqT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsIfAliasReqT kl_VfsTypes_VfsIfAliasReqT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsIfAliasReqT__STRUCT__ */

#ifndef __kl_VfsTypes__VfsIfMediaReqT__STRUCT__
#define __kl_VfsTypes__VfsIfMediaReqT__STRUCT__
typedef struct __nk_packed kl_VfsTypes_VfsIfMediaReqT {
            __nk_alignas(4) nk_ptr_t ifmName;
            __nk_alignas(8)
            nk_uint64_t ifmCurrent;
            __nk_alignas(8) nk_uint64_t ifmMask;
            __nk_alignas(8) nk_uint64_t ifmStatus;
            __nk_alignas(8) nk_uint64_t ifmActive;
            __nk_alignas(8) nk_uint64_t ifmCount;
            __nk_alignas(4) nk_ptr_t ifmUlist;
        } kl_VfsTypes_VfsIfMediaReqT;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsTypes_VfsIfMediaReqT kl_VfsTypes_VfsIfMediaReqT
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl_VfsTypes__VfsIfMediaReqT__STRUCT__ */

#ifndef __kl__VfsExtAttr__INTERFACE__
#define __kl__VfsExtAttr__INTERFACE__
enum {
    kl_VfsExtAttr_Setxattr_mid,
    kl_VfsExtAttr_Lsetxattr_mid,
    kl_VfsExtAttr_Fsetxattr_mid,
    kl_VfsExtAttr_Getxattr_mid,
    kl_VfsExtAttr_Lgetxattr_mid,
    kl_VfsExtAttr_Fgetxattr_mid,
    kl_VfsExtAttr_Listxattr_mid,
    kl_VfsExtAttr_Llistxattr_mid,
    kl_VfsExtAttr_Flistxattr_mid,
    kl_VfsExtAttr_Removexattr_mid,
    kl_VfsExtAttr_Lremovexattr_mid,
    kl_VfsExtAttr_Fremovexattr_mid,
    kl_VfsExtAttr_mid_max,
} ;
enum {
    kl_VfsExtAttr_Setxattr_req_path_size = 1024,
    kl_VfsExtAttr_Setxattr_req_name_size = 255,
    kl_VfsExtAttr_Setxattr_req_value_size = 255,
    kl_VfsExtAttr_Setxattr_req_arena_size = 1534,
    kl_VfsExtAttr_Setxattr_res_arena_size = 0,
    kl_VfsExtAttr_Setxattr_req_handles = 0,
    kl_VfsExtAttr_Setxattr_res_handles = 0,
    kl_VfsExtAttr_Setxattr_err_handles = 0,
    kl_VfsExtAttr_Lsetxattr_req_path_size = 1024,
    kl_VfsExtAttr_Lsetxattr_req_name_size = 255,
    kl_VfsExtAttr_Lsetxattr_req_value_size = 255,
    kl_VfsExtAttr_Lsetxattr_req_arena_size = 1534,
    kl_VfsExtAttr_Lsetxattr_res_arena_size = 0,
    kl_VfsExtAttr_Lsetxattr_req_handles = 0,
    kl_VfsExtAttr_Lsetxattr_res_handles = 0,
    kl_VfsExtAttr_Lsetxattr_err_handles = 0,
    kl_VfsExtAttr_Fsetxattr_req_name_size = 255,
    kl_VfsExtAttr_Fsetxattr_req_value_size = 255,
    kl_VfsExtAttr_Fsetxattr_req_arena_size = 510,
    kl_VfsExtAttr_Fsetxattr_res_arena_size = 0,
    kl_VfsExtAttr_Fsetxattr_req_handles = 0,
    kl_VfsExtAttr_Fsetxattr_res_handles = 0,
    kl_VfsExtAttr_Fsetxattr_err_handles = 0,
    kl_VfsExtAttr_Getxattr_req_path_size = 1024,
    kl_VfsExtAttr_Getxattr_req_name_size = 255,
    kl_VfsExtAttr_Getxattr_res_value_size = 255,
    kl_VfsExtAttr_Getxattr_req_arena_size = 1279,
    kl_VfsExtAttr_Getxattr_res_arena_size = 255,
    kl_VfsExtAttr_Getxattr_req_handles = 0,
    kl_VfsExtAttr_Getxattr_res_handles = 0,
    kl_VfsExtAttr_Getxattr_err_handles = 0,
    kl_VfsExtAttr_Lgetxattr_req_path_size = 1024,
    kl_VfsExtAttr_Lgetxattr_req_name_size = 255,
    kl_VfsExtAttr_Lgetxattr_res_value_size = 255,
    kl_VfsExtAttr_Lgetxattr_req_arena_size = 1279,
    kl_VfsExtAttr_Lgetxattr_res_arena_size = 255,
    kl_VfsExtAttr_Lgetxattr_req_handles = 0,
    kl_VfsExtAttr_Lgetxattr_res_handles = 0,
    kl_VfsExtAttr_Lgetxattr_err_handles = 0,
    kl_VfsExtAttr_Fgetxattr_req_name_size = 255,
    kl_VfsExtAttr_Fgetxattr_res_value_size = 255,
    kl_VfsExtAttr_Fgetxattr_req_arena_size = 255,
    kl_VfsExtAttr_Fgetxattr_res_arena_size = 255,
    kl_VfsExtAttr_Fgetxattr_req_handles = 0,
    kl_VfsExtAttr_Fgetxattr_res_handles = 0,
    kl_VfsExtAttr_Fgetxattr_err_handles = 0,
    kl_VfsExtAttr_Listxattr_req_path_size = 1024,
    kl_VfsExtAttr_Listxattr_res_list_size = 255,
    kl_VfsExtAttr_Listxattr_req_arena_size = 1024,
    kl_VfsExtAttr_Listxattr_res_arena_size = 255,
    kl_VfsExtAttr_Listxattr_req_handles = 0,
    kl_VfsExtAttr_Listxattr_res_handles = 0,
    kl_VfsExtAttr_Listxattr_err_handles = 0,
    kl_VfsExtAttr_Llistxattr_req_path_size = 1024,
    kl_VfsExtAttr_Llistxattr_res_list_size = 255,
    kl_VfsExtAttr_Llistxattr_req_arena_size =
    1024,
    kl_VfsExtAttr_Llistxattr_res_arena_size = 255,
    kl_VfsExtAttr_Llistxattr_req_handles = 0,
    kl_VfsExtAttr_Llistxattr_res_handles = 0,
    kl_VfsExtAttr_Llistxattr_err_handles = 0,
    kl_VfsExtAttr_Flistxattr_res_list_size = 255,
    kl_VfsExtAttr_Flistxattr_req_arena_size = 0,
    kl_VfsExtAttr_Flistxattr_res_arena_size = 255,
    kl_VfsExtAttr_Flistxattr_req_handles = 0,
    kl_VfsExtAttr_Flistxattr_res_handles = 0,
    kl_VfsExtAttr_Flistxattr_err_handles = 0,
    kl_VfsExtAttr_Removexattr_req_path_size =
    1024,
    kl_VfsExtAttr_Removexattr_req_name_size = 255,
    kl_VfsExtAttr_Removexattr_req_arena_size =
    1279,
    kl_VfsExtAttr_Removexattr_res_arena_size = 0,
    kl_VfsExtAttr_Removexattr_req_handles = 0,
    kl_VfsExtAttr_Removexattr_res_handles = 0,
    kl_VfsExtAttr_Removexattr_err_handles = 0,
    kl_VfsExtAttr_Lremovexattr_req_path_size =
    1024,
    kl_VfsExtAttr_Lremovexattr_req_name_size =
    255,
    kl_VfsExtAttr_Lremovexattr_req_arena_size =
    1279,
    kl_VfsExtAttr_Lremovexattr_res_arena_size = 0,
    kl_VfsExtAttr_Lremovexattr_req_handles = 0,
    kl_VfsExtAttr_Lremovexattr_res_handles = 0,
    kl_VfsExtAttr_Lremovexattr_err_handles = 0,
    kl_VfsExtAttr_Fremovexattr_req_name_size =
    255,
    kl_VfsExtAttr_Fremovexattr_req_arena_size =
    255,
    kl_VfsExtAttr_Fremovexattr_res_arena_size = 0,
    kl_VfsExtAttr_Fremovexattr_req_handles = 0,
    kl_VfsExtAttr_Fremovexattr_res_handles = 0,
    kl_VfsExtAttr_Fremovexattr_err_handles = 0,
    kl_VfsExtAttr_req_arena_size = 1534,
    kl_VfsExtAttr_res_arena_size = 255,
    kl_VfsExtAttr_arena_size = 1534,
    kl_VfsExtAttr_req_handles = 0,
    kl_VfsExtAttr_res_handles = 0,
    kl_VfsExtAttr_err_handles = 0,
} ;
typedef struct __nk_packed kl_VfsExtAttr_Setxattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t value;
            __nk_alignas(8) nk_uint64_t size;
            __nk_alignas(4) nk_sint32_t flags;
        } kl_VfsExtAttr_Setxattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Setxattr_res */
typedef struct kl_VfsExtAttr_Setxattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Setxattr_err;
typedef struct kl_VfsExtAttr_Setxattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Setxattr_err err_;
            } ;
        } kl_VfsExtAttr_Setxattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Setxattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Lsetxattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t value;
            __nk_alignas(8) nk_uint64_t size;
            __nk_alignas(4) nk_sint32_t flags;
        } kl_VfsExtAttr_Lsetxattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Lsetxattr_res */
typedef struct kl_VfsExtAttr_Lsetxattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Lsetxattr_err;
typedef struct kl_VfsExtAttr_Lsetxattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Lsetxattr_err err_;
            } ;
        } kl_VfsExtAttr_Lsetxattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Lsetxattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Fsetxattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t filedes;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t value;
            __nk_alignas(8) nk_uint64_t size;
            __nk_alignas(4) nk_sint32_t flags;
        } kl_VfsExtAttr_Fsetxattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Fsetxattr_res */
typedef struct kl_VfsExtAttr_Fsetxattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Fsetxattr_err;
typedef struct kl_VfsExtAttr_Fsetxattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Fsetxattr_err err_;
            } ;
        } kl_VfsExtAttr_Fsetxattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Fsetxattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Getxattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(8) nk_uint64_t size;
        } kl_VfsExtAttr_Getxattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Getxattr_res */
typedef struct kl_VfsExtAttr_Getxattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Getxattr_err;
typedef struct kl_VfsExtAttr_Getxattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t value;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t value;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Getxattr_err err_;
            } ;
        } kl_VfsExtAttr_Getxattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Getxattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Lgetxattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(8) nk_uint64_t size;
        } kl_VfsExtAttr_Lgetxattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Lgetxattr_res */
typedef struct kl_VfsExtAttr_Lgetxattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Lgetxattr_err;
typedef struct kl_VfsExtAttr_Lgetxattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t value;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t value;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Lgetxattr_err err_;
            } ;
        } kl_VfsExtAttr_Lgetxattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Lgetxattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Fgetxattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t filedes;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(8) nk_uint64_t size;
        } kl_VfsExtAttr_Fgetxattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Fgetxattr_res */
typedef struct kl_VfsExtAttr_Fgetxattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Fgetxattr_err;
typedef struct kl_VfsExtAttr_Fgetxattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t value;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t value;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Fgetxattr_err err_;
            } ;
        } kl_VfsExtAttr_Fgetxattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Fgetxattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Listxattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(8) nk_uint64_t size;
        } kl_VfsExtAttr_Listxattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Listxattr_res */
typedef struct kl_VfsExtAttr_Listxattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Listxattr_err;
typedef struct kl_VfsExtAttr_Listxattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t list;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t list;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Listxattr_err err_;
            } ;
        } kl_VfsExtAttr_Listxattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Listxattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Llistxattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(8) nk_uint64_t size;
        } kl_VfsExtAttr_Llistxattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Llistxattr_res */
typedef struct kl_VfsExtAttr_Llistxattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Llistxattr_err;
typedef struct kl_VfsExtAttr_Llistxattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t list;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t list;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Llistxattr_err err_;
            } ;
        } kl_VfsExtAttr_Llistxattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Llistxattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Flistxattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t filedes;
            __nk_alignas(8) nk_uint64_t size;
        } kl_VfsExtAttr_Flistxattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Flistxattr_res */
typedef struct kl_VfsExtAttr_Flistxattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Flistxattr_err;
typedef struct kl_VfsExtAttr_Flistxattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t list;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t list;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Flistxattr_err err_;
            } ;
        } kl_VfsExtAttr_Flistxattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Flistxattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Removexattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsExtAttr_Removexattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Removexattr_res */
typedef struct kl_VfsExtAttr_Removexattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Removexattr_err;
typedef struct kl_VfsExtAttr_Removexattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Removexattr_err err_;
            } ;
        } kl_VfsExtAttr_Removexattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Removexattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Lremovexattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsExtAttr_Lremovexattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Lremovexattr_res */
typedef struct kl_VfsExtAttr_Lremovexattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Lremovexattr_err;
typedef struct kl_VfsExtAttr_Lremovexattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Lremovexattr_err err_;
            } ;
        } kl_VfsExtAttr_Lremovexattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Lremovexattr_res */
typedef struct __nk_packed kl_VfsExtAttr_Fremovexattr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t filedes;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsExtAttr_Fremovexattr_req;
#pragma pack(push, 8) /* kl_VfsExtAttr_Fremovexattr_res */
typedef struct kl_VfsExtAttr_Fremovexattr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsExtAttr_Fremovexattr_err;
typedef struct kl_VfsExtAttr_Fremovexattr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsExtAttr_Fremovexattr_err err_;
            } ;
        } kl_VfsExtAttr_Fremovexattr_res;
#pragma pack(pop) /* kl_VfsExtAttr_Fremovexattr_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsExtAttr_Setxattr_mid kl_VfsExtAttr_Setxattr_mid
#define VfsExtAttr_Lsetxattr_mid kl_VfsExtAttr_Lsetxattr_mid
#define VfsExtAttr_Fsetxattr_mid kl_VfsExtAttr_Fsetxattr_mid
#define VfsExtAttr_Getxattr_mid kl_VfsExtAttr_Getxattr_mid
#define VfsExtAttr_Lgetxattr_mid kl_VfsExtAttr_Lgetxattr_mid
#define VfsExtAttr_Fgetxattr_mid kl_VfsExtAttr_Fgetxattr_mid
#define VfsExtAttr_Listxattr_mid kl_VfsExtAttr_Listxattr_mid
#define VfsExtAttr_Llistxattr_mid kl_VfsExtAttr_Llistxattr_mid
#define VfsExtAttr_Flistxattr_mid kl_VfsExtAttr_Flistxattr_mid
#define VfsExtAttr_Removexattr_mid kl_VfsExtAttr_Removexattr_mid
#define VfsExtAttr_Lremovexattr_mid kl_VfsExtAttr_Lremovexattr_mid
#define VfsExtAttr_Fremovexattr_mid kl_VfsExtAttr_Fremovexattr_mid
#define VfsExtAttr_mid_max kl_VfsExtAttr_mid_max
#define VfsExtAttr_Setxattr_req_path_size kl_VfsExtAttr_Setxattr_req_path_size
#define VfsExtAttr_Setxattr_req_name_size kl_VfsExtAttr_Setxattr_req_name_size
#define VfsExtAttr_Setxattr_req_value_size kl_VfsExtAttr_Setxattr_req_value_size
#define VfsExtAttr_Setxattr_req_arena_size kl_VfsExtAttr_Setxattr_req_arena_size
#define VfsExtAttr_Setxattr_res_arena_size kl_VfsExtAttr_Setxattr_res_arena_size
#define VfsExtAttr_Setxattr_req_handles kl_VfsExtAttr_Setxattr_req_handles
#define VfsExtAttr_Setxattr_res_handles kl_VfsExtAttr_Setxattr_res_handles
#define VfsExtAttr_Setxattr_err_handles kl_VfsExtAttr_Setxattr_err_handles
#define VfsExtAttr_Lsetxattr_req_path_size kl_VfsExtAttr_Lsetxattr_req_path_size
#define VfsExtAttr_Lsetxattr_req_name_size kl_VfsExtAttr_Lsetxattr_req_name_size
#define VfsExtAttr_Lsetxattr_req_value_size kl_VfsExtAttr_Lsetxattr_req_value_size
#define VfsExtAttr_Lsetxattr_req_arena_size kl_VfsExtAttr_Lsetxattr_req_arena_size
#define VfsExtAttr_Lsetxattr_res_arena_size kl_VfsExtAttr_Lsetxattr_res_arena_size
#define VfsExtAttr_Lsetxattr_req_handles kl_VfsExtAttr_Lsetxattr_req_handles
#define VfsExtAttr_Lsetxattr_res_handles kl_VfsExtAttr_Lsetxattr_res_handles
#define VfsExtAttr_Lsetxattr_err_handles kl_VfsExtAttr_Lsetxattr_err_handles
#define VfsExtAttr_Fsetxattr_req_name_size kl_VfsExtAttr_Fsetxattr_req_name_size
#define VfsExtAttr_Fsetxattr_req_value_size kl_VfsExtAttr_Fsetxattr_req_value_size
#define VfsExtAttr_Fsetxattr_req_arena_size kl_VfsExtAttr_Fsetxattr_req_arena_size
#define VfsExtAttr_Fsetxattr_res_arena_size kl_VfsExtAttr_Fsetxattr_res_arena_size
#define VfsExtAttr_Fsetxattr_req_handles kl_VfsExtAttr_Fsetxattr_req_handles
#define VfsExtAttr_Fsetxattr_res_handles kl_VfsExtAttr_Fsetxattr_res_handles
#define VfsExtAttr_Fsetxattr_err_handles kl_VfsExtAttr_Fsetxattr_err_handles
#define VfsExtAttr_Getxattr_req_path_size kl_VfsExtAttr_Getxattr_req_path_size
#define VfsExtAttr_Getxattr_req_name_size kl_VfsExtAttr_Getxattr_req_name_size
#define VfsExtAttr_Getxattr_res_value_size kl_VfsExtAttr_Getxattr_res_value_size
#define VfsExtAttr_Getxattr_req_arena_size kl_VfsExtAttr_Getxattr_req_arena_size
#define VfsExtAttr_Getxattr_res_arena_size kl_VfsExtAttr_Getxattr_res_arena_size
#define VfsExtAttr_Getxattr_req_handles kl_VfsExtAttr_Getxattr_req_handles
#define VfsExtAttr_Getxattr_res_handles kl_VfsExtAttr_Getxattr_res_handles
#define VfsExtAttr_Getxattr_err_handles kl_VfsExtAttr_Getxattr_err_handles
#define VfsExtAttr_Lgetxattr_req_path_size kl_VfsExtAttr_Lgetxattr_req_path_size
#define VfsExtAttr_Lgetxattr_req_name_size kl_VfsExtAttr_Lgetxattr_req_name_size
#define VfsExtAttr_Lgetxattr_res_value_size kl_VfsExtAttr_Lgetxattr_res_value_size
#define VfsExtAttr_Lgetxattr_req_arena_size kl_VfsExtAttr_Lgetxattr_req_arena_size
#define VfsExtAttr_Lgetxattr_res_arena_size kl_VfsExtAttr_Lgetxattr_res_arena_size
#define VfsExtAttr_Lgetxattr_req_handles kl_VfsExtAttr_Lgetxattr_req_handles
#define VfsExtAttr_Lgetxattr_res_handles kl_VfsExtAttr_Lgetxattr_res_handles
#define VfsExtAttr_Lgetxattr_err_handles kl_VfsExtAttr_Lgetxattr_err_handles
#define VfsExtAttr_Fgetxattr_req_name_size kl_VfsExtAttr_Fgetxattr_req_name_size
#define VfsExtAttr_Fgetxattr_res_value_size kl_VfsExtAttr_Fgetxattr_res_value_size
#define VfsExtAttr_Fgetxattr_req_arena_size kl_VfsExtAttr_Fgetxattr_req_arena_size
#define VfsExtAttr_Fgetxattr_res_arena_size kl_VfsExtAttr_Fgetxattr_res_arena_size
#define VfsExtAttr_Fgetxattr_req_handles kl_VfsExtAttr_Fgetxattr_req_handles
#define VfsExtAttr_Fgetxattr_res_handles kl_VfsExtAttr_Fgetxattr_res_handles
#define VfsExtAttr_Fgetxattr_err_handles kl_VfsExtAttr_Fgetxattr_err_handles
#define VfsExtAttr_Listxattr_req_path_size kl_VfsExtAttr_Listxattr_req_path_size
#define VfsExtAttr_Listxattr_res_list_size kl_VfsExtAttr_Listxattr_res_list_size
#define VfsExtAttr_Listxattr_req_arena_size kl_VfsExtAttr_Listxattr_req_arena_size
#define VfsExtAttr_Listxattr_res_arena_size kl_VfsExtAttr_Listxattr_res_arena_size
#define VfsExtAttr_Listxattr_req_handles kl_VfsExtAttr_Listxattr_req_handles
#define VfsExtAttr_Listxattr_res_handles kl_VfsExtAttr_Listxattr_res_handles
#define VfsExtAttr_Listxattr_err_handles kl_VfsExtAttr_Listxattr_err_handles
#define VfsExtAttr_Llistxattr_req_path_size kl_VfsExtAttr_Llistxattr_req_path_size
#define VfsExtAttr_Llistxattr_res_list_size kl_VfsExtAttr_Llistxattr_res_list_size
#define VfsExtAttr_Llistxattr_req_arena_size kl_VfsExtAttr_Llistxattr_req_arena_size
#define VfsExtAttr_Llistxattr_res_arena_size kl_VfsExtAttr_Llistxattr_res_arena_size
#define VfsExtAttr_Llistxattr_req_handles kl_VfsExtAttr_Llistxattr_req_handles
#define VfsExtAttr_Llistxattr_res_handles kl_VfsExtAttr_Llistxattr_res_handles
#define VfsExtAttr_Llistxattr_err_handles kl_VfsExtAttr_Llistxattr_err_handles
#define VfsExtAttr_Flistxattr_res_list_size kl_VfsExtAttr_Flistxattr_res_list_size
#define VfsExtAttr_Flistxattr_req_arena_size kl_VfsExtAttr_Flistxattr_req_arena_size
#define VfsExtAttr_Flistxattr_res_arena_size kl_VfsExtAttr_Flistxattr_res_arena_size
#define VfsExtAttr_Flistxattr_req_handles kl_VfsExtAttr_Flistxattr_req_handles
#define VfsExtAttr_Flistxattr_res_handles kl_VfsExtAttr_Flistxattr_res_handles
#define VfsExtAttr_Flistxattr_err_handles kl_VfsExtAttr_Flistxattr_err_handles
#define VfsExtAttr_Removexattr_req_path_size kl_VfsExtAttr_Removexattr_req_path_size
#define VfsExtAttr_Removexattr_req_name_size kl_VfsExtAttr_Removexattr_req_name_size
#define VfsExtAttr_Removexattr_req_arena_size kl_VfsExtAttr_Removexattr_req_arena_size
#define VfsExtAttr_Removexattr_res_arena_size kl_VfsExtAttr_Removexattr_res_arena_size
#define VfsExtAttr_Removexattr_req_handles kl_VfsExtAttr_Removexattr_req_handles
#define VfsExtAttr_Removexattr_res_handles kl_VfsExtAttr_Removexattr_res_handles
#define VfsExtAttr_Removexattr_err_handles kl_VfsExtAttr_Removexattr_err_handles
#define VfsExtAttr_Lremovexattr_req_path_size kl_VfsExtAttr_Lremovexattr_req_path_size
#define VfsExtAttr_Lremovexattr_req_name_size kl_VfsExtAttr_Lremovexattr_req_name_size
#define VfsExtAttr_Lremovexattr_req_arena_size kl_VfsExtAttr_Lremovexattr_req_arena_size
#define VfsExtAttr_Lremovexattr_res_arena_size kl_VfsExtAttr_Lremovexattr_res_arena_size
#define VfsExtAttr_Lremovexattr_req_handles kl_VfsExtAttr_Lremovexattr_req_handles
#define VfsExtAttr_Lremovexattr_res_handles kl_VfsExtAttr_Lremovexattr_res_handles
#define VfsExtAttr_Lremovexattr_err_handles kl_VfsExtAttr_Lremovexattr_err_handles
#define VfsExtAttr_Fremovexattr_req_name_size kl_VfsExtAttr_Fremovexattr_req_name_size
#define VfsExtAttr_Fremovexattr_req_arena_size kl_VfsExtAttr_Fremovexattr_req_arena_size
#define VfsExtAttr_Fremovexattr_res_arena_size kl_VfsExtAttr_Fremovexattr_res_arena_size
#define VfsExtAttr_Fremovexattr_req_handles kl_VfsExtAttr_Fremovexattr_req_handles
#define VfsExtAttr_Fremovexattr_res_handles kl_VfsExtAttr_Fremovexattr_res_handles
#define VfsExtAttr_Fremovexattr_err_handles kl_VfsExtAttr_Fremovexattr_err_handles
#define VfsExtAttr_req_arena_size kl_VfsExtAttr_req_arena_size
#define VfsExtAttr_res_arena_size kl_VfsExtAttr_res_arena_size
#define VfsExtAttr_arena_size kl_VfsExtAttr_arena_size
#define VfsExtAttr_req_handles kl_VfsExtAttr_req_handles
#define VfsExtAttr_res_handles kl_VfsExtAttr_res_handles
#define VfsExtAttr_err_handles kl_VfsExtAttr_err_handles
#define VfsExtAttr_Setxattr_req kl_VfsExtAttr_Setxattr_req
#define VfsExtAttr_Setxattr_res kl_VfsExtAttr_Setxattr_res
#define VfsExtAttr_Lsetxattr_req kl_VfsExtAttr_Lsetxattr_req
#define VfsExtAttr_Lsetxattr_res kl_VfsExtAttr_Lsetxattr_res
#define VfsExtAttr_Fsetxattr_req kl_VfsExtAttr_Fsetxattr_req
#define VfsExtAttr_Fsetxattr_res kl_VfsExtAttr_Fsetxattr_res
#define VfsExtAttr_Getxattr_req kl_VfsExtAttr_Getxattr_req
#define VfsExtAttr_Getxattr_res kl_VfsExtAttr_Getxattr_res
#define VfsExtAttr_Lgetxattr_req kl_VfsExtAttr_Lgetxattr_req
#define VfsExtAttr_Lgetxattr_res kl_VfsExtAttr_Lgetxattr_res
#define VfsExtAttr_Fgetxattr_req kl_VfsExtAttr_Fgetxattr_req
#define VfsExtAttr_Fgetxattr_res kl_VfsExtAttr_Fgetxattr_res
#define VfsExtAttr_Listxattr_req kl_VfsExtAttr_Listxattr_req
#define VfsExtAttr_Listxattr_res kl_VfsExtAttr_Listxattr_res
#define VfsExtAttr_Llistxattr_req kl_VfsExtAttr_Llistxattr_req
#define VfsExtAttr_Llistxattr_res kl_VfsExtAttr_Llistxattr_res
#define VfsExtAttr_Flistxattr_req kl_VfsExtAttr_Flistxattr_req
#define VfsExtAttr_Flistxattr_res kl_VfsExtAttr_Flistxattr_res
#define VfsExtAttr_Removexattr_req kl_VfsExtAttr_Removexattr_req
#define VfsExtAttr_Removexattr_res kl_VfsExtAttr_Removexattr_res
#define VfsExtAttr_Lremovexattr_req kl_VfsExtAttr_Lremovexattr_req
#define VfsExtAttr_Lremovexattr_res kl_VfsExtAttr_Lremovexattr_res
#define VfsExtAttr_Fremovexattr_req kl_VfsExtAttr_Fremovexattr_req
#define VfsExtAttr_Fremovexattr_res kl_VfsExtAttr_Fremovexattr_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsExtAttr__INTERFACE__ */

#ifndef __kl__VfsFilesystem__INTERFACE__
#define __kl__VfsFilesystem__INTERFACE__
enum {
    kl_VfsFilesystem_ClientConnected_mid,
    kl_VfsFilesystem_ClientDisconnected_mid,
    kl_VfsFilesystem_DisconnectAllClients_mid,
    kl_VfsFilesystem_Mount_mid,
    kl_VfsFilesystem_Unmount_mid,
    kl_VfsFilesystem_Unlink_mid,
    kl_VfsFilesystem_Unlinkat_mid,
    kl_VfsFilesystem_Link_mid,
    kl_VfsFilesystem_Linkat_mid,
    kl_VfsFilesystem_Symlink_mid,
    kl_VfsFilesystem_Symlinkat_mid,
    kl_VfsFilesystem_Ftruncate_mid,
    kl_VfsFilesystem_Rename_mid,
    kl_VfsFilesystem_Renameat_mid,
    kl_VfsFilesystem_Rmdir_mid,
    kl_VfsFilesystem_Mkdir_mid,
    kl_VfsFilesystem_Mkdirat_mid,
    kl_VfsFilesystem_Chdir_mid,
    kl_VfsFilesystem_Chmod_mid,
    kl_VfsFilesystem_Fchmod_mid,
    kl_VfsFilesystem_Fchmodat_mid,
    kl_VfsFilesystem_Chroot_mid,
    kl_VfsFilesystem_Open_mid,
    kl_VfsFilesystem_Openat_mid,
    kl_VfsFilesystem_Read_mid,
    kl_VfsFilesystem_Readv_mid,
    kl_VfsFilesystem_Pread_mid,
    kl_VfsFilesystem_Write_mid,
    kl_VfsFilesystem_Sendfile_mid,
    kl_VfsFilesystem_Writev_mid,
    kl_VfsFilesystem_Pwrite_mid,
    kl_VfsFilesystem_Lseek_mid,
    kl_VfsFilesystem_Stat_mid,
    kl_VfsFilesystem_Lstat_mid,
    kl_VfsFilesystem_Fstat_mid,
    kl_VfsFilesystem_Fstatat_mid,
    kl_VfsFilesystem_Fsync_mid,
    kl_VfsFilesystem_Fdatasync_mid,
    kl_VfsFilesystem_Close_mid,
    kl_VfsFilesystem_StatVfs_mid,
    kl_VfsFilesystem_FStatVfs_mid,
    kl_VfsFilesystem_Pipe_mid,
    kl_VfsFilesystem_Getdents_mid,
    kl_VfsFilesystem_Socket_mid,
    kl_VfsFilesystem_Socketpair_mid,
    kl_VfsFilesystem_Bind_mid,
    kl_VfsFilesystem_Listen_mid,
    kl_VfsFilesystem_Connect_mid,
    kl_VfsFilesystem_Accept_mid,
    kl_VfsFilesystem_Poll_mid,
    kl_VfsFilesystem_Shutdown_mid,
    kl_VfsFilesystem_Getnameinfo_mid,
    kl_VfsFilesystem_Getaddrinfo_mid,
    kl_VfsFilesystem_Getifaddrs_mid,
    kl_VfsFilesystem_Getpeername_mid,
    kl_VfsFilesystem_Getsockname_mid,
    kl_VfsFilesystem_Gethostbyname_mid,
    kl_VfsFilesystem_Getnetbyname_mid,
    kl_VfsFilesystem_Getprotobyname_mid,
    kl_VfsFilesystem_Getprotobynumber_mid,
    kl_VfsFilesystem_Getsockopt_mid,
    kl_VfsFilesystem_Setsockopt_mid,
    kl_VfsFilesystem_Recv_mid,
    kl_VfsFilesystem_Recvfrom_mid,
    kl_VfsFilesystem_Recvmsg_mid,
    kl_VfsFilesystem_Send_mid,
    kl_VfsFilesystem_Sendto_mid,
    kl_VfsFilesystem_Sendmsg_mid,
    kl_VfsFilesystem_Synchronize_mid,
    kl_VfsFilesystem_Fcntl_mid,
    kl_VfsFilesystem_Ioctl_mid,
    kl_VfsFilesystem_Futimens_mid,
    kl_VfsFilesystem_Utimensat_mid,
    kl_VfsFilesystem_mid_max,
} ;
enum {
    kl_VfsFilesystem_ClientConnected_req_connectionId_size =
    64,
    kl_VfsFilesystem_ClientConnected_req_arena_size =
    64,
    kl_VfsFilesystem_ClientConnected_res_arena_size =
    0,
    kl_VfsFilesystem_ClientConnected_req_handles =
    0,
    kl_VfsFilesystem_ClientConnected_res_handles =
    0,
    kl_VfsFilesystem_ClientConnected_err_handles =
    0,
    kl_VfsFilesystem_ClientDisconnected_req_arena_size =
    0,
    kl_VfsFilesystem_ClientDisconnected_res_arena_size =
    0,
    kl_VfsFilesystem_ClientDisconnected_req_handles =
    0,
    kl_VfsFilesystem_ClientDisconnected_res_handles =
    0,
    kl_VfsFilesystem_ClientDisconnected_err_handles =
    0,
    kl_VfsFilesystem_DisconnectAllClients_req_arena_size =
    0,
    kl_VfsFilesystem_DisconnectAllClients_res_arena_size =
    0,
    kl_VfsFilesystem_DisconnectAllClients_req_handles =
    0,
    kl_VfsFilesystem_DisconnectAllClients_res_handles =
    0,
    kl_VfsFilesystem_DisconnectAllClients_err_handles =
    0,
    kl_VfsFilesystem_Mount_req_devname_size =
    1024,
    kl_VfsFilesystem_Mount_req_path_size = 1024,
    kl_VfsFilesystem_Mount_req_fstype_size = 1024,
    kl_VfsFilesystem_Mount_req_data_size = 1024,
    kl_VfsFilesystem_Mount_req_arena_size = 4096,
    kl_VfsFilesystem_Mount_res_arena_size = 0,
    kl_VfsFilesystem_Mount_req_handles = 0,
    kl_VfsFilesystem_Mount_res_handles = 0,
    kl_VfsFilesystem_Mount_err_handles = 0,
    kl_VfsFilesystem_Unmount_req_path_size = 1024,
    kl_VfsFilesystem_Unmount_req_arena_size =
    1024,
    kl_VfsFilesystem_Unmount_res_arena_size = 0,
    kl_VfsFilesystem_Unmount_req_handles = 0,
    kl_VfsFilesystem_Unmount_res_handles = 0,
    kl_VfsFilesystem_Unmount_err_handles = 0,
    kl_VfsFilesystem_Unlink_req_path_size = 1024,
    kl_VfsFilesystem_Unlink_req_arena_size = 1024,
    kl_VfsFilesystem_Unlink_res_arena_size = 0,
    kl_VfsFilesystem_Unlink_req_handles = 0,
    kl_VfsFilesystem_Unlink_res_handles = 0,
    kl_VfsFilesystem_Unlink_err_handles = 0,
    kl_VfsFilesystem_Unlinkat_req_path_size =
    1024,
    kl_VfsFilesystem_Unlinkat_req_arena_size =
    1024,
    kl_VfsFilesystem_Unlinkat_res_arena_size = 0,
    kl_VfsFilesystem_Unlinkat_req_handles = 0,
    kl_VfsFilesystem_Unlinkat_res_handles = 0,
    kl_VfsFilesystem_Unlinkat_err_handles = 0,
    kl_VfsFilesystem_Link_req_oldpath_size = 1024,
    kl_VfsFilesystem_Link_req_newpath_size = 1024,
    kl_VfsFilesystem_Link_req_arena_size = 2048,
    kl_VfsFilesystem_Link_res_arena_size = 0,
    kl_VfsFilesystem_Link_req_handles = 0,
    kl_VfsFilesystem_Link_res_handles = 0,
    kl_VfsFilesystem_Link_err_handles = 0,
    kl_VfsFilesystem_Linkat_req_oldpath_size =
    1024,
    kl_VfsFilesystem_Linkat_req_newpath_size =
    1024,
    kl_VfsFilesystem_Linkat_req_arena_size = 2048,
    kl_VfsFilesystem_Linkat_res_arena_size = 0,
    kl_VfsFilesystem_Linkat_req_handles = 0,
    kl_VfsFilesystem_Linkat_res_handles = 0,
    kl_VfsFilesystem_Linkat_err_handles = 0,
    kl_VfsFilesystem_Symlink_req_oldpath_size =
    1024,
    kl_VfsFilesystem_Symlink_req_newpath_size =
    1024,
    kl_VfsFilesystem_Symlink_req_arena_size =
    2048,
    kl_VfsFilesystem_Symlink_res_arena_size = 0,
    kl_VfsFilesystem_Symlink_req_handles = 0,
    kl_VfsFilesystem_Symlink_res_handles = 0,
    kl_VfsFilesystem_Symlink_err_handles = 0,
    kl_VfsFilesystem_Symlinkat_req_oldpath_size =
    1024,
    kl_VfsFilesystem_Symlinkat_req_newpath_size =
    1024,
    kl_VfsFilesystem_Symlinkat_req_arena_size =
    2048,
    kl_VfsFilesystem_Symlinkat_res_arena_size = 0,
    kl_VfsFilesystem_Symlinkat_req_handles = 0,
    kl_VfsFilesystem_Symlinkat_res_handles = 0,
    kl_VfsFilesystem_Symlinkat_err_handles = 0,
    kl_VfsFilesystem_Ftruncate_req_arena_size = 0,
    kl_VfsFilesystem_Ftruncate_res_arena_size = 0,
    kl_VfsFilesystem_Ftruncate_req_handles = 0,
    kl_VfsFilesystem_Ftruncate_res_handles = 0,
    kl_VfsFilesystem_Ftruncate_err_handles = 0,
    kl_VfsFilesystem_Rename_req_oldpath_size =
    1024,
    kl_VfsFilesystem_Rename_req_newpath_size =
    1024,
    kl_VfsFilesystem_Rename_req_arena_size = 2048,
    kl_VfsFilesystem_Rename_res_arena_size = 0,
    kl_VfsFilesystem_Rename_req_handles = 0,
    kl_VfsFilesystem_Rename_res_handles = 0,
    kl_VfsFilesystem_Rename_err_handles = 0,
    kl_VfsFilesystem_Renameat_req_oldpath_size =
    1024,
    kl_VfsFilesystem_Renameat_req_newpath_size =
    1024,
    kl_VfsFilesystem_Renameat_req_arena_size =
    2048,
    kl_VfsFilesystem_Renameat_res_arena_size = 0,
    kl_VfsFilesystem_Renameat_req_handles = 0,
    kl_VfsFilesystem_Renameat_res_handles = 0,
    kl_VfsFilesystem_Renameat_err_handles = 0,
    kl_VfsFilesystem_Rmdir_req_path_size = 1024,
    kl_VfsFilesystem_Rmdir_req_arena_size = 1024,
    kl_VfsFilesystem_Rmdir_res_arena_size = 0,
    kl_VfsFilesystem_Rmdir_req_handles = 0,
    kl_VfsFilesystem_Rmdir_res_handles = 0,
    kl_VfsFilesystem_Rmdir_err_handles = 0,
    kl_VfsFilesystem_Mkdir_req_path_size = 1024,
    kl_VfsFilesystem_Mkdir_req_arena_size = 1024,
    kl_VfsFilesystem_Mkdir_res_arena_size = 0,
    kl_VfsFilesystem_Mkdir_req_handles = 0,
    kl_VfsFilesystem_Mkdir_res_handles = 0,
    kl_VfsFilesystem_Mkdir_err_handles = 0,
    kl_VfsFilesystem_Mkdirat_req_path_size = 1024,
    kl_VfsFilesystem_Mkdirat_req_arena_size =
    1024,
    kl_VfsFilesystem_Mkdirat_res_arena_size = 0,
    kl_VfsFilesystem_Mkdirat_req_handles = 0,
    kl_VfsFilesystem_Mkdirat_res_handles = 0,
    kl_VfsFilesystem_Mkdirat_err_handles = 0,
    kl_VfsFilesystem_Chdir_req_path_size = 1024,
    kl_VfsFilesystem_Chdir_req_arena_size = 1024,
    kl_VfsFilesystem_Chdir_res_arena_size = 0,
    kl_VfsFilesystem_Chdir_req_handles = 0,
    kl_VfsFilesystem_Chdir_res_handles = 0,
    kl_VfsFilesystem_Chdir_err_handles = 0,
    kl_VfsFilesystem_Chmod_req_path_size = 1024,
    kl_VfsFilesystem_Chmod_req_arena_size = 1024,
    kl_VfsFilesystem_Chmod_res_arena_size = 0,
    kl_VfsFilesystem_Chmod_req_handles = 0,
    kl_VfsFilesystem_Chmod_res_handles = 0,
    kl_VfsFilesystem_Chmod_err_handles = 0,
    kl_VfsFilesystem_Fchmod_req_arena_size = 0,
    kl_VfsFilesystem_Fchmod_res_arena_size = 0,
    kl_VfsFilesystem_Fchmod_req_handles = 0,
    kl_VfsFilesystem_Fchmod_res_handles = 0,
    kl_VfsFilesystem_Fchmod_err_handles = 0,
    kl_VfsFilesystem_Fchmodat_req_path_size =
    1024,
    kl_VfsFilesystem_Fchmodat_req_arena_size =
    1024,
    kl_VfsFilesystem_Fchmodat_res_arena_size = 0,
    kl_VfsFilesystem_Fchmodat_req_handles = 0,
    kl_VfsFilesystem_Fchmodat_res_handles = 0,
    kl_VfsFilesystem_Fchmodat_err_handles = 0,
    kl_VfsFilesystem_Chroot_req_path_size = 1024,
    kl_VfsFilesystem_Chroot_req_arena_size = 1024,
    kl_VfsFilesystem_Chroot_res_arena_size = 0,
    kl_VfsFilesystem_Chroot_req_handles = 0,
    kl_VfsFilesystem_Chroot_res_handles = 0,
    kl_VfsFilesystem_Chroot_err_handles = 0,
    kl_VfsFilesystem_Open_req_path_size = 1024,
    kl_VfsFilesystem_Open_req_arena_size = 1024,
    kl_VfsFilesystem_Open_res_arena_size = 0,
    kl_VfsFilesystem_Open_req_handles = 0,
    kl_VfsFilesystem_Open_res_handles = 0,
    kl_VfsFilesystem_Open_err_handles = 0,
    kl_VfsFilesystem_Openat_req_path_size = 1024,
    kl_VfsFilesystem_Openat_req_arena_size = 1024,
    kl_VfsFilesystem_Openat_res_arena_size = 0,
    kl_VfsFilesystem_Openat_req_handles = 0,
    kl_VfsFilesystem_Openat_res_handles = 0,
    kl_VfsFilesystem_Openat_err_handles = 0,
    kl_VfsFilesystem_Read_res_buf_size = 65536,
    kl_VfsFilesystem_Read_req_arena_size = 0,
    kl_VfsFilesystem_Read_res_arena_size = 65536,
    kl_VfsFilesystem_Read_req_handles = 0,
    kl_VfsFilesystem_Read_res_handles = 0,
    kl_VfsFilesystem_Read_err_handles = 0,
    kl_VfsFilesystem_Readv_req_iovlens_size = 10,
    kl_VfsFilesystem_Readv_res_iovs_size = 10,
    kl_VfsFilesystem_Readv_res_iovs_elem_iovData_size =
    65536,
    kl_VfsFilesystem_Readv_req_arena_size = 80,
    kl_VfsFilesystem_Readv_res_arena_size =
    655440,
    kl_VfsFilesystem_Readv_req_handles = 0,
    kl_VfsFilesystem_Readv_res_handles = 0,
    kl_VfsFilesystem_Readv_err_handles = 0,
    kl_VfsFilesystem_Pread_res_buf_size = 65536,
    kl_VfsFilesystem_Pread_req_arena_size = 0,
    kl_VfsFilesystem_Pread_res_arena_size = 65536,
    kl_VfsFilesystem_Pread_req_handles = 0,
    kl_VfsFilesystem_Pread_res_handles = 0,
    kl_VfsFilesystem_Pread_err_handles = 0,
    kl_VfsFilesystem_Write_req_buf_size = 65536,
    kl_VfsFilesystem_Write_req_arena_size = 65536,
    kl_VfsFilesystem_Write_res_arena_size = 0,
    kl_VfsFilesystem_Write_req_handles = 0,
    kl_VfsFilesystem_Write_res_handles = 0,
    kl_VfsFilesystem_Write_err_handles = 0,
    kl_VfsFilesystem_Sendfile_req_arena_size = 0,
    kl_VfsFilesystem_Sendfile_res_arena_size = 0,
    kl_VfsFilesystem_Sendfile_req_handles = 0,
    kl_VfsFilesystem_Sendfile_res_handles = 0,
    kl_VfsFilesystem_Sendfile_err_handles = 0,
    kl_VfsFilesystem_Writev_req_iovs_size = 10,
    kl_VfsFilesystem_Writev_req_iovs_elem_iovData_size =
    65536,
    kl_VfsFilesystem_Writev_req_arena_size =
    655440,
    kl_VfsFilesystem_Writev_res_arena_size = 0,
    kl_VfsFilesystem_Writev_req_handles = 0,
    kl_VfsFilesystem_Writev_res_handles = 0,
    kl_VfsFilesystem_Writev_err_handles = 0,
    kl_VfsFilesystem_Pwrite_req_buf_size = 65536,
    kl_VfsFilesystem_Pwrite_req_arena_size =
    65536,
    kl_VfsFilesystem_Pwrite_res_arena_size = 0,
    kl_VfsFilesystem_Pwrite_req_handles = 0,
    kl_VfsFilesystem_Pwrite_res_handles = 0,
    kl_VfsFilesystem_Pwrite_err_handles = 0,
    kl_VfsFilesystem_Lseek_req_arena_size = 0,
    kl_VfsFilesystem_Lseek_res_arena_size = 0,
    kl_VfsFilesystem_Lseek_req_handles = 0,
    kl_VfsFilesystem_Lseek_res_handles = 0,
    kl_VfsFilesystem_Lseek_err_handles = 0,
    kl_VfsFilesystem_Stat_req_pathname_size =
    1024,
    kl_VfsFilesystem_Stat_req_arena_size = 1024,
    kl_VfsFilesystem_Stat_res_arena_size = 0,
    kl_VfsFilesystem_Stat_req_handles = 0,
    kl_VfsFilesystem_Stat_res_handles = 0,
    kl_VfsFilesystem_Stat_err_handles = 0,
    kl_VfsFilesystem_Lstat_req_pathname_size =
    1024,
    kl_VfsFilesystem_Lstat_req_arena_size = 1024,
    kl_VfsFilesystem_Lstat_res_arena_size = 0,
    kl_VfsFilesystem_Lstat_req_handles = 0,
    kl_VfsFilesystem_Lstat_res_handles = 0,
    kl_VfsFilesystem_Lstat_err_handles = 0,
    kl_VfsFilesystem_Fstat_req_arena_size = 0,
    kl_VfsFilesystem_Fstat_res_arena_size = 0,
    kl_VfsFilesystem_Fstat_req_handles = 0,
    kl_VfsFilesystem_Fstat_res_handles = 0,
    kl_VfsFilesystem_Fstat_err_handles = 0,
    kl_VfsFilesystem_Fstatat_req_pathname_size =
    1024,
    kl_VfsFilesystem_Fstatat_req_arena_size =
    1024,
    kl_VfsFilesystem_Fstatat_res_arena_size = 0,
    kl_VfsFilesystem_Fstatat_req_handles = 0,
    kl_VfsFilesystem_Fstatat_res_handles = 0,
    kl_VfsFilesystem_Fstatat_err_handles = 0,
    kl_VfsFilesystem_Fsync_req_arena_size = 0,
    kl_VfsFilesystem_Fsync_res_arena_size = 0,
    kl_VfsFilesystem_Fsync_req_handles = 0,
    kl_VfsFilesystem_Fsync_res_handles = 0,
    kl_VfsFilesystem_Fsync_err_handles = 0,
    kl_VfsFilesystem_Fdatasync_req_arena_size = 0,
    kl_VfsFilesystem_Fdatasync_res_arena_size = 0,
    kl_VfsFilesystem_Fdatasync_req_handles = 0,
    kl_VfsFilesystem_Fdatasync_res_handles = 0,
    kl_VfsFilesystem_Fdatasync_err_handles = 0,
    kl_VfsFilesystem_Close_req_arena_size = 0,
    kl_VfsFilesystem_Close_res_arena_size = 0,
    kl_VfsFilesystem_Close_req_handles = 0,
    kl_VfsFilesystem_Close_res_handles = 0,
    kl_VfsFilesystem_Close_err_handles = 0,
    kl_VfsFilesystem_StatVfs_req_pathname_size =
    1024,
    kl_VfsFilesystem_StatVfs_req_arena_size =
    1024,
    kl_VfsFilesystem_StatVfs_res_arena_size = 0,
    kl_VfsFilesystem_StatVfs_req_handles = 0,
    kl_VfsFilesystem_StatVfs_res_handles = 0,
    kl_VfsFilesystem_StatVfs_err_handles = 0,
    kl_VfsFilesystem_FStatVfs_req_arena_size = 0,
    kl_VfsFilesystem_FStatVfs_res_arena_size = 0,
    kl_VfsFilesystem_FStatVfs_req_handles = 0,
    kl_VfsFilesystem_FStatVfs_res_handles = 0,
    kl_VfsFilesystem_FStatVfs_err_handles = 0,
    kl_VfsFilesystem_Pipe_req_arena_size = 0,
    kl_VfsFilesystem_Pipe_res_arena_size = 0,
    kl_VfsFilesystem_Pipe_req_handles = 0,
    kl_VfsFilesystem_Pipe_res_handles = 0,
    kl_VfsFilesystem_Pipe_err_handles = 0,
    kl_VfsFilesystem_Getdents_res_buf_size =
    65536,
    kl_VfsFilesystem_Getdents_req_arena_size = 0,
    kl_VfsFilesystem_Getdents_res_arena_size =
    65536,
    kl_VfsFilesystem_Getdents_req_handles = 0,
    kl_VfsFilesystem_Getdents_res_handles = 0,
    kl_VfsFilesystem_Getdents_err_handles = 0,
    kl_VfsFilesystem_Socket_req_arena_size = 0,
    kl_VfsFilesystem_Socket_res_arena_size = 0,
    kl_VfsFilesystem_Socket_req_handles = 0,
    kl_VfsFilesystem_Socket_res_handles = 0,
    kl_VfsFilesystem_Socket_err_handles = 0,
    kl_VfsFilesystem_Socketpair_req_arena_size =
    0,
    kl_VfsFilesystem_Socketpair_res_arena_size =
    0,
    kl_VfsFilesystem_Socketpair_req_handles = 0,
    kl_VfsFilesystem_Socketpair_res_handles = 0,
    kl_VfsFilesystem_Socketpair_err_handles = 0,
    kl_VfsFilesystem_Bind_req_addr_size = 128,
    kl_VfsFilesystem_Bind_req_arena_size = 128,
    kl_VfsFilesystem_Bind_res_arena_size = 0,
    kl_VfsFilesystem_Bind_req_handles = 0,
    kl_VfsFilesystem_Bind_res_handles = 0,
    kl_VfsFilesystem_Bind_err_handles = 0,
    kl_VfsFilesystem_Listen_req_arena_size = 0,
    kl_VfsFilesystem_Listen_res_arena_size = 0,
    kl_VfsFilesystem_Listen_req_handles = 0,
    kl_VfsFilesystem_Listen_res_handles = 0,
    kl_VfsFilesystem_Listen_err_handles = 0,
    kl_VfsFilesystem_Connect_req_addr_size = 128,
    kl_VfsFilesystem_Connect_req_arena_size = 128,
    kl_VfsFilesystem_Connect_res_arena_size = 0,
    kl_VfsFilesystem_Connect_req_handles = 0,
    kl_VfsFilesystem_Connect_res_handles = 0,
    kl_VfsFilesystem_Connect_err_handles = 0,
    kl_VfsFilesystem_Accept_res_addr_size = 128,
    kl_VfsFilesystem_Accept_req_arena_size = 0,
    kl_VfsFilesystem_Accept_res_arena_size = 128,
    kl_VfsFilesystem_Accept_req_handles = 0,
    kl_VfsFilesystem_Accept_res_handles = 0,
    kl_VfsFilesystem_Accept_err_handles = 0,
    kl_VfsFilesystem_Poll_req_fds_size = 1024,
    kl_VfsFilesystem_Poll_res_outFds_size = 1024,
    kl_VfsFilesystem_Poll_req_arena_size = 1024,
    kl_VfsFilesystem_Poll_res_arena_size = 1024,
    kl_VfsFilesystem_Poll_req_handles = 0,
    kl_VfsFilesystem_Poll_res_handles = 0,
    kl_VfsFilesystem_Poll_err_handles = 0,
    kl_VfsFilesystem_Shutdown_req_arena_size = 0,
    kl_VfsFilesystem_Shutdown_res_arena_size = 0,
    kl_VfsFilesystem_Shutdown_req_handles = 0,
    kl_VfsFilesystem_Shutdown_res_handles = 0,
    kl_VfsFilesystem_Shutdown_err_handles = 0,
    kl_VfsFilesystem_Getnameinfo_req_sa_size =
    128,
    kl_VfsFilesystem_Getnameinfo_res_node_size =
    1024,
    kl_VfsFilesystem_Getnameinfo_res_service_size =
    1024,
    kl_VfsFilesystem_Getnameinfo_req_arena_size =
    128,
    kl_VfsFilesystem_Getnameinfo_res_arena_size =
    2048,
    kl_VfsFilesystem_Getnameinfo_req_handles = 0,
    kl_VfsFilesystem_Getnameinfo_res_handles = 0,
    kl_VfsFilesystem_Getnameinfo_err_handles = 0,
    kl_VfsFilesystem_Getaddrinfo_req_host_size =
    1024,
    kl_VfsFilesystem_Getaddrinfo_req_serv_size =
    1024,
    kl_VfsFilesystem_Getaddrinfo_req_hints_size =
    2048,
    kl_VfsFilesystem_Getaddrinfo_res_info_size =
    2048,
    kl_VfsFilesystem_Getaddrinfo_req_arena_size =
    4096,
    kl_VfsFilesystem_Getaddrinfo_res_arena_size =
    2048,
    kl_VfsFilesystem_Getaddrinfo_req_handles = 0,
    kl_VfsFilesystem_Getaddrinfo_res_handles = 0,
    kl_VfsFilesystem_Getaddrinfo_err_handles = 0,
    kl_VfsFilesystem_Getifaddrs_res_res_size = 16,
    kl_VfsFilesystem_Getifaddrs_res_res_elem_ifaName_size =
    16,
    kl_VfsFilesystem_Getifaddrs_res_res_elem_ifaAddr_size =
    128,
    kl_VfsFilesystem_Getifaddrs_res_res_elem_ifaNetmask_size =
    128,
    kl_VfsFilesystem_Getifaddrs_res_res_elem_ifaDstaddr_size =
    128,
    kl_VfsFilesystem_Getifaddrs_req_arena_size =
    0,
    kl_VfsFilesystem_Getifaddrs_res_arena_size =
    6976,
    kl_VfsFilesystem_Getifaddrs_req_handles = 0,
    kl_VfsFilesystem_Getifaddrs_res_handles = 0,
    kl_VfsFilesystem_Getifaddrs_err_handles = 0,
    kl_VfsFilesystem_Getpeername_res_addr_size =
    128,
    kl_VfsFilesystem_Getpeername_req_arena_size =
    0,
    kl_VfsFilesystem_Getpeername_res_arena_size =
    128,
    kl_VfsFilesystem_Getpeername_req_handles = 0,
    kl_VfsFilesystem_Getpeername_res_handles = 0,
    kl_VfsFilesystem_Getpeername_err_handles = 0,
    kl_VfsFilesystem_Getsockname_res_addr_size =
    128,
    kl_VfsFilesystem_Getsockname_req_arena_size =
    0,
    kl_VfsFilesystem_Getsockname_res_arena_size =
    128,
    kl_VfsFilesystem_Getsockname_req_handles = 0,
    kl_VfsFilesystem_Getsockname_res_handles = 0,
    kl_VfsFilesystem_Getsockname_err_handles = 0,
    kl_VfsFilesystem_Gethostbyname_req_name_size =
    1024,
    kl_VfsFilesystem_Gethostbyname_res_hostent_size =
    256,
    kl_VfsFilesystem_Gethostbyname_req_arena_size =
    1024,
    kl_VfsFilesystem_Gethostbyname_res_arena_size =
    256,
    kl_VfsFilesystem_Gethostbyname_req_handles =
    0,
    kl_VfsFilesystem_Gethostbyname_res_handles =
    0,
    kl_VfsFilesystem_Gethostbyname_err_handles =
    0,
    kl_VfsFilesystem_Getnetbyname_req_name_size =
    256,
    kl_VfsFilesystem_Getnetbyname_res_netent_name_size =
    256,
    kl_VfsFilesystem_Getnetbyname_res_netent_aliases_size =
    2048,
    kl_VfsFilesystem_Getnetbyname_req_arena_size =
    256,
    kl_VfsFilesystem_Getnetbyname_res_arena_size =
    2304,
    kl_VfsFilesystem_Getnetbyname_req_handles = 0,
    kl_VfsFilesystem_Getnetbyname_res_handles = 0,
    kl_VfsFilesystem_Getnetbyname_err_handles = 0,
    kl_VfsFilesystem_Getprotobyname_req_name_size =
    256,
    kl_VfsFilesystem_Getprotobyname_res_protoent_name_size =
    256,
    kl_VfsFilesystem_Getprotobyname_res_protoent_aliases_size =
    2048,
    kl_VfsFilesystem_Getprotobyname_req_arena_size =
    256,
    kl_VfsFilesystem_Getprotobyname_res_arena_size =
    2304,
    kl_VfsFilesystem_Getprotobyname_req_handles =
    0,
    kl_VfsFilesystem_Getprotobyname_res_handles =
    0,
    kl_VfsFilesystem_Getprotobyname_err_handles =
    0,
    kl_VfsFilesystem_Getprotobynumber_res_protoent_name_size =
    256,
    kl_VfsFilesystem_Getprotobynumber_res_protoent_aliases_size =
    2048,
    kl_VfsFilesystem_Getprotobynumber_req_arena_size =
    0,
    kl_VfsFilesystem_Getprotobynumber_res_arena_size =
    2304,
    kl_VfsFilesystem_Getprotobynumber_req_handles =
    0,
    kl_VfsFilesystem_Getprotobynumber_res_handles =
    0,
    kl_VfsFilesystem_Getprotobynumber_err_handles =
    0,
    kl_VfsFilesystem_Getsockopt_res_optval_size =
    2048,
    kl_VfsFilesystem_Getsockopt_req_arena_size =
    0,
    kl_VfsFilesystem_Getsockopt_res_arena_size =
    2048,
    kl_VfsFilesystem_Getsockopt_req_handles = 0,
    kl_VfsFilesystem_Getsockopt_res_handles = 0,
    kl_VfsFilesystem_Getsockopt_err_handles = 0,
    kl_VfsFilesystem_Setsockopt_req_optval_size =
    2048,
    kl_VfsFilesystem_Setsockopt_req_arena_size =
    2048,
    kl_VfsFilesystem_Setsockopt_res_arena_size =
    0,
    kl_VfsFilesystem_Setsockopt_req_handles = 0,
    kl_VfsFilesystem_Setsockopt_res_handles = 0,
    kl_VfsFilesystem_Setsockopt_err_handles = 0,
    kl_VfsFilesystem_Recv_res_buf_size = 65536,
    kl_VfsFilesystem_Recv_req_arena_size = 0,
    kl_VfsFilesystem_Recv_res_arena_size = 65536,
    kl_VfsFilesystem_Recv_req_handles = 0,
    kl_VfsFilesystem_Recv_res_handles = 0,
    kl_VfsFilesystem_Recv_err_handles = 0,
    kl_VfsFilesystem_Recvfrom_res_buf_size =
    65536,
    kl_VfsFilesystem_Recvfrom_res_srcAddr_size =
    128,
    kl_VfsFilesystem_Recvfrom_req_arena_size = 0,
    kl_VfsFilesystem_Recvfrom_res_arena_size =
    65664,
    kl_VfsFilesystem_Recvfrom_req_handles = 0,
    kl_VfsFilesystem_Recvfrom_res_handles = 0,
    kl_VfsFilesystem_Recvfrom_err_handles = 0,
    kl_VfsFilesystem_Recvmsg_req_msgIn_msgName_size =
    1024,
    kl_VfsFilesystem_Recvmsg_req_msgIn_msgIovs_size =
    10,
    kl_VfsFilesystem_Recvmsg_req_msgIn_msgIovs_elem_iovData_size =
    65536,
    kl_VfsFilesystem_Recvmsg_req_msgIn_msgData_size =
    1024,
    kl_VfsFilesystem_Recvmsg_res_msgOut_msgName_size =
    1024,
    kl_VfsFilesystem_Recvmsg_res_msgOut_msgIovs_size =
    10,
    kl_VfsFilesystem_Recvmsg_res_msgOut_msgIovs_elem_iovData_size =
    65536,
    kl_VfsFilesystem_Recvmsg_res_msgOut_msgData_size =
    1024,
    kl_VfsFilesystem_Recvmsg_req_arena_size =
    657488,
    kl_VfsFilesystem_Recvmsg_res_arena_size =
    657488,
    kl_VfsFilesystem_Recvmsg_req_handles = 0,
    kl_VfsFilesystem_Recvmsg_res_handles = 0,
    kl_VfsFilesystem_Recvmsg_err_handles = 0,
    kl_VfsFilesystem_Send_req_buf_size = 65536,
    kl_VfsFilesystem_Send_req_arena_size = 65536,
    kl_VfsFilesystem_Send_res_arena_size = 0,
    kl_VfsFilesystem_Send_req_handles = 0,
    kl_VfsFilesystem_Send_res_handles = 0,
    kl_VfsFilesystem_Send_err_handles = 0,
    kl_VfsFilesystem_Sendto_req_buf_size = 65536,
    kl_VfsFilesystem_Sendto_req_addr_size = 128,
    kl_VfsFilesystem_Sendto_req_arena_size =
    65664,
    kl_VfsFilesystem_Sendto_res_arena_size = 0,
    kl_VfsFilesystem_Sendto_req_handles = 0,
    kl_VfsFilesystem_Sendto_res_handles = 0,
    kl_VfsFilesystem_Sendto_err_handles = 0,
    kl_VfsFilesystem_Sendmsg_req_msgIn_msgName_size =
    1024,
    kl_VfsFilesystem_Sendmsg_req_msgIn_msgIovs_size =
    10,
    kl_VfsFilesystem_Sendmsg_req_msgIn_msgIovs_elem_iovData_size =
    65536,
    kl_VfsFilesystem_Sendmsg_req_msgIn_msgData_size =
    1024,
    kl_VfsFilesystem_Sendmsg_req_arena_size =
    657488,
    kl_VfsFilesystem_Sendmsg_res_arena_size = 0,
    kl_VfsFilesystem_Sendmsg_req_handles = 0,
    kl_VfsFilesystem_Sendmsg_res_handles = 0,
    kl_VfsFilesystem_Sendmsg_err_handles = 0,
    kl_VfsFilesystem_Synchronize_req_arena_size =
    0,
    kl_VfsFilesystem_Synchronize_res_arena_size =
    0,
    kl_VfsFilesystem_Synchronize_req_handles = 0,
    kl_VfsFilesystem_Synchronize_res_handles = 0,
    kl_VfsFilesystem_Synchronize_err_handles = 0,
    kl_VfsFilesystem_Fcntl_req_argIn_size = 32,
    kl_VfsFilesystem_Fcntl_res_argOut_size = 32,
    kl_VfsFilesystem_Fcntl_req_arena_size = 32,
    kl_VfsFilesystem_Fcntl_res_arena_size = 32,
    kl_VfsFilesystem_Fcntl_req_handles = 0,
    kl_VfsFilesystem_Fcntl_res_handles = 0,
    kl_VfsFilesystem_Fcntl_err_handles = 0,
    kl_VfsFilesystem_Ioctl_req_argIn_size = 1024,
    kl_VfsFilesystem_Ioctl_res_argOut_size = 1024,
    kl_VfsFilesystem_Ioctl_req_arena_size = 1024,
    kl_VfsFilesystem_Ioctl_res_arena_size = 1024,
    kl_VfsFilesystem_Ioctl_req_handles = 0,
    kl_VfsFilesystem_Ioctl_res_handles = 0,
    kl_VfsFilesystem_Ioctl_err_handles = 0,
    kl_VfsFilesystem_Futimens_req_times_size = 2,
    kl_VfsFilesystem_Futimens_req_arena_size = 32,
    kl_VfsFilesystem_Futimens_res_arena_size = 0,
    kl_VfsFilesystem_Futimens_req_handles = 0,
    kl_VfsFilesystem_Futimens_res_handles = 0,
    kl_VfsFilesystem_Futimens_err_handles = 0,
    kl_VfsFilesystem_Utimensat_req_pathname_size =
    1024,
    kl_VfsFilesystem_Utimensat_req_times_size = 2,
    kl_VfsFilesystem_Utimensat_req_arena_size =
    1056,
    kl_VfsFilesystem_Utimensat_res_arena_size = 0,
    kl_VfsFilesystem_Utimensat_req_handles = 0,
    kl_VfsFilesystem_Utimensat_res_handles = 0,
    kl_VfsFilesystem_Utimensat_err_handles = 0,
    kl_VfsFilesystem_req_arena_size = 657488,
    kl_VfsFilesystem_res_arena_size = 657488,
    kl_VfsFilesystem_arena_size = 657488,
    kl_VfsFilesystem_req_handles = 0,
    kl_VfsFilesystem_res_handles = 0,
    kl_VfsFilesystem_err_handles = 0,
} ;
typedef struct __nk_packed kl_VfsFilesystem_ClientConnected_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t connectionId;
        } kl_VfsFilesystem_ClientConnected_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_ClientConnected_res */
typedef struct kl_VfsFilesystem_ClientConnected_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_ClientConnected_err;
typedef struct kl_VfsFilesystem_ClientConnected_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_ClientConnected_err err_;
            } ;
        } kl_VfsFilesystem_ClientConnected_res;
#pragma pack(pop) /* kl_VfsFilesystem_ClientConnected_res */
typedef struct __nk_packed kl_VfsFilesystem_ClientDisconnected_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
        } kl_VfsFilesystem_ClientDisconnected_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_ClientDisconnected_res */
typedef struct kl_VfsFilesystem_ClientDisconnected_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_ClientDisconnected_err;
typedef struct kl_VfsFilesystem_ClientDisconnected_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_ClientDisconnected_err err_;
            } ;
        } kl_VfsFilesystem_ClientDisconnected_res;
#pragma pack(pop) /* kl_VfsFilesystem_ClientDisconnected_res */
typedef struct __nk_packed kl_VfsFilesystem_DisconnectAllClients_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
        }
kl_VfsFilesystem_DisconnectAllClients_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_DisconnectAllClients_res */
typedef struct kl_VfsFilesystem_DisconnectAllClients_err {
            __nk_alignas(8)
            struct nk_message base_;
        }
kl_VfsFilesystem_DisconnectAllClients_err;
typedef struct kl_VfsFilesystem_DisconnectAllClients_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_DisconnectAllClients_err err_;
            } ;
        }
kl_VfsFilesystem_DisconnectAllClients_res;
#pragma pack(pop) /* kl_VfsFilesystem_DisconnectAllClients_res */
typedef struct __nk_packed kl_VfsFilesystem_Mount_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t devname;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_ptr_t fstype;
            __nk_alignas(8) nk_uint64_t flags;
            __nk_alignas(4) nk_ptr_t data;
        } kl_VfsFilesystem_Mount_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Mount_res */
typedef struct kl_VfsFilesystem_Mount_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Mount_err;
typedef struct kl_VfsFilesystem_Mount_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Mount_err err_;
            } ;
        } kl_VfsFilesystem_Mount_res;
#pragma pack(pop) /* kl_VfsFilesystem_Mount_res */
typedef struct __nk_packed kl_VfsFilesystem_Unmount_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
        } kl_VfsFilesystem_Unmount_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Unmount_res */
typedef struct kl_VfsFilesystem_Unmount_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Unmount_err;
typedef struct kl_VfsFilesystem_Unmount_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Unmount_err err_;
            } ;
        } kl_VfsFilesystem_Unmount_res;
#pragma pack(pop) /* kl_VfsFilesystem_Unmount_res */
typedef struct __nk_packed kl_VfsFilesystem_Unlink_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
        } kl_VfsFilesystem_Unlink_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Unlink_res */
typedef struct kl_VfsFilesystem_Unlink_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Unlink_err;
typedef struct kl_VfsFilesystem_Unlink_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Unlink_err err_;
            } ;
        } kl_VfsFilesystem_Unlink_res;
#pragma pack(pop) /* kl_VfsFilesystem_Unlink_res */
typedef struct __nk_packed kl_VfsFilesystem_Unlinkat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_sint32_t flag;
        } kl_VfsFilesystem_Unlinkat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Unlinkat_res */
typedef struct kl_VfsFilesystem_Unlinkat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Unlinkat_err;
typedef struct kl_VfsFilesystem_Unlinkat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Unlinkat_err err_;
            } ;
        } kl_VfsFilesystem_Unlinkat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Unlinkat_res */
typedef struct __nk_packed kl_VfsFilesystem_Link_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t oldpath;
            __nk_alignas(4) nk_ptr_t newpath;
        } kl_VfsFilesystem_Link_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Link_res */
typedef struct kl_VfsFilesystem_Link_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Link_err;
typedef struct kl_VfsFilesystem_Link_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Link_err err_;
            } ;
        } kl_VfsFilesystem_Link_res;
#pragma pack(pop) /* kl_VfsFilesystem_Link_res */
typedef struct __nk_packed kl_VfsFilesystem_Linkat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t oldfd;
            __nk_alignas(4) nk_ptr_t oldpath;
            __nk_alignas(4) nk_uint32_t newfd;
            __nk_alignas(4) nk_ptr_t newpath;
            __nk_alignas(4) nk_sint32_t flag;
        } kl_VfsFilesystem_Linkat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Linkat_res */
typedef struct kl_VfsFilesystem_Linkat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Linkat_err;
typedef struct kl_VfsFilesystem_Linkat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Linkat_err err_;
            } ;
        } kl_VfsFilesystem_Linkat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Linkat_res */
typedef struct __nk_packed kl_VfsFilesystem_Symlink_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t oldpath;
            __nk_alignas(4) nk_ptr_t newpath;
        } kl_VfsFilesystem_Symlink_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Symlink_res */
typedef struct kl_VfsFilesystem_Symlink_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Symlink_err;
typedef struct kl_VfsFilesystem_Symlink_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Symlink_err err_;
            } ;
        } kl_VfsFilesystem_Symlink_res;
#pragma pack(pop) /* kl_VfsFilesystem_Symlink_res */
typedef struct __nk_packed kl_VfsFilesystem_Symlinkat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t oldpath;
            __nk_alignas(4) nk_uint32_t newfd;
            __nk_alignas(4) nk_ptr_t newpath;
        } kl_VfsFilesystem_Symlinkat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Symlinkat_res */
typedef struct kl_VfsFilesystem_Symlinkat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Symlinkat_err;
typedef struct kl_VfsFilesystem_Symlinkat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Symlinkat_err err_;
            } ;
        } kl_VfsFilesystem_Symlinkat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Symlinkat_res */
typedef struct __nk_packed kl_VfsFilesystem_Ftruncate_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(8) nk_sint64_t length;
        } kl_VfsFilesystem_Ftruncate_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Ftruncate_res */
typedef struct kl_VfsFilesystem_Ftruncate_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Ftruncate_err;
typedef struct kl_VfsFilesystem_Ftruncate_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Ftruncate_err err_;
            } ;
        } kl_VfsFilesystem_Ftruncate_res;
#pragma pack(pop) /* kl_VfsFilesystem_Ftruncate_res */
typedef struct __nk_packed kl_VfsFilesystem_Rename_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t oldpath;
            __nk_alignas(4) nk_ptr_t newpath;
        } kl_VfsFilesystem_Rename_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Rename_res */
typedef struct kl_VfsFilesystem_Rename_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Rename_err;
typedef struct kl_VfsFilesystem_Rename_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Rename_err err_;
            } ;
        } kl_VfsFilesystem_Rename_res;
#pragma pack(pop) /* kl_VfsFilesystem_Rename_res */
typedef struct __nk_packed kl_VfsFilesystem_Renameat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t oldfd;
            __nk_alignas(4) nk_ptr_t oldpath;
            __nk_alignas(4) nk_uint32_t newfd;
            __nk_alignas(4) nk_ptr_t newpath;
        } kl_VfsFilesystem_Renameat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Renameat_res */
typedef struct kl_VfsFilesystem_Renameat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Renameat_err;
typedef struct kl_VfsFilesystem_Renameat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Renameat_err err_;
            } ;
        } kl_VfsFilesystem_Renameat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Renameat_res */
typedef struct __nk_packed kl_VfsFilesystem_Rmdir_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
        } kl_VfsFilesystem_Rmdir_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Rmdir_res */
typedef struct kl_VfsFilesystem_Rmdir_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Rmdir_err;
typedef struct kl_VfsFilesystem_Rmdir_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Rmdir_err err_;
            } ;
        } kl_VfsFilesystem_Rmdir_res;
#pragma pack(pop) /* kl_VfsFilesystem_Rmdir_res */
typedef struct __nk_packed kl_VfsFilesystem_Mkdir_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_sint32_t mode;
        } kl_VfsFilesystem_Mkdir_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Mkdir_res */
typedef struct kl_VfsFilesystem_Mkdir_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Mkdir_err;
typedef struct kl_VfsFilesystem_Mkdir_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Mkdir_err err_;
            } ;
        } kl_VfsFilesystem_Mkdir_res;
#pragma pack(pop) /* kl_VfsFilesystem_Mkdir_res */
typedef struct __nk_packed kl_VfsFilesystem_Mkdirat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fdbase;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_sint32_t mode;
        } kl_VfsFilesystem_Mkdirat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Mkdirat_res */
typedef struct kl_VfsFilesystem_Mkdirat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Mkdirat_err;
typedef struct kl_VfsFilesystem_Mkdirat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Mkdirat_err err_;
            } ;
        } kl_VfsFilesystem_Mkdirat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Mkdirat_res */
typedef struct __nk_packed kl_VfsFilesystem_Chdir_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
        } kl_VfsFilesystem_Chdir_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Chdir_res */
typedef struct kl_VfsFilesystem_Chdir_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Chdir_err;
typedef struct kl_VfsFilesystem_Chdir_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Chdir_err err_;
            } ;
        } kl_VfsFilesystem_Chdir_res;
#pragma pack(pop) /* kl_VfsFilesystem_Chdir_res */
typedef struct __nk_packed kl_VfsFilesystem_Chmod_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_sint32_t mode;
        } kl_VfsFilesystem_Chmod_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Chmod_res */
typedef struct kl_VfsFilesystem_Chmod_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Chmod_err;
typedef struct kl_VfsFilesystem_Chmod_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Chmod_err err_;
            } ;
        } kl_VfsFilesystem_Chmod_res;
#pragma pack(pop) /* kl_VfsFilesystem_Chmod_res */
typedef struct __nk_packed kl_VfsFilesystem_Fchmod_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t filedes;
            __nk_alignas(4) nk_sint32_t mode;
        } kl_VfsFilesystem_Fchmod_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Fchmod_res */
typedef struct kl_VfsFilesystem_Fchmod_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Fchmod_err;
typedef struct kl_VfsFilesystem_Fchmod_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Fchmod_err err_;
            } ;
        } kl_VfsFilesystem_Fchmod_res;
#pragma pack(pop) /* kl_VfsFilesystem_Fchmod_res */
typedef struct __nk_packed kl_VfsFilesystem_Fchmodat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t dirfd;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_sint32_t mode;
            __nk_alignas(4) nk_sint32_t flags;
        } kl_VfsFilesystem_Fchmodat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Fchmodat_res */
typedef struct kl_VfsFilesystem_Fchmodat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Fchmodat_err;
typedef struct kl_VfsFilesystem_Fchmodat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Fchmodat_err err_;
            } ;
        } kl_VfsFilesystem_Fchmodat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Fchmodat_res */
typedef struct __nk_packed kl_VfsFilesystem_Chroot_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
        } kl_VfsFilesystem_Chroot_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Chroot_res */
typedef struct kl_VfsFilesystem_Chroot_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Chroot_err;
typedef struct kl_VfsFilesystem_Chroot_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Chroot_err err_;
            } ;
        } kl_VfsFilesystem_Chroot_res;
#pragma pack(pop) /* kl_VfsFilesystem_Chroot_res */
typedef struct __nk_packed kl_VfsFilesystem_Open_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_sint32_t oflag;
            __nk_alignas(4) nk_sint32_t mode;
        } kl_VfsFilesystem_Open_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Open_res */
typedef struct kl_VfsFilesystem_Open_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Open_err;
typedef struct kl_VfsFilesystem_Open_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t resfd;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t resfd;
                } res_;
                struct kl_VfsFilesystem_Open_err err_;
            } ;
        } kl_VfsFilesystem_Open_res;
#pragma pack(pop) /* kl_VfsFilesystem_Open_res */
typedef struct __nk_packed kl_VfsFilesystem_Openat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(4) nk_sint32_t oflag;
            __nk_alignas(4) nk_sint32_t mode;
        } kl_VfsFilesystem_Openat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Openat_res */
typedef struct kl_VfsFilesystem_Openat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Openat_err;
typedef struct kl_VfsFilesystem_Openat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t resfd;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t resfd;
                } res_;
                struct kl_VfsFilesystem_Openat_err err_;
            } ;
        } kl_VfsFilesystem_Openat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Openat_res */
typedef struct __nk_packed kl_VfsFilesystem_Read_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(8) nk_uint64_t count;
        } kl_VfsFilesystem_Read_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Read_res */
typedef struct kl_VfsFilesystem_Read_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Read_err;
typedef struct kl_VfsFilesystem_Read_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(1)
                    nk_uint8_t nodata;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(1)
                    nk_uint8_t nodata;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Read_err err_;
            } ;
        } kl_VfsFilesystem_Read_res;
#pragma pack(pop) /* kl_VfsFilesystem_Read_res */
typedef struct __nk_packed kl_VfsFilesystem_Readv_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t iovlens;
        } kl_VfsFilesystem_Readv_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Readv_res */
typedef struct kl_VfsFilesystem_Readv_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Readv_err;
typedef struct kl_VfsFilesystem_Readv_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t iovs;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(1)
                    nk_uint8_t nodata;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t iovs;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(1)
                    nk_uint8_t nodata;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Readv_err err_;
            } ;
        } kl_VfsFilesystem_Readv_res;
#pragma pack(pop) /* kl_VfsFilesystem_Readv_res */
typedef struct __nk_packed kl_VfsFilesystem_Pread_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(8) nk_uint64_t count;
            __nk_alignas(8) nk_sint64_t offset;
        } kl_VfsFilesystem_Pread_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Pread_res */
typedef struct kl_VfsFilesystem_Pread_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Pread_err;
typedef struct kl_VfsFilesystem_Pread_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Pread_err err_;
            } ;
        } kl_VfsFilesystem_Pread_res;
#pragma pack(pop) /* kl_VfsFilesystem_Pread_res */
typedef struct __nk_packed kl_VfsFilesystem_Write_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t buf;
        } kl_VfsFilesystem_Write_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Write_res */
typedef struct kl_VfsFilesystem_Write_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Write_err;
typedef struct kl_VfsFilesystem_Write_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t written;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t written;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Write_err err_;
            } ;
        } kl_VfsFilesystem_Write_res;
#pragma pack(pop) /* kl_VfsFilesystem_Write_res */
typedef struct __nk_packed kl_VfsFilesystem_Sendfile_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t outfd;
            __nk_alignas(4) nk_uint32_t infd;
            __nk_alignas(8) nk_sint64_t offIn;
            __nk_alignas(8) nk_uint64_t count;
        } kl_VfsFilesystem_Sendfile_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Sendfile_res */
typedef struct kl_VfsFilesystem_Sendfile_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Sendfile_err;
typedef struct kl_VfsFilesystem_Sendfile_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t offOut;
                    __nk_alignas(8)
                    nk_sint64_t written;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t offOut;
                    __nk_alignas(8)
                    nk_sint64_t written;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Sendfile_err err_;
            } ;
        } kl_VfsFilesystem_Sendfile_res;
#pragma pack(pop) /* kl_VfsFilesystem_Sendfile_res */
typedef struct __nk_packed kl_VfsFilesystem_Writev_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t iovs;
            __nk_alignas(8) nk_uint64_t iovcnt;
            __nk_alignas(8) nk_uint64_t remain;
        } kl_VfsFilesystem_Writev_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Writev_res */
typedef struct kl_VfsFilesystem_Writev_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Writev_err;
typedef struct kl_VfsFilesystem_Writev_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t written;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t written;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Writev_err err_;
            } ;
        } kl_VfsFilesystem_Writev_res;
#pragma pack(pop) /* kl_VfsFilesystem_Writev_res */
typedef struct __nk_packed kl_VfsFilesystem_Pwrite_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t buf;
            __nk_alignas(8) nk_sint64_t offset;
        } kl_VfsFilesystem_Pwrite_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Pwrite_res */
typedef struct kl_VfsFilesystem_Pwrite_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Pwrite_err;
typedef struct kl_VfsFilesystem_Pwrite_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t written;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t written;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Pwrite_err err_;
            } ;
        } kl_VfsFilesystem_Pwrite_res;
#pragma pack(pop) /* kl_VfsFilesystem_Pwrite_res */
typedef struct __nk_packed kl_VfsFilesystem_Lseek_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(8) nk_sint64_t offset;
            __nk_alignas(4) nk_sint32_t whence;
        } kl_VfsFilesystem_Lseek_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Lseek_res */
typedef struct kl_VfsFilesystem_Lseek_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Lseek_err;
typedef struct kl_VfsFilesystem_Lseek_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(8)
                    nk_sint64_t result;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(8)
                    nk_sint64_t result;
                } res_;
                struct kl_VfsFilesystem_Lseek_err err_;
            } ;
        } kl_VfsFilesystem_Lseek_res;
#pragma pack(pop) /* kl_VfsFilesystem_Lseek_res */
typedef struct __nk_packed kl_VfsFilesystem_Stat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t pathname;
        } kl_VfsFilesystem_Stat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Stat_res */
typedef struct kl_VfsFilesystem_Stat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Stat_err;
typedef struct kl_VfsFilesystem_Stat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Stat_err err_;
            } ;
        } kl_VfsFilesystem_Stat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Stat_res */
typedef struct __nk_packed kl_VfsFilesystem_Lstat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t pathname;
        } kl_VfsFilesystem_Lstat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Lstat_res */
typedef struct kl_VfsFilesystem_Lstat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Lstat_err;
typedef struct kl_VfsFilesystem_Lstat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Lstat_err err_;
            } ;
        } kl_VfsFilesystem_Lstat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Lstat_res */
typedef struct __nk_packed kl_VfsFilesystem_Fstat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
        } kl_VfsFilesystem_Fstat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Fstat_res */
typedef struct kl_VfsFilesystem_Fstat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Fstat_err;
typedef struct kl_VfsFilesystem_Fstat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Fstat_err err_;
            } ;
        } kl_VfsFilesystem_Fstat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Fstat_res */
typedef struct __nk_packed kl_VfsFilesystem_Fstatat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t dirfd;
            __nk_alignas(4) nk_ptr_t pathname;
            __nk_alignas(4) nk_sint32_t flags;
        } kl_VfsFilesystem_Fstatat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Fstatat_res */
typedef struct kl_VfsFilesystem_Fstatat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Fstatat_err;
typedef struct kl_VfsFilesystem_Fstatat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Fstatat_err err_;
            } ;
        } kl_VfsFilesystem_Fstatat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Fstatat_res */
typedef struct __nk_packed kl_VfsFilesystem_Fsync_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
        } kl_VfsFilesystem_Fsync_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Fsync_res */
typedef struct kl_VfsFilesystem_Fsync_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Fsync_err;
typedef struct kl_VfsFilesystem_Fsync_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } res_;
                struct kl_VfsFilesystem_Fsync_err err_;
            } ;
        } kl_VfsFilesystem_Fsync_res;
#pragma pack(pop) /* kl_VfsFilesystem_Fsync_res */
typedef struct __nk_packed kl_VfsFilesystem_Fdatasync_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
        } kl_VfsFilesystem_Fdatasync_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Fdatasync_res */
typedef struct kl_VfsFilesystem_Fdatasync_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Fdatasync_err;
typedef struct kl_VfsFilesystem_Fdatasync_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } res_;
                struct kl_VfsFilesystem_Fdatasync_err err_;
            } ;
        } kl_VfsFilesystem_Fdatasync_res;
#pragma pack(pop) /* kl_VfsFilesystem_Fdatasync_res */
typedef struct __nk_packed kl_VfsFilesystem_Close_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
        } kl_VfsFilesystem_Close_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Close_res */
typedef struct kl_VfsFilesystem_Close_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Close_err;
typedef struct kl_VfsFilesystem_Close_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Close_err err_;
            } ;
        } kl_VfsFilesystem_Close_res;
#pragma pack(pop) /* kl_VfsFilesystem_Close_res */
typedef struct __nk_packed kl_VfsFilesystem_StatVfs_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t pathname;
        } kl_VfsFilesystem_StatVfs_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_StatVfs_res */
typedef struct kl_VfsFilesystem_StatVfs_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_StatVfs_err;
typedef struct kl_VfsFilesystem_StatVfs_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatVfsT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatVfsT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_StatVfs_err err_;
            } ;
        } kl_VfsFilesystem_StatVfs_res;
#pragma pack(pop) /* kl_VfsFilesystem_StatVfs_res */
typedef struct __nk_packed kl_VfsFilesystem_FStatVfs_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
        } kl_VfsFilesystem_FStatVfs_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_FStatVfs_res */
typedef struct kl_VfsFilesystem_FStatVfs_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_FStatVfs_err;
typedef struct kl_VfsFilesystem_FStatVfs_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatVfsT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsStatVfsT stat;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_FStatVfs_err err_;
            } ;
        } kl_VfsFilesystem_FStatVfs_res;
#pragma pack(pop) /* kl_VfsFilesystem_FStatVfs_res */
typedef struct __nk_packed kl_VfsFilesystem_Pipe_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
        } kl_VfsFilesystem_Pipe_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Pipe_res */
typedef struct kl_VfsFilesystem_Pipe_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Pipe_err;
typedef struct kl_VfsFilesystem_Pipe_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t infd;
                    __nk_alignas(4)
                    nk_uint32_t outfd;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t infd;
                    __nk_alignas(4)
                    nk_uint32_t outfd;
                } res_;
                struct kl_VfsFilesystem_Pipe_err err_;
            } ;
        } kl_VfsFilesystem_Pipe_res;
#pragma pack(pop) /* kl_VfsFilesystem_Pipe_res */
typedef struct __nk_packed kl_VfsFilesystem_Getdents_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(8) nk_uint64_t count;
        } kl_VfsFilesystem_Getdents_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getdents_res */
typedef struct kl_VfsFilesystem_Getdents_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getdents_err;
typedef struct kl_VfsFilesystem_Getdents_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Getdents_err err_;
            } ;
        } kl_VfsFilesystem_Getdents_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getdents_res */
typedef struct __nk_packed kl_VfsFilesystem_Socket_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_sint32_t domain;
            __nk_alignas(4) nk_sint32_t type;
            __nk_alignas(4) nk_sint32_t protocol;
        } kl_VfsFilesystem_Socket_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Socket_res */
typedef struct kl_VfsFilesystem_Socket_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Socket_err;
typedef struct kl_VfsFilesystem_Socket_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t resfd;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t resfd;
                } res_;
                struct kl_VfsFilesystem_Socket_err err_;
            } ;
        } kl_VfsFilesystem_Socket_res;
#pragma pack(pop) /* kl_VfsFilesystem_Socket_res */
typedef struct __nk_packed kl_VfsFilesystem_Socketpair_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_sint32_t domain;
            __nk_alignas(4) nk_sint32_t type;
            __nk_alignas(4) nk_sint32_t protocol;
        } kl_VfsFilesystem_Socketpair_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Socketpair_res */
typedef struct kl_VfsFilesystem_Socketpair_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Socketpair_err;
typedef struct kl_VfsFilesystem_Socketpair_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t infd;
                    __nk_alignas(4)
                    nk_uint32_t outfd;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_uint32_t infd;
                    __nk_alignas(4)
                    nk_uint32_t outfd;
                } res_;
                struct kl_VfsFilesystem_Socketpair_err err_;
            } ;
        } kl_VfsFilesystem_Socketpair_res;
#pragma pack(pop) /* kl_VfsFilesystem_Socketpair_res */
typedef struct __nk_packed kl_VfsFilesystem_Bind_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t addr;
        } kl_VfsFilesystem_Bind_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Bind_res */
typedef struct kl_VfsFilesystem_Bind_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Bind_err;
typedef struct kl_VfsFilesystem_Bind_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Bind_err err_;
            } ;
        } kl_VfsFilesystem_Bind_res;
#pragma pack(pop) /* kl_VfsFilesystem_Bind_res */
typedef struct __nk_packed kl_VfsFilesystem_Listen_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t backlog;
        } kl_VfsFilesystem_Listen_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Listen_res */
typedef struct kl_VfsFilesystem_Listen_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Listen_err;
typedef struct kl_VfsFilesystem_Listen_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Listen_err err_;
            } ;
        } kl_VfsFilesystem_Listen_res;
#pragma pack(pop) /* kl_VfsFilesystem_Listen_res */
typedef struct __nk_packed kl_VfsFilesystem_Connect_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t addr;
        } kl_VfsFilesystem_Connect_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Connect_res */
typedef struct kl_VfsFilesystem_Connect_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Connect_err;
typedef struct kl_VfsFilesystem_Connect_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Connect_err err_;
            } ;
        } kl_VfsFilesystem_Connect_res;
#pragma pack(pop) /* kl_VfsFilesystem_Connect_res */
typedef struct __nk_packed kl_VfsFilesystem_Accept_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t addrlen;
        } kl_VfsFilesystem_Accept_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Accept_res */
typedef struct kl_VfsFilesystem_Accept_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Accept_err;
typedef struct kl_VfsFilesystem_Accept_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t outAddrlen;
                    __nk_alignas(4)
                    nk_uint32_t resfd;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t outAddrlen;
                    __nk_alignas(4)
                    nk_uint32_t resfd;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Accept_err err_;
            } ;
        } kl_VfsFilesystem_Accept_res;
#pragma pack(pop) /* kl_VfsFilesystem_Accept_res */
typedef struct __nk_packed kl_VfsFilesystem_Poll_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t fds;
            __nk_alignas(8) nk_sint64_t nfds;
            __nk_alignas(4) nk_sint32_t timeout;
        } kl_VfsFilesystem_Poll_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Poll_res */
typedef struct kl_VfsFilesystem_Poll_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Poll_err;
typedef struct kl_VfsFilesystem_Poll_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outFds;
                    __nk_alignas(4)
                    nk_sint32_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outFds;
                    __nk_alignas(4)
                    nk_sint32_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Poll_err err_;
            } ;
        } kl_VfsFilesystem_Poll_res;
#pragma pack(pop) /* kl_VfsFilesystem_Poll_res */
typedef struct __nk_packed kl_VfsFilesystem_Shutdown_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t how;
        } kl_VfsFilesystem_Shutdown_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Shutdown_res */
typedef struct kl_VfsFilesystem_Shutdown_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Shutdown_err;
typedef struct kl_VfsFilesystem_Shutdown_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Shutdown_err err_;
            } ;
        } kl_VfsFilesystem_Shutdown_res;
#pragma pack(pop) /* kl_VfsFilesystem_Shutdown_res */
typedef struct __nk_packed kl_VfsFilesystem_Getnameinfo_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t sa;
            __nk_alignas(4) nk_uint32_t nodelen;
            __nk_alignas(4)
            nk_uint32_t servicelen;
            __nk_alignas(4) nk_sint32_t flags;
        } kl_VfsFilesystem_Getnameinfo_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getnameinfo_res */
typedef struct kl_VfsFilesystem_Getnameinfo_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getnameinfo_err;
typedef struct kl_VfsFilesystem_Getnameinfo_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t node;
                    __nk_alignas(4)
                    nk_ptr_t service;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t node;
                    __nk_alignas(4)
                    nk_ptr_t service;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Getnameinfo_err err_;
            } ;
        } kl_VfsFilesystem_Getnameinfo_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getnameinfo_res */
typedef struct __nk_packed kl_VfsFilesystem_Getaddrinfo_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t host;
            __nk_alignas(4) nk_ptr_t serv;
            __nk_alignas(4) nk_ptr_t hints;
        } kl_VfsFilesystem_Getaddrinfo_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getaddrinfo_res */
typedef struct kl_VfsFilesystem_Getaddrinfo_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getaddrinfo_err;
typedef struct kl_VfsFilesystem_Getaddrinfo_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t info;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t info;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } res_;
                struct kl_VfsFilesystem_Getaddrinfo_err err_;
            } ;
        } kl_VfsFilesystem_Getaddrinfo_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getaddrinfo_res */
typedef struct __nk_packed kl_VfsFilesystem_Getifaddrs_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
        } kl_VfsFilesystem_Getifaddrs_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getifaddrs_res */
typedef struct kl_VfsFilesystem_Getifaddrs_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getifaddrs_err;
typedef struct kl_VfsFilesystem_Getifaddrs_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t res;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t res;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } res_;
                struct kl_VfsFilesystem_Getifaddrs_err err_;
            } ;
        } kl_VfsFilesystem_Getifaddrs_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getifaddrs_res */
typedef struct __nk_packed kl_VfsFilesystem_Getpeername_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t addrlen;
        } kl_VfsFilesystem_Getpeername_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getpeername_res */
typedef struct kl_VfsFilesystem_Getpeername_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getpeername_err;
typedef struct kl_VfsFilesystem_Getpeername_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Getpeername_err err_;
            } ;
        } kl_VfsFilesystem_Getpeername_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getpeername_res */
typedef struct __nk_packed kl_VfsFilesystem_Getsockname_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t addrlen;
        } kl_VfsFilesystem_Getsockname_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getsockname_res */
typedef struct kl_VfsFilesystem_Getsockname_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getsockname_err;
typedef struct kl_VfsFilesystem_Getsockname_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Getsockname_err err_;
            } ;
        } kl_VfsFilesystem_Getsockname_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getsockname_res */
typedef struct __nk_packed kl_VfsFilesystem_Gethostbyname_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsFilesystem_Gethostbyname_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Gethostbyname_res */
typedef struct kl_VfsFilesystem_Gethostbyname_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Gethostbyname_err;
typedef struct kl_VfsFilesystem_Gethostbyname_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t hostent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t hostent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Gethostbyname_err err_;
            } ;
        } kl_VfsFilesystem_Gethostbyname_res;
#pragma pack(pop) /* kl_VfsFilesystem_Gethostbyname_res */
typedef struct __nk_packed kl_VfsFilesystem_Getnetbyname_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsFilesystem_Getnetbyname_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getnetbyname_res */
typedef struct kl_VfsFilesystem_Getnetbyname_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getnetbyname_err;
typedef struct kl_VfsFilesystem_Getnetbyname_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    struct kl_VfsTypes_VfsNetentT netent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    struct kl_VfsTypes_VfsNetentT netent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Getnetbyname_err err_;
            } ;
        } kl_VfsFilesystem_Getnetbyname_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getnetbyname_res */
typedef struct __nk_packed kl_VfsFilesystem_Getprotobyname_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsFilesystem_Getprotobyname_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getprotobyname_res */
typedef struct kl_VfsFilesystem_Getprotobyname_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getprotobyname_err;
typedef struct kl_VfsFilesystem_Getprotobyname_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    struct kl_VfsTypes_VfsProtoentT protoent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    struct kl_VfsTypes_VfsProtoentT protoent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Getprotobyname_err err_;
            } ;
        } kl_VfsFilesystem_Getprotobyname_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getprotobyname_res */
typedef struct __nk_packed kl_VfsFilesystem_Getprotobynumber_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_sint32_t proto;
        } kl_VfsFilesystem_Getprotobynumber_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getprotobynumber_res */
typedef struct kl_VfsFilesystem_Getprotobynumber_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getprotobynumber_err;
typedef struct kl_VfsFilesystem_Getprotobynumber_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    struct kl_VfsTypes_VfsProtoentT protoent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    struct kl_VfsTypes_VfsProtoentT protoent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Getprotobynumber_err err_;
            } ;
        } kl_VfsFilesystem_Getprotobynumber_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getprotobynumber_res */
typedef struct __nk_packed kl_VfsFilesystem_Getsockopt_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t level;
            __nk_alignas(4) nk_sint32_t optname;
            __nk_alignas(4) nk_sint32_t optlen;
        } kl_VfsFilesystem_Getsockopt_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Getsockopt_res */
typedef struct kl_VfsFilesystem_Getsockopt_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Getsockopt_err;
typedef struct kl_VfsFilesystem_Getsockopt_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t optval;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t optval;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Getsockopt_err err_;
            } ;
        } kl_VfsFilesystem_Getsockopt_res;
#pragma pack(pop) /* kl_VfsFilesystem_Getsockopt_res */
typedef struct __nk_packed kl_VfsFilesystem_Setsockopt_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t level;
            __nk_alignas(4) nk_sint32_t optname;
            __nk_alignas(4) nk_ptr_t optval;
        } kl_VfsFilesystem_Setsockopt_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Setsockopt_res */
typedef struct kl_VfsFilesystem_Setsockopt_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Setsockopt_err;
typedef struct kl_VfsFilesystem_Setsockopt_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Setsockopt_err err_;
            } ;
        } kl_VfsFilesystem_Setsockopt_res;
#pragma pack(pop) /* kl_VfsFilesystem_Setsockopt_res */
typedef struct __nk_packed kl_VfsFilesystem_Recv_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(8) nk_uint64_t count;
            __nk_alignas(4) nk_sint32_t flags;
        } kl_VfsFilesystem_Recv_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Recv_res */
typedef struct kl_VfsFilesystem_Recv_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Recv_err;
typedef struct kl_VfsFilesystem_Recv_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(8)
                    nk_sint64_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Recv_err err_;
            } ;
        } kl_VfsFilesystem_Recv_res;
#pragma pack(pop) /* kl_VfsFilesystem_Recv_res */
typedef struct __nk_packed kl_VfsFilesystem_Recvfrom_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(8) nk_uint64_t count;
            __nk_alignas(4) nk_sint32_t flags;
            __nk_alignas(4) nk_sint32_t addrlen;
        } kl_VfsFilesystem_Recvfrom_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Recvfrom_res */
typedef struct kl_VfsFilesystem_Recvfrom_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Recvfrom_err;
typedef struct kl_VfsFilesystem_Recvfrom_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(4)
                    nk_ptr_t srcAddr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t buf;
                    __nk_alignas(4)
                    nk_ptr_t srcAddr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Recvfrom_err err_;
            } ;
        } kl_VfsFilesystem_Recvfrom_res;
#pragma pack(pop) /* kl_VfsFilesystem_Recvfrom_res */
typedef struct __nk_packed kl_VfsFilesystem_Recvmsg_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t flags;
            __nk_alignas(4)
            struct kl_VfsTypes_VfsMsghdrT msgIn;
        } kl_VfsFilesystem_Recvmsg_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Recvmsg_res */
typedef struct kl_VfsFilesystem_Recvmsg_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Recvmsg_err;
typedef struct kl_VfsFilesystem_Recvmsg_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    struct kl_VfsTypes_VfsMsghdrT msgOut;
                    __nk_alignas(4)
                    nk_sint32_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    struct kl_VfsTypes_VfsMsghdrT msgOut;
                    __nk_alignas(4)
                    nk_sint32_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Recvmsg_err err_;
            } ;
        } kl_VfsFilesystem_Recvmsg_res;
#pragma pack(pop) /* kl_VfsFilesystem_Recvmsg_res */
typedef struct __nk_packed kl_VfsFilesystem_Send_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t buf;
            __nk_alignas(4) nk_sint32_t flags;
        } kl_VfsFilesystem_Send_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Send_res */
typedef struct kl_VfsFilesystem_Send_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Send_err;
typedef struct kl_VfsFilesystem_Send_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t sent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t sent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Send_err err_;
            } ;
        } kl_VfsFilesystem_Send_res;
#pragma pack(pop) /* kl_VfsFilesystem_Send_res */
typedef struct __nk_packed kl_VfsFilesystem_Sendto_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t buf;
            __nk_alignas(4) nk_sint32_t flags;
            __nk_alignas(4) nk_ptr_t addr;
        } kl_VfsFilesystem_Sendto_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Sendto_res */
typedef struct kl_VfsFilesystem_Sendto_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Sendto_err;
typedef struct kl_VfsFilesystem_Sendto_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t sent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_sint64_t sent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Sendto_err err_;
            } ;
        } kl_VfsFilesystem_Sendto_res;
#pragma pack(pop) /* kl_VfsFilesystem_Sendto_res */
typedef struct __nk_packed kl_VfsFilesystem_Sendmsg_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t flags;
            __nk_alignas(4)
            struct kl_VfsTypes_VfsMsghdrT msgIn;
        } kl_VfsFilesystem_Sendmsg_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Sendmsg_res */
typedef struct kl_VfsFilesystem_Sendmsg_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Sendmsg_err;
typedef struct kl_VfsFilesystem_Sendmsg_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t result;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Sendmsg_err err_;
            } ;
        } kl_VfsFilesystem_Sendmsg_res;
#pragma pack(pop) /* kl_VfsFilesystem_Sendmsg_res */
typedef struct __nk_packed kl_VfsFilesystem_Synchronize_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
        } kl_VfsFilesystem_Synchronize_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Synchronize_res */
typedef struct kl_VfsFilesystem_Synchronize_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Synchronize_err;
typedef struct kl_VfsFilesystem_Synchronize_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Synchronize_err err_;
            } ;
        } kl_VfsFilesystem_Synchronize_res;
#pragma pack(pop) /* kl_VfsFilesystem_Synchronize_res */
typedef struct __nk_packed kl_VfsFilesystem_Fcntl_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_sint32_t cmd;
            __nk_alignas(4) nk_ptr_t argIn;
        } kl_VfsFilesystem_Fcntl_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Fcntl_res */
typedef struct kl_VfsFilesystem_Fcntl_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Fcntl_err;
typedef struct kl_VfsFilesystem_Fcntl_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t argOut;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t argOut;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } res_;
                struct kl_VfsFilesystem_Fcntl_err err_;
            } ;
        } kl_VfsFilesystem_Fcntl_res;
#pragma pack(pop) /* kl_VfsFilesystem_Fcntl_res */
typedef struct __nk_packed kl_VfsFilesystem_Ioctl_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(8) nk_uint64_t request;
            __nk_alignas(4) nk_ptr_t argIn;
        } kl_VfsFilesystem_Ioctl_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Ioctl_res */
typedef struct kl_VfsFilesystem_Ioctl_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Ioctl_err;
typedef struct kl_VfsFilesystem_Ioctl_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t argOut;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t argOut;
                    __nk_alignas(4)
                    nk_sint32_t error;
                    __nk_alignas(4)
                    nk_sint32_t result;
                } res_;
                struct kl_VfsFilesystem_Ioctl_err err_;
            } ;
        } kl_VfsFilesystem_Ioctl_res;
#pragma pack(pop) /* kl_VfsFilesystem_Ioctl_res */
typedef struct __nk_packed kl_VfsFilesystem_Futimens_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t times;
        } kl_VfsFilesystem_Futimens_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Futimens_res */
typedef struct kl_VfsFilesystem_Futimens_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Futimens_err;
typedef struct kl_VfsFilesystem_Futimens_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Futimens_err err_;
            } ;
        } kl_VfsFilesystem_Futimens_res;
#pragma pack(pop) /* kl_VfsFilesystem_Futimens_res */
typedef struct __nk_packed kl_VfsFilesystem_Utimensat_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t dirfd;
            __nk_alignas(4) nk_ptr_t pathname;
            __nk_alignas(4) nk_sint32_t flags;
            __nk_alignas(4) nk_ptr_t times;
        } kl_VfsFilesystem_Utimensat_req;
#pragma pack(push, 8) /* kl_VfsFilesystem_Utimensat_res */
typedef struct kl_VfsFilesystem_Utimensat_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsFilesystem_Utimensat_err;
typedef struct kl_VfsFilesystem_Utimensat_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsFilesystem_Utimensat_err err_;
            } ;
        } kl_VfsFilesystem_Utimensat_res;
#pragma pack(pop) /* kl_VfsFilesystem_Utimensat_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsFilesystem_ClientConnected_mid kl_VfsFilesystem_ClientConnected_mid
#define VfsFilesystem_ClientDisconnected_mid kl_VfsFilesystem_ClientDisconnected_mid
#define VfsFilesystem_DisconnectAllClients_mid kl_VfsFilesystem_DisconnectAllClients_mid
#define VfsFilesystem_Mount_mid kl_VfsFilesystem_Mount_mid
#define VfsFilesystem_Unmount_mid kl_VfsFilesystem_Unmount_mid
#define VfsFilesystem_Unlink_mid kl_VfsFilesystem_Unlink_mid
#define VfsFilesystem_Unlinkat_mid kl_VfsFilesystem_Unlinkat_mid
#define VfsFilesystem_Link_mid kl_VfsFilesystem_Link_mid
#define VfsFilesystem_Linkat_mid kl_VfsFilesystem_Linkat_mid
#define VfsFilesystem_Symlink_mid kl_VfsFilesystem_Symlink_mid
#define VfsFilesystem_Symlinkat_mid kl_VfsFilesystem_Symlinkat_mid
#define VfsFilesystem_Ftruncate_mid kl_VfsFilesystem_Ftruncate_mid
#define VfsFilesystem_Rename_mid kl_VfsFilesystem_Rename_mid
#define VfsFilesystem_Renameat_mid kl_VfsFilesystem_Renameat_mid
#define VfsFilesystem_Rmdir_mid kl_VfsFilesystem_Rmdir_mid
#define VfsFilesystem_Mkdir_mid kl_VfsFilesystem_Mkdir_mid
#define VfsFilesystem_Mkdirat_mid kl_VfsFilesystem_Mkdirat_mid
#define VfsFilesystem_Chdir_mid kl_VfsFilesystem_Chdir_mid
#define VfsFilesystem_Chmod_mid kl_VfsFilesystem_Chmod_mid
#define VfsFilesystem_Fchmod_mid kl_VfsFilesystem_Fchmod_mid
#define VfsFilesystem_Fchmodat_mid kl_VfsFilesystem_Fchmodat_mid
#define VfsFilesystem_Chroot_mid kl_VfsFilesystem_Chroot_mid
#define VfsFilesystem_Open_mid kl_VfsFilesystem_Open_mid
#define VfsFilesystem_Openat_mid kl_VfsFilesystem_Openat_mid
#define VfsFilesystem_Read_mid kl_VfsFilesystem_Read_mid
#define VfsFilesystem_Readv_mid kl_VfsFilesystem_Readv_mid
#define VfsFilesystem_Pread_mid kl_VfsFilesystem_Pread_mid
#define VfsFilesystem_Write_mid kl_VfsFilesystem_Write_mid
#define VfsFilesystem_Sendfile_mid kl_VfsFilesystem_Sendfile_mid
#define VfsFilesystem_Writev_mid kl_VfsFilesystem_Writev_mid
#define VfsFilesystem_Pwrite_mid kl_VfsFilesystem_Pwrite_mid
#define VfsFilesystem_Lseek_mid kl_VfsFilesystem_Lseek_mid
#define VfsFilesystem_Stat_mid kl_VfsFilesystem_Stat_mid
#define VfsFilesystem_Lstat_mid kl_VfsFilesystem_Lstat_mid
#define VfsFilesystem_Fstat_mid kl_VfsFilesystem_Fstat_mid
#define VfsFilesystem_Fstatat_mid kl_VfsFilesystem_Fstatat_mid
#define VfsFilesystem_Fsync_mid kl_VfsFilesystem_Fsync_mid
#define VfsFilesystem_Fdatasync_mid kl_VfsFilesystem_Fdatasync_mid
#define VfsFilesystem_Close_mid kl_VfsFilesystem_Close_mid
#define VfsFilesystem_StatVfs_mid kl_VfsFilesystem_StatVfs_mid
#define VfsFilesystem_FStatVfs_mid kl_VfsFilesystem_FStatVfs_mid
#define VfsFilesystem_Pipe_mid kl_VfsFilesystem_Pipe_mid
#define VfsFilesystem_Getdents_mid kl_VfsFilesystem_Getdents_mid
#define VfsFilesystem_Socket_mid kl_VfsFilesystem_Socket_mid
#define VfsFilesystem_Socketpair_mid kl_VfsFilesystem_Socketpair_mid
#define VfsFilesystem_Bind_mid kl_VfsFilesystem_Bind_mid
#define VfsFilesystem_Listen_mid kl_VfsFilesystem_Listen_mid
#define VfsFilesystem_Connect_mid kl_VfsFilesystem_Connect_mid
#define VfsFilesystem_Accept_mid kl_VfsFilesystem_Accept_mid
#define VfsFilesystem_Poll_mid kl_VfsFilesystem_Poll_mid
#define VfsFilesystem_Shutdown_mid kl_VfsFilesystem_Shutdown_mid
#define VfsFilesystem_Getnameinfo_mid kl_VfsFilesystem_Getnameinfo_mid
#define VfsFilesystem_Getaddrinfo_mid kl_VfsFilesystem_Getaddrinfo_mid
#define VfsFilesystem_Getifaddrs_mid kl_VfsFilesystem_Getifaddrs_mid
#define VfsFilesystem_Getpeername_mid kl_VfsFilesystem_Getpeername_mid
#define VfsFilesystem_Getsockname_mid kl_VfsFilesystem_Getsockname_mid
#define VfsFilesystem_Gethostbyname_mid kl_VfsFilesystem_Gethostbyname_mid
#define VfsFilesystem_Getnetbyname_mid kl_VfsFilesystem_Getnetbyname_mid
#define VfsFilesystem_Getprotobyname_mid kl_VfsFilesystem_Getprotobyname_mid
#define VfsFilesystem_Getprotobynumber_mid kl_VfsFilesystem_Getprotobynumber_mid
#define VfsFilesystem_Getsockopt_mid kl_VfsFilesystem_Getsockopt_mid
#define VfsFilesystem_Setsockopt_mid kl_VfsFilesystem_Setsockopt_mid
#define VfsFilesystem_Recv_mid kl_VfsFilesystem_Recv_mid
#define VfsFilesystem_Recvfrom_mid kl_VfsFilesystem_Recvfrom_mid
#define VfsFilesystem_Recvmsg_mid kl_VfsFilesystem_Recvmsg_mid
#define VfsFilesystem_Send_mid kl_VfsFilesystem_Send_mid
#define VfsFilesystem_Sendto_mid kl_VfsFilesystem_Sendto_mid
#define VfsFilesystem_Sendmsg_mid kl_VfsFilesystem_Sendmsg_mid
#define VfsFilesystem_Synchronize_mid kl_VfsFilesystem_Synchronize_mid
#define VfsFilesystem_Fcntl_mid kl_VfsFilesystem_Fcntl_mid
#define VfsFilesystem_Ioctl_mid kl_VfsFilesystem_Ioctl_mid
#define VfsFilesystem_Futimens_mid kl_VfsFilesystem_Futimens_mid
#define VfsFilesystem_Utimensat_mid kl_VfsFilesystem_Utimensat_mid
#define VfsFilesystem_mid_max kl_VfsFilesystem_mid_max
#define VfsFilesystem_ClientConnected_req_connectionId_size kl_VfsFilesystem_ClientConnected_req_connectionId_size
#define VfsFilesystem_ClientConnected_req_arena_size kl_VfsFilesystem_ClientConnected_req_arena_size
#define VfsFilesystem_ClientConnected_res_arena_size kl_VfsFilesystem_ClientConnected_res_arena_size
#define VfsFilesystem_ClientConnected_req_handles kl_VfsFilesystem_ClientConnected_req_handles
#define VfsFilesystem_ClientConnected_res_handles kl_VfsFilesystem_ClientConnected_res_handles
#define VfsFilesystem_ClientConnected_err_handles kl_VfsFilesystem_ClientConnected_err_handles
#define VfsFilesystem_ClientDisconnected_req_arena_size kl_VfsFilesystem_ClientDisconnected_req_arena_size
#define VfsFilesystem_ClientDisconnected_res_arena_size kl_VfsFilesystem_ClientDisconnected_res_arena_size
#define VfsFilesystem_ClientDisconnected_req_handles kl_VfsFilesystem_ClientDisconnected_req_handles
#define VfsFilesystem_ClientDisconnected_res_handles kl_VfsFilesystem_ClientDisconnected_res_handles
#define VfsFilesystem_ClientDisconnected_err_handles kl_VfsFilesystem_ClientDisconnected_err_handles
#define VfsFilesystem_DisconnectAllClients_req_arena_size kl_VfsFilesystem_DisconnectAllClients_req_arena_size
#define VfsFilesystem_DisconnectAllClients_res_arena_size kl_VfsFilesystem_DisconnectAllClients_res_arena_size
#define VfsFilesystem_DisconnectAllClients_req_handles kl_VfsFilesystem_DisconnectAllClients_req_handles
#define VfsFilesystem_DisconnectAllClients_res_handles kl_VfsFilesystem_DisconnectAllClients_res_handles
#define VfsFilesystem_DisconnectAllClients_err_handles kl_VfsFilesystem_DisconnectAllClients_err_handles
#define VfsFilesystem_Mount_req_devname_size kl_VfsFilesystem_Mount_req_devname_size
#define VfsFilesystem_Mount_req_path_size kl_VfsFilesystem_Mount_req_path_size
#define VfsFilesystem_Mount_req_fstype_size kl_VfsFilesystem_Mount_req_fstype_size
#define VfsFilesystem_Mount_req_data_size kl_VfsFilesystem_Mount_req_data_size
#define VfsFilesystem_Mount_req_arena_size kl_VfsFilesystem_Mount_req_arena_size
#define VfsFilesystem_Mount_res_arena_size kl_VfsFilesystem_Mount_res_arena_size
#define VfsFilesystem_Mount_req_handles kl_VfsFilesystem_Mount_req_handles
#define VfsFilesystem_Mount_res_handles kl_VfsFilesystem_Mount_res_handles
#define VfsFilesystem_Mount_err_handles kl_VfsFilesystem_Mount_err_handles
#define VfsFilesystem_Unmount_req_path_size kl_VfsFilesystem_Unmount_req_path_size
#define VfsFilesystem_Unmount_req_arena_size kl_VfsFilesystem_Unmount_req_arena_size
#define VfsFilesystem_Unmount_res_arena_size kl_VfsFilesystem_Unmount_res_arena_size
#define VfsFilesystem_Unmount_req_handles kl_VfsFilesystem_Unmount_req_handles
#define VfsFilesystem_Unmount_res_handles kl_VfsFilesystem_Unmount_res_handles
#define VfsFilesystem_Unmount_err_handles kl_VfsFilesystem_Unmount_err_handles
#define VfsFilesystem_Unlink_req_path_size kl_VfsFilesystem_Unlink_req_path_size
#define VfsFilesystem_Unlink_req_arena_size kl_VfsFilesystem_Unlink_req_arena_size
#define VfsFilesystem_Unlink_res_arena_size kl_VfsFilesystem_Unlink_res_arena_size
#define VfsFilesystem_Unlink_req_handles kl_VfsFilesystem_Unlink_req_handles
#define VfsFilesystem_Unlink_res_handles kl_VfsFilesystem_Unlink_res_handles
#define VfsFilesystem_Unlink_err_handles kl_VfsFilesystem_Unlink_err_handles
#define VfsFilesystem_Unlinkat_req_path_size kl_VfsFilesystem_Unlinkat_req_path_size
#define VfsFilesystem_Unlinkat_req_arena_size kl_VfsFilesystem_Unlinkat_req_arena_size
#define VfsFilesystem_Unlinkat_res_arena_size kl_VfsFilesystem_Unlinkat_res_arena_size
#define VfsFilesystem_Unlinkat_req_handles kl_VfsFilesystem_Unlinkat_req_handles
#define VfsFilesystem_Unlinkat_res_handles kl_VfsFilesystem_Unlinkat_res_handles
#define VfsFilesystem_Unlinkat_err_handles kl_VfsFilesystem_Unlinkat_err_handles
#define VfsFilesystem_Link_req_oldpath_size kl_VfsFilesystem_Link_req_oldpath_size
#define VfsFilesystem_Link_req_newpath_size kl_VfsFilesystem_Link_req_newpath_size
#define VfsFilesystem_Link_req_arena_size kl_VfsFilesystem_Link_req_arena_size
#define VfsFilesystem_Link_res_arena_size kl_VfsFilesystem_Link_res_arena_size
#define VfsFilesystem_Link_req_handles kl_VfsFilesystem_Link_req_handles
#define VfsFilesystem_Link_res_handles kl_VfsFilesystem_Link_res_handles
#define VfsFilesystem_Link_err_handles kl_VfsFilesystem_Link_err_handles
#define VfsFilesystem_Linkat_req_oldpath_size kl_VfsFilesystem_Linkat_req_oldpath_size
#define VfsFilesystem_Linkat_req_newpath_size kl_VfsFilesystem_Linkat_req_newpath_size
#define VfsFilesystem_Linkat_req_arena_size kl_VfsFilesystem_Linkat_req_arena_size
#define VfsFilesystem_Linkat_res_arena_size kl_VfsFilesystem_Linkat_res_arena_size
#define VfsFilesystem_Linkat_req_handles kl_VfsFilesystem_Linkat_req_handles
#define VfsFilesystem_Linkat_res_handles kl_VfsFilesystem_Linkat_res_handles
#define VfsFilesystem_Linkat_err_handles kl_VfsFilesystem_Linkat_err_handles
#define VfsFilesystem_Symlink_req_oldpath_size kl_VfsFilesystem_Symlink_req_oldpath_size
#define VfsFilesystem_Symlink_req_newpath_size kl_VfsFilesystem_Symlink_req_newpath_size
#define VfsFilesystem_Symlink_req_arena_size kl_VfsFilesystem_Symlink_req_arena_size
#define VfsFilesystem_Symlink_res_arena_size kl_VfsFilesystem_Symlink_res_arena_size
#define VfsFilesystem_Symlink_req_handles kl_VfsFilesystem_Symlink_req_handles
#define VfsFilesystem_Symlink_res_handles kl_VfsFilesystem_Symlink_res_handles
#define VfsFilesystem_Symlink_err_handles kl_VfsFilesystem_Symlink_err_handles
#define VfsFilesystem_Symlinkat_req_oldpath_size kl_VfsFilesystem_Symlinkat_req_oldpath_size
#define VfsFilesystem_Symlinkat_req_newpath_size kl_VfsFilesystem_Symlinkat_req_newpath_size
#define VfsFilesystem_Symlinkat_req_arena_size kl_VfsFilesystem_Symlinkat_req_arena_size
#define VfsFilesystem_Symlinkat_res_arena_size kl_VfsFilesystem_Symlinkat_res_arena_size
#define VfsFilesystem_Symlinkat_req_handles kl_VfsFilesystem_Symlinkat_req_handles
#define VfsFilesystem_Symlinkat_res_handles kl_VfsFilesystem_Symlinkat_res_handles
#define VfsFilesystem_Symlinkat_err_handles kl_VfsFilesystem_Symlinkat_err_handles
#define VfsFilesystem_Ftruncate_req_arena_size kl_VfsFilesystem_Ftruncate_req_arena_size
#define VfsFilesystem_Ftruncate_res_arena_size kl_VfsFilesystem_Ftruncate_res_arena_size
#define VfsFilesystem_Ftruncate_req_handles kl_VfsFilesystem_Ftruncate_req_handles
#define VfsFilesystem_Ftruncate_res_handles kl_VfsFilesystem_Ftruncate_res_handles
#define VfsFilesystem_Ftruncate_err_handles kl_VfsFilesystem_Ftruncate_err_handles
#define VfsFilesystem_Rename_req_oldpath_size kl_VfsFilesystem_Rename_req_oldpath_size
#define VfsFilesystem_Rename_req_newpath_size kl_VfsFilesystem_Rename_req_newpath_size
#define VfsFilesystem_Rename_req_arena_size kl_VfsFilesystem_Rename_req_arena_size
#define VfsFilesystem_Rename_res_arena_size kl_VfsFilesystem_Rename_res_arena_size
#define VfsFilesystem_Rename_req_handles kl_VfsFilesystem_Rename_req_handles
#define VfsFilesystem_Rename_res_handles kl_VfsFilesystem_Rename_res_handles
#define VfsFilesystem_Rename_err_handles kl_VfsFilesystem_Rename_err_handles
#define VfsFilesystem_Renameat_req_oldpath_size kl_VfsFilesystem_Renameat_req_oldpath_size
#define VfsFilesystem_Renameat_req_newpath_size kl_VfsFilesystem_Renameat_req_newpath_size
#define VfsFilesystem_Renameat_req_arena_size kl_VfsFilesystem_Renameat_req_arena_size
#define VfsFilesystem_Renameat_res_arena_size kl_VfsFilesystem_Renameat_res_arena_size
#define VfsFilesystem_Renameat_req_handles kl_VfsFilesystem_Renameat_req_handles
#define VfsFilesystem_Renameat_res_handles kl_VfsFilesystem_Renameat_res_handles
#define VfsFilesystem_Renameat_err_handles kl_VfsFilesystem_Renameat_err_handles
#define VfsFilesystem_Rmdir_req_path_size kl_VfsFilesystem_Rmdir_req_path_size
#define VfsFilesystem_Rmdir_req_arena_size kl_VfsFilesystem_Rmdir_req_arena_size
#define VfsFilesystem_Rmdir_res_arena_size kl_VfsFilesystem_Rmdir_res_arena_size
#define VfsFilesystem_Rmdir_req_handles kl_VfsFilesystem_Rmdir_req_handles
#define VfsFilesystem_Rmdir_res_handles kl_VfsFilesystem_Rmdir_res_handles
#define VfsFilesystem_Rmdir_err_handles kl_VfsFilesystem_Rmdir_err_handles
#define VfsFilesystem_Mkdir_req_path_size kl_VfsFilesystem_Mkdir_req_path_size
#define VfsFilesystem_Mkdir_req_arena_size kl_VfsFilesystem_Mkdir_req_arena_size
#define VfsFilesystem_Mkdir_res_arena_size kl_VfsFilesystem_Mkdir_res_arena_size
#define VfsFilesystem_Mkdir_req_handles kl_VfsFilesystem_Mkdir_req_handles
#define VfsFilesystem_Mkdir_res_handles kl_VfsFilesystem_Mkdir_res_handles
#define VfsFilesystem_Mkdir_err_handles kl_VfsFilesystem_Mkdir_err_handles
#define VfsFilesystem_Mkdirat_req_path_size kl_VfsFilesystem_Mkdirat_req_path_size
#define VfsFilesystem_Mkdirat_req_arena_size kl_VfsFilesystem_Mkdirat_req_arena_size
#define VfsFilesystem_Mkdirat_res_arena_size kl_VfsFilesystem_Mkdirat_res_arena_size
#define VfsFilesystem_Mkdirat_req_handles kl_VfsFilesystem_Mkdirat_req_handles
#define VfsFilesystem_Mkdirat_res_handles kl_VfsFilesystem_Mkdirat_res_handles
#define VfsFilesystem_Mkdirat_err_handles kl_VfsFilesystem_Mkdirat_err_handles
#define VfsFilesystem_Chdir_req_path_size kl_VfsFilesystem_Chdir_req_path_size
#define VfsFilesystem_Chdir_req_arena_size kl_VfsFilesystem_Chdir_req_arena_size
#define VfsFilesystem_Chdir_res_arena_size kl_VfsFilesystem_Chdir_res_arena_size
#define VfsFilesystem_Chdir_req_handles kl_VfsFilesystem_Chdir_req_handles
#define VfsFilesystem_Chdir_res_handles kl_VfsFilesystem_Chdir_res_handles
#define VfsFilesystem_Chdir_err_handles kl_VfsFilesystem_Chdir_err_handles
#define VfsFilesystem_Chmod_req_path_size kl_VfsFilesystem_Chmod_req_path_size
#define VfsFilesystem_Chmod_req_arena_size kl_VfsFilesystem_Chmod_req_arena_size
#define VfsFilesystem_Chmod_res_arena_size kl_VfsFilesystem_Chmod_res_arena_size
#define VfsFilesystem_Chmod_req_handles kl_VfsFilesystem_Chmod_req_handles
#define VfsFilesystem_Chmod_res_handles kl_VfsFilesystem_Chmod_res_handles
#define VfsFilesystem_Chmod_err_handles kl_VfsFilesystem_Chmod_err_handles
#define VfsFilesystem_Fchmod_req_arena_size kl_VfsFilesystem_Fchmod_req_arena_size
#define VfsFilesystem_Fchmod_res_arena_size kl_VfsFilesystem_Fchmod_res_arena_size
#define VfsFilesystem_Fchmod_req_handles kl_VfsFilesystem_Fchmod_req_handles
#define VfsFilesystem_Fchmod_res_handles kl_VfsFilesystem_Fchmod_res_handles
#define VfsFilesystem_Fchmod_err_handles kl_VfsFilesystem_Fchmod_err_handles
#define VfsFilesystem_Fchmodat_req_path_size kl_VfsFilesystem_Fchmodat_req_path_size
#define VfsFilesystem_Fchmodat_req_arena_size kl_VfsFilesystem_Fchmodat_req_arena_size
#define VfsFilesystem_Fchmodat_res_arena_size kl_VfsFilesystem_Fchmodat_res_arena_size
#define VfsFilesystem_Fchmodat_req_handles kl_VfsFilesystem_Fchmodat_req_handles
#define VfsFilesystem_Fchmodat_res_handles kl_VfsFilesystem_Fchmodat_res_handles
#define VfsFilesystem_Fchmodat_err_handles kl_VfsFilesystem_Fchmodat_err_handles
#define VfsFilesystem_Chroot_req_path_size kl_VfsFilesystem_Chroot_req_path_size
#define VfsFilesystem_Chroot_req_arena_size kl_VfsFilesystem_Chroot_req_arena_size
#define VfsFilesystem_Chroot_res_arena_size kl_VfsFilesystem_Chroot_res_arena_size
#define VfsFilesystem_Chroot_req_handles kl_VfsFilesystem_Chroot_req_handles
#define VfsFilesystem_Chroot_res_handles kl_VfsFilesystem_Chroot_res_handles
#define VfsFilesystem_Chroot_err_handles kl_VfsFilesystem_Chroot_err_handles
#define VfsFilesystem_Open_req_path_size kl_VfsFilesystem_Open_req_path_size
#define VfsFilesystem_Open_req_arena_size kl_VfsFilesystem_Open_req_arena_size
#define VfsFilesystem_Open_res_arena_size kl_VfsFilesystem_Open_res_arena_size
#define VfsFilesystem_Open_req_handles kl_VfsFilesystem_Open_req_handles
#define VfsFilesystem_Open_res_handles kl_VfsFilesystem_Open_res_handles
#define VfsFilesystem_Open_err_handles kl_VfsFilesystem_Open_err_handles
#define VfsFilesystem_Openat_req_path_size kl_VfsFilesystem_Openat_req_path_size
#define VfsFilesystem_Openat_req_arena_size kl_VfsFilesystem_Openat_req_arena_size
#define VfsFilesystem_Openat_res_arena_size kl_VfsFilesystem_Openat_res_arena_size
#define VfsFilesystem_Openat_req_handles kl_VfsFilesystem_Openat_req_handles
#define VfsFilesystem_Openat_res_handles kl_VfsFilesystem_Openat_res_handles
#define VfsFilesystem_Openat_err_handles kl_VfsFilesystem_Openat_err_handles
#define VfsFilesystem_Read_res_buf_size kl_VfsFilesystem_Read_res_buf_size
#define VfsFilesystem_Read_req_arena_size kl_VfsFilesystem_Read_req_arena_size
#define VfsFilesystem_Read_res_arena_size kl_VfsFilesystem_Read_res_arena_size
#define VfsFilesystem_Read_req_handles kl_VfsFilesystem_Read_req_handles
#define VfsFilesystem_Read_res_handles kl_VfsFilesystem_Read_res_handles
#define VfsFilesystem_Read_err_handles kl_VfsFilesystem_Read_err_handles
#define VfsFilesystem_Readv_req_iovlens_size kl_VfsFilesystem_Readv_req_iovlens_size
#define VfsFilesystem_Readv_res_iovs_size kl_VfsFilesystem_Readv_res_iovs_size
#define VfsFilesystem_Readv_res_iovs_elem_iovData_size kl_VfsFilesystem_Readv_res_iovs_elem_iovData_size
#define VfsFilesystem_Readv_req_arena_size kl_VfsFilesystem_Readv_req_arena_size
#define VfsFilesystem_Readv_res_arena_size kl_VfsFilesystem_Readv_res_arena_size
#define VfsFilesystem_Readv_req_handles kl_VfsFilesystem_Readv_req_handles
#define VfsFilesystem_Readv_res_handles kl_VfsFilesystem_Readv_res_handles
#define VfsFilesystem_Readv_err_handles kl_VfsFilesystem_Readv_err_handles
#define VfsFilesystem_Pread_res_buf_size kl_VfsFilesystem_Pread_res_buf_size
#define VfsFilesystem_Pread_req_arena_size kl_VfsFilesystem_Pread_req_arena_size
#define VfsFilesystem_Pread_res_arena_size kl_VfsFilesystem_Pread_res_arena_size
#define VfsFilesystem_Pread_req_handles kl_VfsFilesystem_Pread_req_handles
#define VfsFilesystem_Pread_res_handles kl_VfsFilesystem_Pread_res_handles
#define VfsFilesystem_Pread_err_handles kl_VfsFilesystem_Pread_err_handles
#define VfsFilesystem_Write_req_buf_size kl_VfsFilesystem_Write_req_buf_size
#define VfsFilesystem_Write_req_arena_size kl_VfsFilesystem_Write_req_arena_size
#define VfsFilesystem_Write_res_arena_size kl_VfsFilesystem_Write_res_arena_size
#define VfsFilesystem_Write_req_handles kl_VfsFilesystem_Write_req_handles
#define VfsFilesystem_Write_res_handles kl_VfsFilesystem_Write_res_handles
#define VfsFilesystem_Write_err_handles kl_VfsFilesystem_Write_err_handles
#define VfsFilesystem_Sendfile_req_arena_size kl_VfsFilesystem_Sendfile_req_arena_size
#define VfsFilesystem_Sendfile_res_arena_size kl_VfsFilesystem_Sendfile_res_arena_size
#define VfsFilesystem_Sendfile_req_handles kl_VfsFilesystem_Sendfile_req_handles
#define VfsFilesystem_Sendfile_res_handles kl_VfsFilesystem_Sendfile_res_handles
#define VfsFilesystem_Sendfile_err_handles kl_VfsFilesystem_Sendfile_err_handles
#define VfsFilesystem_Writev_req_iovs_size kl_VfsFilesystem_Writev_req_iovs_size
#define VfsFilesystem_Writev_req_iovs_elem_iovData_size kl_VfsFilesystem_Writev_req_iovs_elem_iovData_size
#define VfsFilesystem_Writev_req_arena_size kl_VfsFilesystem_Writev_req_arena_size
#define VfsFilesystem_Writev_res_arena_size kl_VfsFilesystem_Writev_res_arena_size
#define VfsFilesystem_Writev_req_handles kl_VfsFilesystem_Writev_req_handles
#define VfsFilesystem_Writev_res_handles kl_VfsFilesystem_Writev_res_handles
#define VfsFilesystem_Writev_err_handles kl_VfsFilesystem_Writev_err_handles
#define VfsFilesystem_Pwrite_req_buf_size kl_VfsFilesystem_Pwrite_req_buf_size
#define VfsFilesystem_Pwrite_req_arena_size kl_VfsFilesystem_Pwrite_req_arena_size
#define VfsFilesystem_Pwrite_res_arena_size kl_VfsFilesystem_Pwrite_res_arena_size
#define VfsFilesystem_Pwrite_req_handles kl_VfsFilesystem_Pwrite_req_handles
#define VfsFilesystem_Pwrite_res_handles kl_VfsFilesystem_Pwrite_res_handles
#define VfsFilesystem_Pwrite_err_handles kl_VfsFilesystem_Pwrite_err_handles
#define VfsFilesystem_Lseek_req_arena_size kl_VfsFilesystem_Lseek_req_arena_size
#define VfsFilesystem_Lseek_res_arena_size kl_VfsFilesystem_Lseek_res_arena_size
#define VfsFilesystem_Lseek_req_handles kl_VfsFilesystem_Lseek_req_handles
#define VfsFilesystem_Lseek_res_handles kl_VfsFilesystem_Lseek_res_handles
#define VfsFilesystem_Lseek_err_handles kl_VfsFilesystem_Lseek_err_handles
#define VfsFilesystem_Stat_req_pathname_size kl_VfsFilesystem_Stat_req_pathname_size
#define VfsFilesystem_Stat_req_arena_size kl_VfsFilesystem_Stat_req_arena_size
#define VfsFilesystem_Stat_res_arena_size kl_VfsFilesystem_Stat_res_arena_size
#define VfsFilesystem_Stat_req_handles kl_VfsFilesystem_Stat_req_handles
#define VfsFilesystem_Stat_res_handles kl_VfsFilesystem_Stat_res_handles
#define VfsFilesystem_Stat_err_handles kl_VfsFilesystem_Stat_err_handles
#define VfsFilesystem_Lstat_req_pathname_size kl_VfsFilesystem_Lstat_req_pathname_size
#define VfsFilesystem_Lstat_req_arena_size kl_VfsFilesystem_Lstat_req_arena_size
#define VfsFilesystem_Lstat_res_arena_size kl_VfsFilesystem_Lstat_res_arena_size
#define VfsFilesystem_Lstat_req_handles kl_VfsFilesystem_Lstat_req_handles
#define VfsFilesystem_Lstat_res_handles kl_VfsFilesystem_Lstat_res_handles
#define VfsFilesystem_Lstat_err_handles kl_VfsFilesystem_Lstat_err_handles
#define VfsFilesystem_Fstat_req_arena_size kl_VfsFilesystem_Fstat_req_arena_size
#define VfsFilesystem_Fstat_res_arena_size kl_VfsFilesystem_Fstat_res_arena_size
#define VfsFilesystem_Fstat_req_handles kl_VfsFilesystem_Fstat_req_handles
#define VfsFilesystem_Fstat_res_handles kl_VfsFilesystem_Fstat_res_handles
#define VfsFilesystem_Fstat_err_handles kl_VfsFilesystem_Fstat_err_handles
#define VfsFilesystem_Fstatat_req_pathname_size kl_VfsFilesystem_Fstatat_req_pathname_size
#define VfsFilesystem_Fstatat_req_arena_size kl_VfsFilesystem_Fstatat_req_arena_size
#define VfsFilesystem_Fstatat_res_arena_size kl_VfsFilesystem_Fstatat_res_arena_size
#define VfsFilesystem_Fstatat_req_handles kl_VfsFilesystem_Fstatat_req_handles
#define VfsFilesystem_Fstatat_res_handles kl_VfsFilesystem_Fstatat_res_handles
#define VfsFilesystem_Fstatat_err_handles kl_VfsFilesystem_Fstatat_err_handles
#define VfsFilesystem_Fsync_req_arena_size kl_VfsFilesystem_Fsync_req_arena_size
#define VfsFilesystem_Fsync_res_arena_size kl_VfsFilesystem_Fsync_res_arena_size
#define VfsFilesystem_Fsync_req_handles kl_VfsFilesystem_Fsync_req_handles
#define VfsFilesystem_Fsync_res_handles kl_VfsFilesystem_Fsync_res_handles
#define VfsFilesystem_Fsync_err_handles kl_VfsFilesystem_Fsync_err_handles
#define VfsFilesystem_Fdatasync_req_arena_size kl_VfsFilesystem_Fdatasync_req_arena_size
#define VfsFilesystem_Fdatasync_res_arena_size kl_VfsFilesystem_Fdatasync_res_arena_size
#define VfsFilesystem_Fdatasync_req_handles kl_VfsFilesystem_Fdatasync_req_handles
#define VfsFilesystem_Fdatasync_res_handles kl_VfsFilesystem_Fdatasync_res_handles
#define VfsFilesystem_Fdatasync_err_handles kl_VfsFilesystem_Fdatasync_err_handles
#define VfsFilesystem_Close_req_arena_size kl_VfsFilesystem_Close_req_arena_size
#define VfsFilesystem_Close_res_arena_size kl_VfsFilesystem_Close_res_arena_size
#define VfsFilesystem_Close_req_handles kl_VfsFilesystem_Close_req_handles
#define VfsFilesystem_Close_res_handles kl_VfsFilesystem_Close_res_handles
#define VfsFilesystem_Close_err_handles kl_VfsFilesystem_Close_err_handles
#define VfsFilesystem_StatVfs_req_pathname_size kl_VfsFilesystem_StatVfs_req_pathname_size
#define VfsFilesystem_StatVfs_req_arena_size kl_VfsFilesystem_StatVfs_req_arena_size
#define VfsFilesystem_StatVfs_res_arena_size kl_VfsFilesystem_StatVfs_res_arena_size
#define VfsFilesystem_StatVfs_req_handles kl_VfsFilesystem_StatVfs_req_handles
#define VfsFilesystem_StatVfs_res_handles kl_VfsFilesystem_StatVfs_res_handles
#define VfsFilesystem_StatVfs_err_handles kl_VfsFilesystem_StatVfs_err_handles
#define VfsFilesystem_FStatVfs_req_arena_size kl_VfsFilesystem_FStatVfs_req_arena_size
#define VfsFilesystem_FStatVfs_res_arena_size kl_VfsFilesystem_FStatVfs_res_arena_size
#define VfsFilesystem_FStatVfs_req_handles kl_VfsFilesystem_FStatVfs_req_handles
#define VfsFilesystem_FStatVfs_res_handles kl_VfsFilesystem_FStatVfs_res_handles
#define VfsFilesystem_FStatVfs_err_handles kl_VfsFilesystem_FStatVfs_err_handles
#define VfsFilesystem_Pipe_req_arena_size kl_VfsFilesystem_Pipe_req_arena_size
#define VfsFilesystem_Pipe_res_arena_size kl_VfsFilesystem_Pipe_res_arena_size
#define VfsFilesystem_Pipe_req_handles kl_VfsFilesystem_Pipe_req_handles
#define VfsFilesystem_Pipe_res_handles kl_VfsFilesystem_Pipe_res_handles
#define VfsFilesystem_Pipe_err_handles kl_VfsFilesystem_Pipe_err_handles
#define VfsFilesystem_Getdents_res_buf_size kl_VfsFilesystem_Getdents_res_buf_size
#define VfsFilesystem_Getdents_req_arena_size kl_VfsFilesystem_Getdents_req_arena_size
#define VfsFilesystem_Getdents_res_arena_size kl_VfsFilesystem_Getdents_res_arena_size
#define VfsFilesystem_Getdents_req_handles kl_VfsFilesystem_Getdents_req_handles
#define VfsFilesystem_Getdents_res_handles kl_VfsFilesystem_Getdents_res_handles
#define VfsFilesystem_Getdents_err_handles kl_VfsFilesystem_Getdents_err_handles
#define VfsFilesystem_Socket_req_arena_size kl_VfsFilesystem_Socket_req_arena_size
#define VfsFilesystem_Socket_res_arena_size kl_VfsFilesystem_Socket_res_arena_size
#define VfsFilesystem_Socket_req_handles kl_VfsFilesystem_Socket_req_handles
#define VfsFilesystem_Socket_res_handles kl_VfsFilesystem_Socket_res_handles
#define VfsFilesystem_Socket_err_handles kl_VfsFilesystem_Socket_err_handles
#define VfsFilesystem_Socketpair_req_arena_size kl_VfsFilesystem_Socketpair_req_arena_size
#define VfsFilesystem_Socketpair_res_arena_size kl_VfsFilesystem_Socketpair_res_arena_size
#define VfsFilesystem_Socketpair_req_handles kl_VfsFilesystem_Socketpair_req_handles
#define VfsFilesystem_Socketpair_res_handles kl_VfsFilesystem_Socketpair_res_handles
#define VfsFilesystem_Socketpair_err_handles kl_VfsFilesystem_Socketpair_err_handles
#define VfsFilesystem_Bind_req_addr_size kl_VfsFilesystem_Bind_req_addr_size
#define VfsFilesystem_Bind_req_arena_size kl_VfsFilesystem_Bind_req_arena_size
#define VfsFilesystem_Bind_res_arena_size kl_VfsFilesystem_Bind_res_arena_size
#define VfsFilesystem_Bind_req_handles kl_VfsFilesystem_Bind_req_handles
#define VfsFilesystem_Bind_res_handles kl_VfsFilesystem_Bind_res_handles
#define VfsFilesystem_Bind_err_handles kl_VfsFilesystem_Bind_err_handles
#define VfsFilesystem_Listen_req_arena_size kl_VfsFilesystem_Listen_req_arena_size
#define VfsFilesystem_Listen_res_arena_size kl_VfsFilesystem_Listen_res_arena_size
#define VfsFilesystem_Listen_req_handles kl_VfsFilesystem_Listen_req_handles
#define VfsFilesystem_Listen_res_handles kl_VfsFilesystem_Listen_res_handles
#define VfsFilesystem_Listen_err_handles kl_VfsFilesystem_Listen_err_handles
#define VfsFilesystem_Connect_req_addr_size kl_VfsFilesystem_Connect_req_addr_size
#define VfsFilesystem_Connect_req_arena_size kl_VfsFilesystem_Connect_req_arena_size
#define VfsFilesystem_Connect_res_arena_size kl_VfsFilesystem_Connect_res_arena_size
#define VfsFilesystem_Connect_req_handles kl_VfsFilesystem_Connect_req_handles
#define VfsFilesystem_Connect_res_handles kl_VfsFilesystem_Connect_res_handles
#define VfsFilesystem_Connect_err_handles kl_VfsFilesystem_Connect_err_handles
#define VfsFilesystem_Accept_res_addr_size kl_VfsFilesystem_Accept_res_addr_size
#define VfsFilesystem_Accept_req_arena_size kl_VfsFilesystem_Accept_req_arena_size
#define VfsFilesystem_Accept_res_arena_size kl_VfsFilesystem_Accept_res_arena_size
#define VfsFilesystem_Accept_req_handles kl_VfsFilesystem_Accept_req_handles
#define VfsFilesystem_Accept_res_handles kl_VfsFilesystem_Accept_res_handles
#define VfsFilesystem_Accept_err_handles kl_VfsFilesystem_Accept_err_handles
#define VfsFilesystem_Poll_req_fds_size kl_VfsFilesystem_Poll_req_fds_size
#define VfsFilesystem_Poll_res_outFds_size kl_VfsFilesystem_Poll_res_outFds_size
#define VfsFilesystem_Poll_req_arena_size kl_VfsFilesystem_Poll_req_arena_size
#define VfsFilesystem_Poll_res_arena_size kl_VfsFilesystem_Poll_res_arena_size
#define VfsFilesystem_Poll_req_handles kl_VfsFilesystem_Poll_req_handles
#define VfsFilesystem_Poll_res_handles kl_VfsFilesystem_Poll_res_handles
#define VfsFilesystem_Poll_err_handles kl_VfsFilesystem_Poll_err_handles
#define VfsFilesystem_Shutdown_req_arena_size kl_VfsFilesystem_Shutdown_req_arena_size
#define VfsFilesystem_Shutdown_res_arena_size kl_VfsFilesystem_Shutdown_res_arena_size
#define VfsFilesystem_Shutdown_req_handles kl_VfsFilesystem_Shutdown_req_handles
#define VfsFilesystem_Shutdown_res_handles kl_VfsFilesystem_Shutdown_res_handles
#define VfsFilesystem_Shutdown_err_handles kl_VfsFilesystem_Shutdown_err_handles
#define VfsFilesystem_Getnameinfo_req_sa_size kl_VfsFilesystem_Getnameinfo_req_sa_size
#define VfsFilesystem_Getnameinfo_res_node_size kl_VfsFilesystem_Getnameinfo_res_node_size
#define VfsFilesystem_Getnameinfo_res_service_size kl_VfsFilesystem_Getnameinfo_res_service_size
#define VfsFilesystem_Getnameinfo_req_arena_size kl_VfsFilesystem_Getnameinfo_req_arena_size
#define VfsFilesystem_Getnameinfo_res_arena_size kl_VfsFilesystem_Getnameinfo_res_arena_size
#define VfsFilesystem_Getnameinfo_req_handles kl_VfsFilesystem_Getnameinfo_req_handles
#define VfsFilesystem_Getnameinfo_res_handles kl_VfsFilesystem_Getnameinfo_res_handles
#define VfsFilesystem_Getnameinfo_err_handles kl_VfsFilesystem_Getnameinfo_err_handles
#define VfsFilesystem_Getaddrinfo_req_host_size kl_VfsFilesystem_Getaddrinfo_req_host_size
#define VfsFilesystem_Getaddrinfo_req_serv_size kl_VfsFilesystem_Getaddrinfo_req_serv_size
#define VfsFilesystem_Getaddrinfo_req_hints_size kl_VfsFilesystem_Getaddrinfo_req_hints_size
#define VfsFilesystem_Getaddrinfo_res_info_size kl_VfsFilesystem_Getaddrinfo_res_info_size
#define VfsFilesystem_Getaddrinfo_req_arena_size kl_VfsFilesystem_Getaddrinfo_req_arena_size
#define VfsFilesystem_Getaddrinfo_res_arena_size kl_VfsFilesystem_Getaddrinfo_res_arena_size
#define VfsFilesystem_Getaddrinfo_req_handles kl_VfsFilesystem_Getaddrinfo_req_handles
#define VfsFilesystem_Getaddrinfo_res_handles kl_VfsFilesystem_Getaddrinfo_res_handles
#define VfsFilesystem_Getaddrinfo_err_handles kl_VfsFilesystem_Getaddrinfo_err_handles
#define VfsFilesystem_Getifaddrs_res_res_size kl_VfsFilesystem_Getifaddrs_res_res_size
#define VfsFilesystem_Getifaddrs_res_res_elem_ifaName_size kl_VfsFilesystem_Getifaddrs_res_res_elem_ifaName_size
#define VfsFilesystem_Getifaddrs_res_res_elem_ifaAddr_size kl_VfsFilesystem_Getifaddrs_res_res_elem_ifaAddr_size
#define VfsFilesystem_Getifaddrs_res_res_elem_ifaNetmask_size kl_VfsFilesystem_Getifaddrs_res_res_elem_ifaNetmask_size
#define VfsFilesystem_Getifaddrs_res_res_elem_ifaDstaddr_size kl_VfsFilesystem_Getifaddrs_res_res_elem_ifaDstaddr_size
#define VfsFilesystem_Getifaddrs_req_arena_size kl_VfsFilesystem_Getifaddrs_req_arena_size
#define VfsFilesystem_Getifaddrs_res_arena_size kl_VfsFilesystem_Getifaddrs_res_arena_size
#define VfsFilesystem_Getifaddrs_req_handles kl_VfsFilesystem_Getifaddrs_req_handles
#define VfsFilesystem_Getifaddrs_res_handles kl_VfsFilesystem_Getifaddrs_res_handles
#define VfsFilesystem_Getifaddrs_err_handles kl_VfsFilesystem_Getifaddrs_err_handles
#define VfsFilesystem_Getpeername_res_addr_size kl_VfsFilesystem_Getpeername_res_addr_size
#define VfsFilesystem_Getpeername_req_arena_size kl_VfsFilesystem_Getpeername_req_arena_size
#define VfsFilesystem_Getpeername_res_arena_size kl_VfsFilesystem_Getpeername_res_arena_size
#define VfsFilesystem_Getpeername_req_handles kl_VfsFilesystem_Getpeername_req_handles
#define VfsFilesystem_Getpeername_res_handles kl_VfsFilesystem_Getpeername_res_handles
#define VfsFilesystem_Getpeername_err_handles kl_VfsFilesystem_Getpeername_err_handles
#define VfsFilesystem_Getsockname_res_addr_size kl_VfsFilesystem_Getsockname_res_addr_size
#define VfsFilesystem_Getsockname_req_arena_size kl_VfsFilesystem_Getsockname_req_arena_size
#define VfsFilesystem_Getsockname_res_arena_size kl_VfsFilesystem_Getsockname_res_arena_size
#define VfsFilesystem_Getsockname_req_handles kl_VfsFilesystem_Getsockname_req_handles
#define VfsFilesystem_Getsockname_res_handles kl_VfsFilesystem_Getsockname_res_handles
#define VfsFilesystem_Getsockname_err_handles kl_VfsFilesystem_Getsockname_err_handles
#define VfsFilesystem_Gethostbyname_req_name_size kl_VfsFilesystem_Gethostbyname_req_name_size
#define VfsFilesystem_Gethostbyname_res_hostent_size kl_VfsFilesystem_Gethostbyname_res_hostent_size
#define VfsFilesystem_Gethostbyname_req_arena_size kl_VfsFilesystem_Gethostbyname_req_arena_size
#define VfsFilesystem_Gethostbyname_res_arena_size kl_VfsFilesystem_Gethostbyname_res_arena_size
#define VfsFilesystem_Gethostbyname_req_handles kl_VfsFilesystem_Gethostbyname_req_handles
#define VfsFilesystem_Gethostbyname_res_handles kl_VfsFilesystem_Gethostbyname_res_handles
#define VfsFilesystem_Gethostbyname_err_handles kl_VfsFilesystem_Gethostbyname_err_handles
#define VfsFilesystem_Getnetbyname_req_name_size kl_VfsFilesystem_Getnetbyname_req_name_size
#define VfsFilesystem_Getnetbyname_res_netent_name_size kl_VfsFilesystem_Getnetbyname_res_netent_name_size
#define VfsFilesystem_Getnetbyname_res_netent_aliases_size kl_VfsFilesystem_Getnetbyname_res_netent_aliases_size
#define VfsFilesystem_Getnetbyname_req_arena_size kl_VfsFilesystem_Getnetbyname_req_arena_size
#define VfsFilesystem_Getnetbyname_res_arena_size kl_VfsFilesystem_Getnetbyname_res_arena_size
#define VfsFilesystem_Getnetbyname_req_handles kl_VfsFilesystem_Getnetbyname_req_handles
#define VfsFilesystem_Getnetbyname_res_handles kl_VfsFilesystem_Getnetbyname_res_handles
#define VfsFilesystem_Getnetbyname_err_handles kl_VfsFilesystem_Getnetbyname_err_handles
#define VfsFilesystem_Getprotobyname_req_name_size kl_VfsFilesystem_Getprotobyname_req_name_size
#define VfsFilesystem_Getprotobyname_res_protoent_name_size kl_VfsFilesystem_Getprotobyname_res_protoent_name_size
#define VfsFilesystem_Getprotobyname_res_protoent_aliases_size kl_VfsFilesystem_Getprotobyname_res_protoent_aliases_size
#define VfsFilesystem_Getprotobyname_req_arena_size kl_VfsFilesystem_Getprotobyname_req_arena_size
#define VfsFilesystem_Getprotobyname_res_arena_size kl_VfsFilesystem_Getprotobyname_res_arena_size
#define VfsFilesystem_Getprotobyname_req_handles kl_VfsFilesystem_Getprotobyname_req_handles
#define VfsFilesystem_Getprotobyname_res_handles kl_VfsFilesystem_Getprotobyname_res_handles
#define VfsFilesystem_Getprotobyname_err_handles kl_VfsFilesystem_Getprotobyname_err_handles
#define VfsFilesystem_Getprotobynumber_res_protoent_name_size kl_VfsFilesystem_Getprotobynumber_res_protoent_name_size
#define VfsFilesystem_Getprotobynumber_res_protoent_aliases_size kl_VfsFilesystem_Getprotobynumber_res_protoent_aliases_size
#define VfsFilesystem_Getprotobynumber_req_arena_size kl_VfsFilesystem_Getprotobynumber_req_arena_size
#define VfsFilesystem_Getprotobynumber_res_arena_size kl_VfsFilesystem_Getprotobynumber_res_arena_size
#define VfsFilesystem_Getprotobynumber_req_handles kl_VfsFilesystem_Getprotobynumber_req_handles
#define VfsFilesystem_Getprotobynumber_res_handles kl_VfsFilesystem_Getprotobynumber_res_handles
#define VfsFilesystem_Getprotobynumber_err_handles kl_VfsFilesystem_Getprotobynumber_err_handles
#define VfsFilesystem_Getsockopt_res_optval_size kl_VfsFilesystem_Getsockopt_res_optval_size
#define VfsFilesystem_Getsockopt_req_arena_size kl_VfsFilesystem_Getsockopt_req_arena_size
#define VfsFilesystem_Getsockopt_res_arena_size kl_VfsFilesystem_Getsockopt_res_arena_size
#define VfsFilesystem_Getsockopt_req_handles kl_VfsFilesystem_Getsockopt_req_handles
#define VfsFilesystem_Getsockopt_res_handles kl_VfsFilesystem_Getsockopt_res_handles
#define VfsFilesystem_Getsockopt_err_handles kl_VfsFilesystem_Getsockopt_err_handles
#define VfsFilesystem_Setsockopt_req_optval_size kl_VfsFilesystem_Setsockopt_req_optval_size
#define VfsFilesystem_Setsockopt_req_arena_size kl_VfsFilesystem_Setsockopt_req_arena_size
#define VfsFilesystem_Setsockopt_res_arena_size kl_VfsFilesystem_Setsockopt_res_arena_size
#define VfsFilesystem_Setsockopt_req_handles kl_VfsFilesystem_Setsockopt_req_handles
#define VfsFilesystem_Setsockopt_res_handles kl_VfsFilesystem_Setsockopt_res_handles
#define VfsFilesystem_Setsockopt_err_handles kl_VfsFilesystem_Setsockopt_err_handles
#define VfsFilesystem_Recv_res_buf_size kl_VfsFilesystem_Recv_res_buf_size
#define VfsFilesystem_Recv_req_arena_size kl_VfsFilesystem_Recv_req_arena_size
#define VfsFilesystem_Recv_res_arena_size kl_VfsFilesystem_Recv_res_arena_size
#define VfsFilesystem_Recv_req_handles kl_VfsFilesystem_Recv_req_handles
#define VfsFilesystem_Recv_res_handles kl_VfsFilesystem_Recv_res_handles
#define VfsFilesystem_Recv_err_handles kl_VfsFilesystem_Recv_err_handles
#define VfsFilesystem_Recvfrom_res_buf_size kl_VfsFilesystem_Recvfrom_res_buf_size
#define VfsFilesystem_Recvfrom_res_srcAddr_size kl_VfsFilesystem_Recvfrom_res_srcAddr_size
#define VfsFilesystem_Recvfrom_req_arena_size kl_VfsFilesystem_Recvfrom_req_arena_size
#define VfsFilesystem_Recvfrom_res_arena_size kl_VfsFilesystem_Recvfrom_res_arena_size
#define VfsFilesystem_Recvfrom_req_handles kl_VfsFilesystem_Recvfrom_req_handles
#define VfsFilesystem_Recvfrom_res_handles kl_VfsFilesystem_Recvfrom_res_handles
#define VfsFilesystem_Recvfrom_err_handles kl_VfsFilesystem_Recvfrom_err_handles
#define VfsFilesystem_Recvmsg_req_msgIn_msgName_size kl_VfsFilesystem_Recvmsg_req_msgIn_msgName_size
#define VfsFilesystem_Recvmsg_req_msgIn_msgIovs_size kl_VfsFilesystem_Recvmsg_req_msgIn_msgIovs_size
#define VfsFilesystem_Recvmsg_req_msgIn_msgIovs_elem_iovData_size kl_VfsFilesystem_Recvmsg_req_msgIn_msgIovs_elem_iovData_size
#define VfsFilesystem_Recvmsg_req_msgIn_msgData_size kl_VfsFilesystem_Recvmsg_req_msgIn_msgData_size
#define VfsFilesystem_Recvmsg_res_msgOut_msgName_size kl_VfsFilesystem_Recvmsg_res_msgOut_msgName_size
#define VfsFilesystem_Recvmsg_res_msgOut_msgIovs_size kl_VfsFilesystem_Recvmsg_res_msgOut_msgIovs_size
#define VfsFilesystem_Recvmsg_res_msgOut_msgIovs_elem_iovData_size kl_VfsFilesystem_Recvmsg_res_msgOut_msgIovs_elem_iovData_size
#define VfsFilesystem_Recvmsg_res_msgOut_msgData_size kl_VfsFilesystem_Recvmsg_res_msgOut_msgData_size
#define VfsFilesystem_Recvmsg_req_arena_size kl_VfsFilesystem_Recvmsg_req_arena_size
#define VfsFilesystem_Recvmsg_res_arena_size kl_VfsFilesystem_Recvmsg_res_arena_size
#define VfsFilesystem_Recvmsg_req_handles kl_VfsFilesystem_Recvmsg_req_handles
#define VfsFilesystem_Recvmsg_res_handles kl_VfsFilesystem_Recvmsg_res_handles
#define VfsFilesystem_Recvmsg_err_handles kl_VfsFilesystem_Recvmsg_err_handles
#define VfsFilesystem_Send_req_buf_size kl_VfsFilesystem_Send_req_buf_size
#define VfsFilesystem_Send_req_arena_size kl_VfsFilesystem_Send_req_arena_size
#define VfsFilesystem_Send_res_arena_size kl_VfsFilesystem_Send_res_arena_size
#define VfsFilesystem_Send_req_handles kl_VfsFilesystem_Send_req_handles
#define VfsFilesystem_Send_res_handles kl_VfsFilesystem_Send_res_handles
#define VfsFilesystem_Send_err_handles kl_VfsFilesystem_Send_err_handles
#define VfsFilesystem_Sendto_req_buf_size kl_VfsFilesystem_Sendto_req_buf_size
#define VfsFilesystem_Sendto_req_addr_size kl_VfsFilesystem_Sendto_req_addr_size
#define VfsFilesystem_Sendto_req_arena_size kl_VfsFilesystem_Sendto_req_arena_size
#define VfsFilesystem_Sendto_res_arena_size kl_VfsFilesystem_Sendto_res_arena_size
#define VfsFilesystem_Sendto_req_handles kl_VfsFilesystem_Sendto_req_handles
#define VfsFilesystem_Sendto_res_handles kl_VfsFilesystem_Sendto_res_handles
#define VfsFilesystem_Sendto_err_handles kl_VfsFilesystem_Sendto_err_handles
#define VfsFilesystem_Sendmsg_req_msgIn_msgName_size kl_VfsFilesystem_Sendmsg_req_msgIn_msgName_size
#define VfsFilesystem_Sendmsg_req_msgIn_msgIovs_size kl_VfsFilesystem_Sendmsg_req_msgIn_msgIovs_size
#define VfsFilesystem_Sendmsg_req_msgIn_msgIovs_elem_iovData_size kl_VfsFilesystem_Sendmsg_req_msgIn_msgIovs_elem_iovData_size
#define VfsFilesystem_Sendmsg_req_msgIn_msgData_size kl_VfsFilesystem_Sendmsg_req_msgIn_msgData_size
#define VfsFilesystem_Sendmsg_req_arena_size kl_VfsFilesystem_Sendmsg_req_arena_size
#define VfsFilesystem_Sendmsg_res_arena_size kl_VfsFilesystem_Sendmsg_res_arena_size
#define VfsFilesystem_Sendmsg_req_handles kl_VfsFilesystem_Sendmsg_req_handles
#define VfsFilesystem_Sendmsg_res_handles kl_VfsFilesystem_Sendmsg_res_handles
#define VfsFilesystem_Sendmsg_err_handles kl_VfsFilesystem_Sendmsg_err_handles
#define VfsFilesystem_Synchronize_req_arena_size kl_VfsFilesystem_Synchronize_req_arena_size
#define VfsFilesystem_Synchronize_res_arena_size kl_VfsFilesystem_Synchronize_res_arena_size
#define VfsFilesystem_Synchronize_req_handles kl_VfsFilesystem_Synchronize_req_handles
#define VfsFilesystem_Synchronize_res_handles kl_VfsFilesystem_Synchronize_res_handles
#define VfsFilesystem_Synchronize_err_handles kl_VfsFilesystem_Synchronize_err_handles
#define VfsFilesystem_Fcntl_req_argIn_size kl_VfsFilesystem_Fcntl_req_argIn_size
#define VfsFilesystem_Fcntl_res_argOut_size kl_VfsFilesystem_Fcntl_res_argOut_size
#define VfsFilesystem_Fcntl_req_arena_size kl_VfsFilesystem_Fcntl_req_arena_size
#define VfsFilesystem_Fcntl_res_arena_size kl_VfsFilesystem_Fcntl_res_arena_size
#define VfsFilesystem_Fcntl_req_handles kl_VfsFilesystem_Fcntl_req_handles
#define VfsFilesystem_Fcntl_res_handles kl_VfsFilesystem_Fcntl_res_handles
#define VfsFilesystem_Fcntl_err_handles kl_VfsFilesystem_Fcntl_err_handles
#define VfsFilesystem_Ioctl_req_argIn_size kl_VfsFilesystem_Ioctl_req_argIn_size
#define VfsFilesystem_Ioctl_res_argOut_size kl_VfsFilesystem_Ioctl_res_argOut_size
#define VfsFilesystem_Ioctl_req_arena_size kl_VfsFilesystem_Ioctl_req_arena_size
#define VfsFilesystem_Ioctl_res_arena_size kl_VfsFilesystem_Ioctl_res_arena_size
#define VfsFilesystem_Ioctl_req_handles kl_VfsFilesystem_Ioctl_req_handles
#define VfsFilesystem_Ioctl_res_handles kl_VfsFilesystem_Ioctl_res_handles
#define VfsFilesystem_Ioctl_err_handles kl_VfsFilesystem_Ioctl_err_handles
#define VfsFilesystem_Futimens_req_times_size kl_VfsFilesystem_Futimens_req_times_size
#define VfsFilesystem_Futimens_req_arena_size kl_VfsFilesystem_Futimens_req_arena_size
#define VfsFilesystem_Futimens_res_arena_size kl_VfsFilesystem_Futimens_res_arena_size
#define VfsFilesystem_Futimens_req_handles kl_VfsFilesystem_Futimens_req_handles
#define VfsFilesystem_Futimens_res_handles kl_VfsFilesystem_Futimens_res_handles
#define VfsFilesystem_Futimens_err_handles kl_VfsFilesystem_Futimens_err_handles
#define VfsFilesystem_Utimensat_req_pathname_size kl_VfsFilesystem_Utimensat_req_pathname_size
#define VfsFilesystem_Utimensat_req_times_size kl_VfsFilesystem_Utimensat_req_times_size
#define VfsFilesystem_Utimensat_req_arena_size kl_VfsFilesystem_Utimensat_req_arena_size
#define VfsFilesystem_Utimensat_res_arena_size kl_VfsFilesystem_Utimensat_res_arena_size
#define VfsFilesystem_Utimensat_req_handles kl_VfsFilesystem_Utimensat_req_handles
#define VfsFilesystem_Utimensat_res_handles kl_VfsFilesystem_Utimensat_res_handles
#define VfsFilesystem_Utimensat_err_handles kl_VfsFilesystem_Utimensat_err_handles
#define VfsFilesystem_req_arena_size kl_VfsFilesystem_req_arena_size
#define VfsFilesystem_res_arena_size kl_VfsFilesystem_res_arena_size
#define VfsFilesystem_arena_size kl_VfsFilesystem_arena_size
#define VfsFilesystem_req_handles kl_VfsFilesystem_req_handles
#define VfsFilesystem_res_handles kl_VfsFilesystem_res_handles
#define VfsFilesystem_err_handles kl_VfsFilesystem_err_handles
#define VfsFilesystem_ClientConnected_req kl_VfsFilesystem_ClientConnected_req
#define VfsFilesystem_ClientConnected_res kl_VfsFilesystem_ClientConnected_res
#define VfsFilesystem_ClientDisconnected_req kl_VfsFilesystem_ClientDisconnected_req
#define VfsFilesystem_ClientDisconnected_res kl_VfsFilesystem_ClientDisconnected_res
#define VfsFilesystem_DisconnectAllClients_req kl_VfsFilesystem_DisconnectAllClients_req
#define VfsFilesystem_DisconnectAllClients_res kl_VfsFilesystem_DisconnectAllClients_res
#define VfsFilesystem_Mount_req kl_VfsFilesystem_Mount_req
#define VfsFilesystem_Mount_res kl_VfsFilesystem_Mount_res
#define VfsFilesystem_Unmount_req kl_VfsFilesystem_Unmount_req
#define VfsFilesystem_Unmount_res kl_VfsFilesystem_Unmount_res
#define VfsFilesystem_Unlink_req kl_VfsFilesystem_Unlink_req
#define VfsFilesystem_Unlink_res kl_VfsFilesystem_Unlink_res
#define VfsFilesystem_Unlinkat_req kl_VfsFilesystem_Unlinkat_req
#define VfsFilesystem_Unlinkat_res kl_VfsFilesystem_Unlinkat_res
#define VfsFilesystem_Link_req kl_VfsFilesystem_Link_req
#define VfsFilesystem_Link_res kl_VfsFilesystem_Link_res
#define VfsFilesystem_Linkat_req kl_VfsFilesystem_Linkat_req
#define VfsFilesystem_Linkat_res kl_VfsFilesystem_Linkat_res
#define VfsFilesystem_Symlink_req kl_VfsFilesystem_Symlink_req
#define VfsFilesystem_Symlink_res kl_VfsFilesystem_Symlink_res
#define VfsFilesystem_Symlinkat_req kl_VfsFilesystem_Symlinkat_req
#define VfsFilesystem_Symlinkat_res kl_VfsFilesystem_Symlinkat_res
#define VfsFilesystem_Ftruncate_req kl_VfsFilesystem_Ftruncate_req
#define VfsFilesystem_Ftruncate_res kl_VfsFilesystem_Ftruncate_res
#define VfsFilesystem_Rename_req kl_VfsFilesystem_Rename_req
#define VfsFilesystem_Rename_res kl_VfsFilesystem_Rename_res
#define VfsFilesystem_Renameat_req kl_VfsFilesystem_Renameat_req
#define VfsFilesystem_Renameat_res kl_VfsFilesystem_Renameat_res
#define VfsFilesystem_Rmdir_req kl_VfsFilesystem_Rmdir_req
#define VfsFilesystem_Rmdir_res kl_VfsFilesystem_Rmdir_res
#define VfsFilesystem_Mkdir_req kl_VfsFilesystem_Mkdir_req
#define VfsFilesystem_Mkdir_res kl_VfsFilesystem_Mkdir_res
#define VfsFilesystem_Mkdirat_req kl_VfsFilesystem_Mkdirat_req
#define VfsFilesystem_Mkdirat_res kl_VfsFilesystem_Mkdirat_res
#define VfsFilesystem_Chdir_req kl_VfsFilesystem_Chdir_req
#define VfsFilesystem_Chdir_res kl_VfsFilesystem_Chdir_res
#define VfsFilesystem_Chmod_req kl_VfsFilesystem_Chmod_req
#define VfsFilesystem_Chmod_res kl_VfsFilesystem_Chmod_res
#define VfsFilesystem_Fchmod_req kl_VfsFilesystem_Fchmod_req
#define VfsFilesystem_Fchmod_res kl_VfsFilesystem_Fchmod_res
#define VfsFilesystem_Fchmodat_req kl_VfsFilesystem_Fchmodat_req
#define VfsFilesystem_Fchmodat_res kl_VfsFilesystem_Fchmodat_res
#define VfsFilesystem_Chroot_req kl_VfsFilesystem_Chroot_req
#define VfsFilesystem_Chroot_res kl_VfsFilesystem_Chroot_res
#define VfsFilesystem_Open_req kl_VfsFilesystem_Open_req
#define VfsFilesystem_Open_res kl_VfsFilesystem_Open_res
#define VfsFilesystem_Openat_req kl_VfsFilesystem_Openat_req
#define VfsFilesystem_Openat_res kl_VfsFilesystem_Openat_res
#define VfsFilesystem_Read_req kl_VfsFilesystem_Read_req
#define VfsFilesystem_Read_res kl_VfsFilesystem_Read_res
#define VfsFilesystem_Readv_req kl_VfsFilesystem_Readv_req
#define VfsFilesystem_Readv_res kl_VfsFilesystem_Readv_res
#define VfsFilesystem_Pread_req kl_VfsFilesystem_Pread_req
#define VfsFilesystem_Pread_res kl_VfsFilesystem_Pread_res
#define VfsFilesystem_Write_req kl_VfsFilesystem_Write_req
#define VfsFilesystem_Write_res kl_VfsFilesystem_Write_res
#define VfsFilesystem_Sendfile_req kl_VfsFilesystem_Sendfile_req
#define VfsFilesystem_Sendfile_res kl_VfsFilesystem_Sendfile_res
#define VfsFilesystem_Writev_req kl_VfsFilesystem_Writev_req
#define VfsFilesystem_Writev_res kl_VfsFilesystem_Writev_res
#define VfsFilesystem_Pwrite_req kl_VfsFilesystem_Pwrite_req
#define VfsFilesystem_Pwrite_res kl_VfsFilesystem_Pwrite_res
#define VfsFilesystem_Lseek_req kl_VfsFilesystem_Lseek_req
#define VfsFilesystem_Lseek_res kl_VfsFilesystem_Lseek_res
#define VfsFilesystem_Stat_req kl_VfsFilesystem_Stat_req
#define VfsFilesystem_Stat_res kl_VfsFilesystem_Stat_res
#define VfsFilesystem_Lstat_req kl_VfsFilesystem_Lstat_req
#define VfsFilesystem_Lstat_res kl_VfsFilesystem_Lstat_res
#define VfsFilesystem_Fstat_req kl_VfsFilesystem_Fstat_req
#define VfsFilesystem_Fstat_res kl_VfsFilesystem_Fstat_res
#define VfsFilesystem_Fstatat_req kl_VfsFilesystem_Fstatat_req
#define VfsFilesystem_Fstatat_res kl_VfsFilesystem_Fstatat_res
#define VfsFilesystem_Fsync_req kl_VfsFilesystem_Fsync_req
#define VfsFilesystem_Fsync_res kl_VfsFilesystem_Fsync_res
#define VfsFilesystem_Fdatasync_req kl_VfsFilesystem_Fdatasync_req
#define VfsFilesystem_Fdatasync_res kl_VfsFilesystem_Fdatasync_res
#define VfsFilesystem_Close_req kl_VfsFilesystem_Close_req
#define VfsFilesystem_Close_res kl_VfsFilesystem_Close_res
#define VfsFilesystem_StatVfs_req kl_VfsFilesystem_StatVfs_req
#define VfsFilesystem_StatVfs_res kl_VfsFilesystem_StatVfs_res
#define VfsFilesystem_FStatVfs_req kl_VfsFilesystem_FStatVfs_req
#define VfsFilesystem_FStatVfs_res kl_VfsFilesystem_FStatVfs_res
#define VfsFilesystem_Pipe_req kl_VfsFilesystem_Pipe_req
#define VfsFilesystem_Pipe_res kl_VfsFilesystem_Pipe_res
#define VfsFilesystem_Getdents_req kl_VfsFilesystem_Getdents_req
#define VfsFilesystem_Getdents_res kl_VfsFilesystem_Getdents_res
#define VfsFilesystem_Socket_req kl_VfsFilesystem_Socket_req
#define VfsFilesystem_Socket_res kl_VfsFilesystem_Socket_res
#define VfsFilesystem_Socketpair_req kl_VfsFilesystem_Socketpair_req
#define VfsFilesystem_Socketpair_res kl_VfsFilesystem_Socketpair_res
#define VfsFilesystem_Bind_req kl_VfsFilesystem_Bind_req
#define VfsFilesystem_Bind_res kl_VfsFilesystem_Bind_res
#define VfsFilesystem_Listen_req kl_VfsFilesystem_Listen_req
#define VfsFilesystem_Listen_res kl_VfsFilesystem_Listen_res
#define VfsFilesystem_Connect_req kl_VfsFilesystem_Connect_req
#define VfsFilesystem_Connect_res kl_VfsFilesystem_Connect_res
#define VfsFilesystem_Accept_req kl_VfsFilesystem_Accept_req
#define VfsFilesystem_Accept_res kl_VfsFilesystem_Accept_res
#define VfsFilesystem_Poll_req kl_VfsFilesystem_Poll_req
#define VfsFilesystem_Poll_res kl_VfsFilesystem_Poll_res
#define VfsFilesystem_Shutdown_req kl_VfsFilesystem_Shutdown_req
#define VfsFilesystem_Shutdown_res kl_VfsFilesystem_Shutdown_res
#define VfsFilesystem_Getnameinfo_req kl_VfsFilesystem_Getnameinfo_req
#define VfsFilesystem_Getnameinfo_res kl_VfsFilesystem_Getnameinfo_res
#define VfsFilesystem_Getaddrinfo_req kl_VfsFilesystem_Getaddrinfo_req
#define VfsFilesystem_Getaddrinfo_res kl_VfsFilesystem_Getaddrinfo_res
#define VfsFilesystem_Getifaddrs_req kl_VfsFilesystem_Getifaddrs_req
#define VfsFilesystem_Getifaddrs_res kl_VfsFilesystem_Getifaddrs_res
#define VfsFilesystem_Getpeername_req kl_VfsFilesystem_Getpeername_req
#define VfsFilesystem_Getpeername_res kl_VfsFilesystem_Getpeername_res
#define VfsFilesystem_Getsockname_req kl_VfsFilesystem_Getsockname_req
#define VfsFilesystem_Getsockname_res kl_VfsFilesystem_Getsockname_res
#define VfsFilesystem_Gethostbyname_req kl_VfsFilesystem_Gethostbyname_req
#define VfsFilesystem_Gethostbyname_res kl_VfsFilesystem_Gethostbyname_res
#define VfsFilesystem_Getnetbyname_req kl_VfsFilesystem_Getnetbyname_req
#define VfsFilesystem_Getnetbyname_res kl_VfsFilesystem_Getnetbyname_res
#define VfsFilesystem_Getprotobyname_req kl_VfsFilesystem_Getprotobyname_req
#define VfsFilesystem_Getprotobyname_res kl_VfsFilesystem_Getprotobyname_res
#define VfsFilesystem_Getprotobynumber_req kl_VfsFilesystem_Getprotobynumber_req
#define VfsFilesystem_Getprotobynumber_res kl_VfsFilesystem_Getprotobynumber_res
#define VfsFilesystem_Getsockopt_req kl_VfsFilesystem_Getsockopt_req
#define VfsFilesystem_Getsockopt_res kl_VfsFilesystem_Getsockopt_res
#define VfsFilesystem_Setsockopt_req kl_VfsFilesystem_Setsockopt_req
#define VfsFilesystem_Setsockopt_res kl_VfsFilesystem_Setsockopt_res
#define VfsFilesystem_Recv_req kl_VfsFilesystem_Recv_req
#define VfsFilesystem_Recv_res kl_VfsFilesystem_Recv_res
#define VfsFilesystem_Recvfrom_req kl_VfsFilesystem_Recvfrom_req
#define VfsFilesystem_Recvfrom_res kl_VfsFilesystem_Recvfrom_res
#define VfsFilesystem_Recvmsg_req kl_VfsFilesystem_Recvmsg_req
#define VfsFilesystem_Recvmsg_res kl_VfsFilesystem_Recvmsg_res
#define VfsFilesystem_Send_req kl_VfsFilesystem_Send_req
#define VfsFilesystem_Send_res kl_VfsFilesystem_Send_res
#define VfsFilesystem_Sendto_req kl_VfsFilesystem_Sendto_req
#define VfsFilesystem_Sendto_res kl_VfsFilesystem_Sendto_res
#define VfsFilesystem_Sendmsg_req kl_VfsFilesystem_Sendmsg_req
#define VfsFilesystem_Sendmsg_res kl_VfsFilesystem_Sendmsg_res
#define VfsFilesystem_Synchronize_req kl_VfsFilesystem_Synchronize_req
#define VfsFilesystem_Synchronize_res kl_VfsFilesystem_Synchronize_res
#define VfsFilesystem_Fcntl_req kl_VfsFilesystem_Fcntl_req
#define VfsFilesystem_Fcntl_res kl_VfsFilesystem_Fcntl_res
#define VfsFilesystem_Ioctl_req kl_VfsFilesystem_Ioctl_req
#define VfsFilesystem_Ioctl_res kl_VfsFilesystem_Ioctl_res
#define VfsFilesystem_Futimens_req kl_VfsFilesystem_Futimens_req
#define VfsFilesystem_Futimens_res kl_VfsFilesystem_Futimens_res
#define VfsFilesystem_Utimensat_req kl_VfsFilesystem_Utimensat_req
#define VfsFilesystem_Utimensat_res kl_VfsFilesystem_Utimensat_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsFilesystem__INTERFACE__ */

#ifndef __kl__VfsACL__INTERFACE__
#define __kl__VfsACL__INTERFACE__
enum {
    kl_VfsACL_AclSetFile_mid,
    kl_VfsACL_AclGetFile_mid,
    kl_VfsACL_AclDeleteDefFile_mid,
    kl_VfsACL_mid_max,
} ;
enum {
    kl_VfsACL_AclSetFile_req_path_size = 1024,
    kl_VfsACL_AclSetFile_req_aclEntriesData_size =
    4096,
    kl_VfsACL_AclSetFile_req_arena_size = 5120,
    kl_VfsACL_AclSetFile_res_arena_size = 0,
    kl_VfsACL_AclSetFile_req_handles = 0,
    kl_VfsACL_AclSetFile_res_handles = 0,
    kl_VfsACL_AclSetFile_err_handles = 0,
    kl_VfsACL_AclGetFile_req_path_size = 1024,
    kl_VfsACL_AclGetFile_res_aclEntriesData_size =
    4096,
    kl_VfsACL_AclGetFile_req_arena_size = 1024,
    kl_VfsACL_AclGetFile_res_arena_size = 4096,
    kl_VfsACL_AclGetFile_req_handles = 0,
    kl_VfsACL_AclGetFile_res_handles = 0,
    kl_VfsACL_AclGetFile_err_handles = 0,
    kl_VfsACL_AclDeleteDefFile_req_path_size =
    1024,
    kl_VfsACL_AclDeleteDefFile_req_arena_size =
    1024,
    kl_VfsACL_AclDeleteDefFile_res_arena_size = 0,
    kl_VfsACL_AclDeleteDefFile_req_handles = 0,
    kl_VfsACL_AclDeleteDefFile_res_handles = 0,
    kl_VfsACL_AclDeleteDefFile_err_handles = 0,
    kl_VfsACL_req_arena_size = 5120,
    kl_VfsACL_res_arena_size = 4096,
    kl_VfsACL_arena_size = 5120,
    kl_VfsACL_req_handles = 0,
    kl_VfsACL_res_handles = 0,
    kl_VfsACL_err_handles = 0,
} ;
typedef struct __nk_packed kl_VfsACL_AclSetFile_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(2) nk_uint16_t type;
            __nk_alignas(4)
            nk_ptr_t aclEntriesData;
            __nk_alignas(4)
            nk_sint32_t entriesCount;
        } kl_VfsACL_AclSetFile_req;
#pragma pack(push, 8) /* kl_VfsACL_AclSetFile_res */
typedef struct kl_VfsACL_AclSetFile_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsACL_AclSetFile_err;
typedef struct kl_VfsACL_AclSetFile_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsACL_AclSetFile_err err_;
            } ;
        } kl_VfsACL_AclSetFile_res;
#pragma pack(pop) /* kl_VfsACL_AclSetFile_res */
typedef struct __nk_packed kl_VfsACL_AclGetFile_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
            __nk_alignas(2) nk_uint16_t type;
        } kl_VfsACL_AclGetFile_req;
#pragma pack(push, 8) /* kl_VfsACL_AclGetFile_res */
typedef struct kl_VfsACL_AclGetFile_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsACL_AclGetFile_err;
typedef struct kl_VfsACL_AclGetFile_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t aclEntriesData;
                    __nk_alignas(4)
                    nk_sint32_t aclEntriesDataSize;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t aclEntriesData;
                    __nk_alignas(4)
                    nk_sint32_t aclEntriesDataSize;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsACL_AclGetFile_err err_;
            } ;
        } kl_VfsACL_AclGetFile_res;
#pragma pack(pop) /* kl_VfsACL_AclGetFile_res */
typedef struct __nk_packed kl_VfsACL_AclDeleteDefFile_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t path;
        } kl_VfsACL_AclDeleteDefFile_req;
#pragma pack(push, 8) /* kl_VfsACL_AclDeleteDefFile_res */
typedef struct kl_VfsACL_AclDeleteDefFile_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsACL_AclDeleteDefFile_err;
typedef struct kl_VfsACL_AclDeleteDefFile_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsACL_AclDeleteDefFile_err err_;
            } ;
        } kl_VfsACL_AclDeleteDefFile_res;
#pragma pack(pop) /* kl_VfsACL_AclDeleteDefFile_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsACL_AclSetFile_mid kl_VfsACL_AclSetFile_mid
#define VfsACL_AclGetFile_mid kl_VfsACL_AclGetFile_mid
#define VfsACL_AclDeleteDefFile_mid kl_VfsACL_AclDeleteDefFile_mid
#define VfsACL_mid_max kl_VfsACL_mid_max
#define VfsACL_AclSetFile_req_path_size kl_VfsACL_AclSetFile_req_path_size
#define VfsACL_AclSetFile_req_aclEntriesData_size kl_VfsACL_AclSetFile_req_aclEntriesData_size
#define VfsACL_AclSetFile_req_arena_size kl_VfsACL_AclSetFile_req_arena_size
#define VfsACL_AclSetFile_res_arena_size kl_VfsACL_AclSetFile_res_arena_size
#define VfsACL_AclSetFile_req_handles kl_VfsACL_AclSetFile_req_handles
#define VfsACL_AclSetFile_res_handles kl_VfsACL_AclSetFile_res_handles
#define VfsACL_AclSetFile_err_handles kl_VfsACL_AclSetFile_err_handles
#define VfsACL_AclGetFile_req_path_size kl_VfsACL_AclGetFile_req_path_size
#define VfsACL_AclGetFile_res_aclEntriesData_size kl_VfsACL_AclGetFile_res_aclEntriesData_size
#define VfsACL_AclGetFile_req_arena_size kl_VfsACL_AclGetFile_req_arena_size
#define VfsACL_AclGetFile_res_arena_size kl_VfsACL_AclGetFile_res_arena_size
#define VfsACL_AclGetFile_req_handles kl_VfsACL_AclGetFile_req_handles
#define VfsACL_AclGetFile_res_handles kl_VfsACL_AclGetFile_res_handles
#define VfsACL_AclGetFile_err_handles kl_VfsACL_AclGetFile_err_handles
#define VfsACL_AclDeleteDefFile_req_path_size kl_VfsACL_AclDeleteDefFile_req_path_size
#define VfsACL_AclDeleteDefFile_req_arena_size kl_VfsACL_AclDeleteDefFile_req_arena_size
#define VfsACL_AclDeleteDefFile_res_arena_size kl_VfsACL_AclDeleteDefFile_res_arena_size
#define VfsACL_AclDeleteDefFile_req_handles kl_VfsACL_AclDeleteDefFile_req_handles
#define VfsACL_AclDeleteDefFile_res_handles kl_VfsACL_AclDeleteDefFile_res_handles
#define VfsACL_AclDeleteDefFile_err_handles kl_VfsACL_AclDeleteDefFile_err_handles
#define VfsACL_req_arena_size kl_VfsACL_req_arena_size
#define VfsACL_res_arena_size kl_VfsACL_res_arena_size
#define VfsACL_arena_size kl_VfsACL_arena_size
#define VfsACL_req_handles kl_VfsACL_req_handles
#define VfsACL_res_handles kl_VfsACL_res_handles
#define VfsACL_err_handles kl_VfsACL_err_handles
#define VfsACL_AclSetFile_req kl_VfsACL_AclSetFile_req
#define VfsACL_AclSetFile_res kl_VfsACL_AclSetFile_res
#define VfsACL_AclGetFile_req kl_VfsACL_AclGetFile_req
#define VfsACL_AclGetFile_res kl_VfsACL_AclGetFile_res
#define VfsACL_AclDeleteDefFile_req kl_VfsACL_AclDeleteDefFile_req
#define VfsACL_AclDeleteDefFile_res kl_VfsACL_AclDeleteDefFile_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsACL__INTERFACE__ */

#ifndef __kl__VfsNPFilter__INTERFACE__
#define __kl__VfsNPFilter__INTERFACE__
enum {
    kl_VfsNPFilter_Load_mid,
    kl_VfsNPFilter_Save_mid,
    kl_VfsNPFilter_Stats_mid,
    kl_VfsNPFilter_TableEnt_mid,
    kl_VfsNPFilter_Rule_mid,
    kl_VfsNPFilter_mid_max,
} ;
enum {
    kl_VfsNPFilter_Load_req_inprop_size = 16384,
    kl_VfsNPFilter_Load_res_outprop_size = 16384,
    kl_VfsNPFilter_Load_req_arena_size = 16384,
    kl_VfsNPFilter_Load_res_arena_size = 16384,
    kl_VfsNPFilter_Load_req_handles = 0,
    kl_VfsNPFilter_Load_res_handles = 0,
    kl_VfsNPFilter_Load_err_handles = 0,
    kl_VfsNPFilter_Save_res_outprop_size = 16384,
    kl_VfsNPFilter_Save_req_arena_size = 0,
    kl_VfsNPFilter_Save_res_arena_size = 16384,
    kl_VfsNPFilter_Save_req_handles = 0,
    kl_VfsNPFilter_Save_res_handles = 0,
    kl_VfsNPFilter_Save_err_handles = 0,
    kl_VfsNPFilter_Stats_res_outst_size = 21,
    kl_VfsNPFilter_Stats_req_arena_size = 0,
    kl_VfsNPFilter_Stats_res_arena_size = 168,
    kl_VfsNPFilter_Stats_req_handles = 0,
    kl_VfsNPFilter_Stats_res_handles = 0,
    kl_VfsNPFilter_Stats_err_handles = 0,
    kl_VfsNPFilter_TableEnt_req_tableEnt_nctName_size =
    1024,
    kl_VfsNPFilter_TableEnt_req_tableEnt_nctEnt_addr_size =
    16,
    kl_VfsNPFilter_TableEnt_req_arena_size = 1040,
    kl_VfsNPFilter_TableEnt_res_arena_size = 0,
    kl_VfsNPFilter_TableEnt_req_handles = 0,
    kl_VfsNPFilter_TableEnt_res_handles = 0,
    kl_VfsNPFilter_TableEnt_err_handles = 0,
    kl_VfsNPFilter_Rule_req_inprop_size = 16384,
    kl_VfsNPFilter_Rule_res_outprop_size = 16384,
    kl_VfsNPFilter_Rule_req_arena_size = 16384,
    kl_VfsNPFilter_Rule_res_arena_size = 16384,
    kl_VfsNPFilter_Rule_req_handles = 0,
    kl_VfsNPFilter_Rule_res_handles = 0,
    kl_VfsNPFilter_Rule_err_handles = 0,
    kl_VfsNPFilter_req_arena_size = 16384,
    kl_VfsNPFilter_res_arena_size = 16384,
    kl_VfsNPFilter_arena_size = 16384,
    kl_VfsNPFilter_req_handles = 0,
    kl_VfsNPFilter_res_handles = 0,
    kl_VfsNPFilter_err_handles = 0,
} ;
typedef struct __nk_packed kl_VfsNPFilter_Load_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t inprop;
        } kl_VfsNPFilter_Load_req;
#pragma pack(push, 8) /* kl_VfsNPFilter_Load_res */
typedef struct kl_VfsNPFilter_Load_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNPFilter_Load_err;
typedef struct kl_VfsNPFilter_Load_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outprop;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outprop;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNPFilter_Load_err err_;
            } ;
        } kl_VfsNPFilter_Load_res;
#pragma pack(pop) /* kl_VfsNPFilter_Load_res */
typedef struct __nk_packed kl_VfsNPFilter_Save_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
        } kl_VfsNPFilter_Save_req;
#pragma pack(push, 8) /* kl_VfsNPFilter_Save_res */
typedef struct kl_VfsNPFilter_Save_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNPFilter_Save_err;
typedef struct kl_VfsNPFilter_Save_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outprop;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outprop;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNPFilter_Save_err err_;
            } ;
        } kl_VfsNPFilter_Save_res;
#pragma pack(pop) /* kl_VfsNPFilter_Save_res */
typedef struct __nk_packed kl_VfsNPFilter_Stats_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
        } kl_VfsNPFilter_Stats_req;
#pragma pack(push, 8) /* kl_VfsNPFilter_Stats_res */
typedef struct kl_VfsNPFilter_Stats_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNPFilter_Stats_err;
typedef struct kl_VfsNPFilter_Stats_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outst;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outst;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNPFilter_Stats_err err_;
            } ;
        } kl_VfsNPFilter_Stats_res;
#pragma pack(pop) /* kl_VfsNPFilter_Stats_res */
typedef struct __nk_packed kl_VfsNPFilter_TableEnt_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4)
            struct kl_VfsTypes_VfsNpfTableEntT tableEnt;
        } kl_VfsNPFilter_TableEnt_req;
#pragma pack(push, 8) /* kl_VfsNPFilter_TableEnt_res */
typedef struct kl_VfsNPFilter_TableEnt_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNPFilter_TableEnt_err;
typedef struct kl_VfsNPFilter_TableEnt_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNPFilter_TableEnt_err err_;
            } ;
        } kl_VfsNPFilter_TableEnt_res;
#pragma pack(pop) /* kl_VfsNPFilter_TableEnt_res */
typedef struct __nk_packed kl_VfsNPFilter_Rule_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t inprop;
        } kl_VfsNPFilter_Rule_req;
#pragma pack(push, 8) /* kl_VfsNPFilter_Rule_res */
typedef struct kl_VfsNPFilter_Rule_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNPFilter_Rule_err;
typedef struct kl_VfsNPFilter_Rule_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outprop;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t outprop;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNPFilter_Rule_err err_;
            } ;
        } kl_VfsNPFilter_Rule_res;
#pragma pack(pop) /* kl_VfsNPFilter_Rule_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsNPFilter_Load_mid kl_VfsNPFilter_Load_mid
#define VfsNPFilter_Save_mid kl_VfsNPFilter_Save_mid
#define VfsNPFilter_Stats_mid kl_VfsNPFilter_Stats_mid
#define VfsNPFilter_TableEnt_mid kl_VfsNPFilter_TableEnt_mid
#define VfsNPFilter_Rule_mid kl_VfsNPFilter_Rule_mid
#define VfsNPFilter_mid_max kl_VfsNPFilter_mid_max
#define VfsNPFilter_Load_req_inprop_size kl_VfsNPFilter_Load_req_inprop_size
#define VfsNPFilter_Load_res_outprop_size kl_VfsNPFilter_Load_res_outprop_size
#define VfsNPFilter_Load_req_arena_size kl_VfsNPFilter_Load_req_arena_size
#define VfsNPFilter_Load_res_arena_size kl_VfsNPFilter_Load_res_arena_size
#define VfsNPFilter_Load_req_handles kl_VfsNPFilter_Load_req_handles
#define VfsNPFilter_Load_res_handles kl_VfsNPFilter_Load_res_handles
#define VfsNPFilter_Load_err_handles kl_VfsNPFilter_Load_err_handles
#define VfsNPFilter_Save_res_outprop_size kl_VfsNPFilter_Save_res_outprop_size
#define VfsNPFilter_Save_req_arena_size kl_VfsNPFilter_Save_req_arena_size
#define VfsNPFilter_Save_res_arena_size kl_VfsNPFilter_Save_res_arena_size
#define VfsNPFilter_Save_req_handles kl_VfsNPFilter_Save_req_handles
#define VfsNPFilter_Save_res_handles kl_VfsNPFilter_Save_res_handles
#define VfsNPFilter_Save_err_handles kl_VfsNPFilter_Save_err_handles
#define VfsNPFilter_Stats_res_outst_size kl_VfsNPFilter_Stats_res_outst_size
#define VfsNPFilter_Stats_req_arena_size kl_VfsNPFilter_Stats_req_arena_size
#define VfsNPFilter_Stats_res_arena_size kl_VfsNPFilter_Stats_res_arena_size
#define VfsNPFilter_Stats_req_handles kl_VfsNPFilter_Stats_req_handles
#define VfsNPFilter_Stats_res_handles kl_VfsNPFilter_Stats_res_handles
#define VfsNPFilter_Stats_err_handles kl_VfsNPFilter_Stats_err_handles
#define VfsNPFilter_TableEnt_req_tableEnt_nctName_size kl_VfsNPFilter_TableEnt_req_tableEnt_nctName_size
#define VfsNPFilter_TableEnt_req_tableEnt_nctEnt_addr_size kl_VfsNPFilter_TableEnt_req_tableEnt_nctEnt_addr_size
#define VfsNPFilter_TableEnt_req_arena_size kl_VfsNPFilter_TableEnt_req_arena_size
#define VfsNPFilter_TableEnt_res_arena_size kl_VfsNPFilter_TableEnt_res_arena_size
#define VfsNPFilter_TableEnt_req_handles kl_VfsNPFilter_TableEnt_req_handles
#define VfsNPFilter_TableEnt_res_handles kl_VfsNPFilter_TableEnt_res_handles
#define VfsNPFilter_TableEnt_err_handles kl_VfsNPFilter_TableEnt_err_handles
#define VfsNPFilter_Rule_req_inprop_size kl_VfsNPFilter_Rule_req_inprop_size
#define VfsNPFilter_Rule_res_outprop_size kl_VfsNPFilter_Rule_res_outprop_size
#define VfsNPFilter_Rule_req_arena_size kl_VfsNPFilter_Rule_req_arena_size
#define VfsNPFilter_Rule_res_arena_size kl_VfsNPFilter_Rule_res_arena_size
#define VfsNPFilter_Rule_req_handles kl_VfsNPFilter_Rule_req_handles
#define VfsNPFilter_Rule_res_handles kl_VfsNPFilter_Rule_res_handles
#define VfsNPFilter_Rule_err_handles kl_VfsNPFilter_Rule_err_handles
#define VfsNPFilter_req_arena_size kl_VfsNPFilter_req_arena_size
#define VfsNPFilter_res_arena_size kl_VfsNPFilter_res_arena_size
#define VfsNPFilter_arena_size kl_VfsNPFilter_arena_size
#define VfsNPFilter_req_handles kl_VfsNPFilter_req_handles
#define VfsNPFilter_res_handles kl_VfsNPFilter_res_handles
#define VfsNPFilter_err_handles kl_VfsNPFilter_err_handles
#define VfsNPFilter_Load_req kl_VfsNPFilter_Load_req
#define VfsNPFilter_Load_res kl_VfsNPFilter_Load_res
#define VfsNPFilter_Save_req kl_VfsNPFilter_Save_req
#define VfsNPFilter_Save_res kl_VfsNPFilter_Save_res
#define VfsNPFilter_Stats_req kl_VfsNPFilter_Stats_req
#define VfsNPFilter_Stats_res kl_VfsNPFilter_Stats_res
#define VfsNPFilter_TableEnt_req kl_VfsNPFilter_TableEnt_req
#define VfsNPFilter_TableEnt_res kl_VfsNPFilter_TableEnt_res
#define VfsNPFilter_Rule_req kl_VfsNPFilter_Rule_req
#define VfsNPFilter_Rule_res kl_VfsNPFilter_Rule_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsNPFilter__INTERFACE__ */

#ifndef __kl__VfsBPFilter__INTERFACE__
#define __kl__VfsBPFilter__INTERFACE__
enum {
    kl_VfsBPFilter_SetFilter_mid,
    kl_VfsBPFilter_mid_max,
} ;
enum {
    kl_VfsBPFilter_SetFilter_req_prog_size = 41,
    kl_VfsBPFilter_SetFilter_req_arena_size = 328,
    kl_VfsBPFilter_SetFilter_res_arena_size = 0,
    kl_VfsBPFilter_SetFilter_req_handles = 0,
    kl_VfsBPFilter_SetFilter_res_handles = 0,
    kl_VfsBPFilter_SetFilter_err_handles = 0,
    kl_VfsBPFilter_req_arena_size = 328,
    kl_VfsBPFilter_res_arena_size = 0,
    kl_VfsBPFilter_arena_size = 328,
    kl_VfsBPFilter_req_handles = 0,
    kl_VfsBPFilter_res_handles = 0,
    kl_VfsBPFilter_err_handles = 0,
} ;
typedef struct __nk_packed kl_VfsBPFilter_SetFilter_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t prog;
        } kl_VfsBPFilter_SetFilter_req;
#pragma pack(push, 8) /* kl_VfsBPFilter_SetFilter_res */
typedef struct kl_VfsBPFilter_SetFilter_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsBPFilter_SetFilter_err;
typedef struct kl_VfsBPFilter_SetFilter_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsBPFilter_SetFilter_err err_;
            } ;
        } kl_VfsBPFilter_SetFilter_res;
#pragma pack(pop) /* kl_VfsBPFilter_SetFilter_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsBPFilter_SetFilter_mid kl_VfsBPFilter_SetFilter_mid
#define VfsBPFilter_mid_max kl_VfsBPFilter_mid_max
#define VfsBPFilter_SetFilter_req_prog_size kl_VfsBPFilter_SetFilter_req_prog_size
#define VfsBPFilter_SetFilter_req_arena_size kl_VfsBPFilter_SetFilter_req_arena_size
#define VfsBPFilter_SetFilter_res_arena_size kl_VfsBPFilter_SetFilter_res_arena_size
#define VfsBPFilter_SetFilter_req_handles kl_VfsBPFilter_SetFilter_req_handles
#define VfsBPFilter_SetFilter_res_handles kl_VfsBPFilter_SetFilter_res_handles
#define VfsBPFilter_SetFilter_err_handles kl_VfsBPFilter_SetFilter_err_handles
#define VfsBPFilter_req_arena_size kl_VfsBPFilter_req_arena_size
#define VfsBPFilter_res_arena_size kl_VfsBPFilter_res_arena_size
#define VfsBPFilter_arena_size kl_VfsBPFilter_arena_size
#define VfsBPFilter_req_handles kl_VfsBPFilter_req_handles
#define VfsBPFilter_res_handles kl_VfsBPFilter_res_handles
#define VfsBPFilter_err_handles kl_VfsBPFilter_err_handles
#define VfsBPFilter_SetFilter_req kl_VfsBPFilter_SetFilter_req
#define VfsBPFilter_SetFilter_res kl_VfsBPFilter_SetFilter_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsBPFilter__INTERFACE__ */

#ifndef __kl__VfsNetConfig__INTERFACE__
#define __kl__VfsNetConfig__INTERFACE__
enum {
    kl_VfsNetConfig_CreateIf_mid,
    kl_VfsNetConfig_DestroyIf_mid,
    kl_VfsNetConfig_SetFlags_mid,
    kl_VfsNetConfig_GetFlags_mid,
    kl_VfsNetConfig_SetIpAddr_mid,
    kl_VfsNetConfig_GetIpAddr_mid,
    kl_VfsNetConfig_SetNetmask_mid,
    kl_VfsNetConfig_GetNetmask_mid,
    kl_VfsNetConfig_SetBroadcast_mid,
    kl_VfsNetConfig_GetBroadcast_mid,
    kl_VfsNetConfig_SetDstAddr_mid,
    kl_VfsNetConfig_GetDstAddr_mid,
    kl_VfsNetConfig_AddIpAddr_mid,
    kl_VfsNetConfig_RemoveIpAddr_mid,
    kl_VfsNetConfig_AddRoute_mid,
    kl_VfsNetConfig_DelRoute_mid,
    kl_VfsNetConfig_SetVlan_mid,
    kl_VfsNetConfig_GetVlan_mid,
    kl_VfsNetConfig_GetActiveIfList_mid,
    kl_VfsNetConfig_GetNumOfBytesAvail_mid,
    kl_VfsNetConfig_GetIfAFlags_mid,
    kl_VfsNetConfig_PppoeSetParams_mid,
    kl_VfsNetConfig_PppoeGetParams_mid,
    kl_VfsNetConfig_PppoeGetSession_mid,
    kl_VfsNetConfig_SpppGetStatus_mid,
    kl_VfsNetConfig_SpppSetAuthCfg_mid,
    kl_VfsNetConfig_SpppGetAuthCfg_mid,
    kl_VfsNetConfig_SpppSetAuthFailure_mid,
    kl_VfsNetConfig_SpppGetAuthFailures_mid,
    kl_VfsNetConfig_Sysctl_mid,
    kl_VfsNetConfig_RtDump_mid,
    kl_VfsNetConfig_RtIflist_mid,
    kl_VfsNetConfig_IpctlForwarding_mid,
    kl_VfsNetConfig_GetMedia_mid,
    kl_VfsNetConfig_SetMedia_mid,
    kl_VfsNetConfig_DeleteIfAddr_mid,
    kl_VfsNetConfig_AddIfAddr_mid,
    kl_VfsNetConfig_BridgeGet_mid,
    kl_VfsNetConfig_BridgeSet_mid,
    kl_VfsNetConfig_DnetIo_mid,
    kl_VfsNetConfig_mid_max,
} ;
enum {
    kl_VfsNetConfig_CreateIf_req_name_size = 16,
    kl_VfsNetConfig_CreateIf_req_arena_size = 16,
    kl_VfsNetConfig_CreateIf_res_arena_size = 0,
    kl_VfsNetConfig_CreateIf_req_handles = 0,
    kl_VfsNetConfig_CreateIf_res_handles = 0,
    kl_VfsNetConfig_CreateIf_err_handles = 0,
    kl_VfsNetConfig_DestroyIf_req_name_size = 16,
    kl_VfsNetConfig_DestroyIf_req_arena_size = 16,
    kl_VfsNetConfig_DestroyIf_res_arena_size = 0,
    kl_VfsNetConfig_DestroyIf_req_handles = 0,
    kl_VfsNetConfig_DestroyIf_res_handles = 0,
    kl_VfsNetConfig_DestroyIf_err_handles = 0,
    kl_VfsNetConfig_SetFlags_req_name_size = 16,
    kl_VfsNetConfig_SetFlags_req_arena_size = 16,
    kl_VfsNetConfig_SetFlags_res_arena_size = 0,
    kl_VfsNetConfig_SetFlags_req_handles = 0,
    kl_VfsNetConfig_SetFlags_res_handles = 0,
    kl_VfsNetConfig_SetFlags_err_handles = 0,
    kl_VfsNetConfig_GetFlags_req_name_size = 16,
    kl_VfsNetConfig_GetFlags_req_arena_size = 16,
    kl_VfsNetConfig_GetFlags_res_arena_size = 0,
    kl_VfsNetConfig_GetFlags_req_handles = 0,
    kl_VfsNetConfig_GetFlags_res_handles = 0,
    kl_VfsNetConfig_GetFlags_err_handles = 0,
    kl_VfsNetConfig_SetIpAddr_req_name_size = 16,
    kl_VfsNetConfig_SetIpAddr_req_addr_size = 128,
    kl_VfsNetConfig_SetIpAddr_req_arena_size =
    144,
    kl_VfsNetConfig_SetIpAddr_res_arena_size = 0,
    kl_VfsNetConfig_SetIpAddr_req_handles = 0,
    kl_VfsNetConfig_SetIpAddr_res_handles = 0,
    kl_VfsNetConfig_SetIpAddr_err_handles = 0,
    kl_VfsNetConfig_GetIpAddr_req_name_size = 16,
    kl_VfsNetConfig_GetIpAddr_res_addr_size = 128,
    kl_VfsNetConfig_GetIpAddr_req_arena_size = 16,
    kl_VfsNetConfig_GetIpAddr_res_arena_size =
    128,
    kl_VfsNetConfig_GetIpAddr_req_handles = 0,
    kl_VfsNetConfig_GetIpAddr_res_handles = 0,
    kl_VfsNetConfig_GetIpAddr_err_handles = 0,
    kl_VfsNetConfig_SetNetmask_req_name_size = 16,
    kl_VfsNetConfig_SetNetmask_req_addr_size =
    128,
    kl_VfsNetConfig_SetNetmask_req_arena_size =
    144,
    kl_VfsNetConfig_SetNetmask_res_arena_size = 0,
    kl_VfsNetConfig_SetNetmask_req_handles = 0,
    kl_VfsNetConfig_SetNetmask_res_handles = 0,
    kl_VfsNetConfig_SetNetmask_err_handles = 0,
    kl_VfsNetConfig_GetNetmask_req_name_size = 16,
    kl_VfsNetConfig_GetNetmask_res_addr_size =
    128,
    kl_VfsNetConfig_GetNetmask_req_arena_size =
    16,
    kl_VfsNetConfig_GetNetmask_res_arena_size =
    128,
    kl_VfsNetConfig_GetNetmask_req_handles = 0,
    kl_VfsNetConfig_GetNetmask_res_handles = 0,
    kl_VfsNetConfig_GetNetmask_err_handles = 0,
    kl_VfsNetConfig_SetBroadcast_req_name_size =
    16,
    kl_VfsNetConfig_SetBroadcast_req_addr_size =
    128,
    kl_VfsNetConfig_SetBroadcast_req_arena_size =
    144,
    kl_VfsNetConfig_SetBroadcast_res_arena_size =
    0,
    kl_VfsNetConfig_SetBroadcast_req_handles = 0,
    kl_VfsNetConfig_SetBroadcast_res_handles = 0,
    kl_VfsNetConfig_SetBroadcast_err_handles = 0,
    kl_VfsNetConfig_GetBroadcast_req_name_size =
    16,
    kl_VfsNetConfig_GetBroadcast_res_addr_size =
    128,
    kl_VfsNetConfig_GetBroadcast_req_arena_size =
    16,
    kl_VfsNetConfig_GetBroadcast_res_arena_size =
    128,
    kl_VfsNetConfig_GetBroadcast_req_handles = 0,
    kl_VfsNetConfig_GetBroadcast_res_handles = 0,
    kl_VfsNetConfig_GetBroadcast_err_handles = 0,
    kl_VfsNetConfig_SetDstAddr_req_name_size = 16,
    kl_VfsNetConfig_SetDstAddr_req_addr_size =
    128,
    kl_VfsNetConfig_SetDstAddr_req_arena_size =
    144,
    kl_VfsNetConfig_SetDstAddr_res_arena_size = 0,
    kl_VfsNetConfig_SetDstAddr_req_handles = 0,
    kl_VfsNetConfig_SetDstAddr_res_handles = 0,
    kl_VfsNetConfig_SetDstAddr_err_handles = 0,
    kl_VfsNetConfig_GetDstAddr_req_name_size = 16,
    kl_VfsNetConfig_GetDstAddr_res_addr_size =
    128,
    kl_VfsNetConfig_GetDstAddr_req_arena_size =
    16,
    kl_VfsNetConfig_GetDstAddr_res_arena_size =
    128,
    kl_VfsNetConfig_GetDstAddr_req_handles = 0,
    kl_VfsNetConfig_GetDstAddr_res_handles = 0,
    kl_VfsNetConfig_GetDstAddr_err_handles = 0,
    kl_VfsNetConfig_AddIpAddr_req_name_size = 16,
    kl_VfsNetConfig_AddIpAddr_req_addr_size = 128,
    kl_VfsNetConfig_AddIpAddr_req_arena_size =
    144,
    kl_VfsNetConfig_AddIpAddr_res_arena_size = 0,
    kl_VfsNetConfig_AddIpAddr_req_handles = 0,
    kl_VfsNetConfig_AddIpAddr_res_handles = 0,
    kl_VfsNetConfig_AddIpAddr_err_handles = 0,
    kl_VfsNetConfig_RemoveIpAddr_req_name_size =
    16,
    kl_VfsNetConfig_RemoveIpAddr_req_addr_size =
    128,
    kl_VfsNetConfig_RemoveIpAddr_req_arena_size =
    144,
    kl_VfsNetConfig_RemoveIpAddr_res_arena_size =
    0,
    kl_VfsNetConfig_RemoveIpAddr_req_handles = 0,
    kl_VfsNetConfig_RemoveIpAddr_res_handles = 0,
    kl_VfsNetConfig_RemoveIpAddr_err_handles = 0,
    kl_VfsNetConfig_AddRoute_req_dst_size = 128,
    kl_VfsNetConfig_AddRoute_req_gw_size = 128,
    kl_VfsNetConfig_AddRoute_req_arena_size = 256,
    kl_VfsNetConfig_AddRoute_res_arena_size = 0,
    kl_VfsNetConfig_AddRoute_req_handles = 0,
    kl_VfsNetConfig_AddRoute_res_handles = 0,
    kl_VfsNetConfig_AddRoute_err_handles = 0,
    kl_VfsNetConfig_DelRoute_req_dst_size = 128,
    kl_VfsNetConfig_DelRoute_req_gw_size = 128,
    kl_VfsNetConfig_DelRoute_req_arena_size = 256,
    kl_VfsNetConfig_DelRoute_res_arena_size = 0,
    kl_VfsNetConfig_DelRoute_req_handles = 0,
    kl_VfsNetConfig_DelRoute_res_handles = 0,
    kl_VfsNetConfig_DelRoute_err_handles = 0,
    kl_VfsNetConfig_SetVlan_req_name_size = 16,
    kl_VfsNetConfig_SetVlan_req_parent_size = 16,
    kl_VfsNetConfig_SetVlan_req_arena_size = 32,
    kl_VfsNetConfig_SetVlan_res_arena_size = 0,
    kl_VfsNetConfig_SetVlan_req_handles = 0,
    kl_VfsNetConfig_SetVlan_res_handles = 0,
    kl_VfsNetConfig_SetVlan_err_handles = 0,
    kl_VfsNetConfig_GetVlan_req_name_size = 16,
    kl_VfsNetConfig_GetVlan_res_parent_size = 16,
    kl_VfsNetConfig_GetVlan_req_arena_size = 16,
    kl_VfsNetConfig_GetVlan_res_arena_size = 16,
    kl_VfsNetConfig_GetVlan_req_handles = 0,
    kl_VfsNetConfig_GetVlan_res_handles = 0,
    kl_VfsNetConfig_GetVlan_err_handles = 0,
    kl_VfsNetConfig_GetActiveIfList_res_confs_size =
    16,
    kl_VfsNetConfig_GetActiveIfList_res_confs_elem_name_size =
    16,
    kl_VfsNetConfig_GetActiveIfList_res_confs_elem_addr_size =
    128,
    kl_VfsNetConfig_GetActiveIfList_req_arena_size =
    0,
    kl_VfsNetConfig_GetActiveIfList_res_arena_size =
    2560,
    kl_VfsNetConfig_GetActiveIfList_req_handles =
    0,
    kl_VfsNetConfig_GetActiveIfList_res_handles =
    0,
    kl_VfsNetConfig_GetActiveIfList_err_handles =
    0,
    kl_VfsNetConfig_GetNumOfBytesAvail_req_arena_size =
    0,
    kl_VfsNetConfig_GetNumOfBytesAvail_res_arena_size =
    0,
    kl_VfsNetConfig_GetNumOfBytesAvail_req_handles =
    0,
    kl_VfsNetConfig_GetNumOfBytesAvail_res_handles =
    0,
    kl_VfsNetConfig_GetNumOfBytesAvail_err_handles =
    0,
    kl_VfsNetConfig_GetIfAFlags_req_name_size =
    16,
    kl_VfsNetConfig_GetIfAFlags_req_addr_size =
    128,
    kl_VfsNetConfig_GetIfAFlags_req_arena_size =
    144,
    kl_VfsNetConfig_GetIfAFlags_res_arena_size =
    0,
    kl_VfsNetConfig_GetIfAFlags_req_handles = 0,
    kl_VfsNetConfig_GetIfAFlags_res_handles = 0,
    kl_VfsNetConfig_GetIfAFlags_err_handles = 0,
    kl_VfsNetConfig_PppoeSetParams_req_name_size =
    16,
    kl_VfsNetConfig_PppoeSetParams_req_parent_size =
    16,
    kl_VfsNetConfig_PppoeSetParams_req_ac_size =
    1024,
    kl_VfsNetConfig_PppoeSetParams_req_svc_size =
    1024,
    kl_VfsNetConfig_PppoeSetParams_req_arena_size =
    2080,
    kl_VfsNetConfig_PppoeSetParams_res_arena_size =
    0,
    kl_VfsNetConfig_PppoeSetParams_req_handles =
    0,
    kl_VfsNetConfig_PppoeSetParams_res_handles =
    0,
    kl_VfsNetConfig_PppoeSetParams_err_handles =
    0,
    kl_VfsNetConfig_PppoeGetParams_req_name_size =
    16,
    kl_VfsNetConfig_PppoeGetParams_res_parent_size =
    16,
    kl_VfsNetConfig_PppoeGetParams_req_arena_size =
    16,
    kl_VfsNetConfig_PppoeGetParams_res_arena_size =
    16,
    kl_VfsNetConfig_PppoeGetParams_req_handles =
    0,
    kl_VfsNetConfig_PppoeGetParams_res_handles =
    0,
    kl_VfsNetConfig_PppoeGetParams_err_handles =
    0,
    kl_VfsNetConfig_PppoeGetSession_req_name_size =
    16,
    kl_VfsNetConfig_PppoeGetSession_req_arena_size =
    16,
    kl_VfsNetConfig_PppoeGetSession_res_arena_size =
    0,
    kl_VfsNetConfig_PppoeGetSession_req_handles =
    0,
    kl_VfsNetConfig_PppoeGetSession_res_handles =
    0,
    kl_VfsNetConfig_PppoeGetSession_err_handles =
    0,
    kl_VfsNetConfig_SpppGetStatus_req_name_size =
    16,
    kl_VfsNetConfig_SpppGetStatus_req_arena_size =
    16,
    kl_VfsNetConfig_SpppGetStatus_res_arena_size =
    0,
    kl_VfsNetConfig_SpppGetStatus_req_handles = 0,
    kl_VfsNetConfig_SpppGetStatus_res_handles = 0,
    kl_VfsNetConfig_SpppGetStatus_err_handles = 0,
    kl_VfsNetConfig_SpppSetAuthCfg_req_name_size =
    16,
    kl_VfsNetConfig_SpppSetAuthCfg_req_myname_size =
    1024,
    kl_VfsNetConfig_SpppSetAuthCfg_req_mysecret_size =
    1024,
    kl_VfsNetConfig_SpppSetAuthCfg_req_hisname_size =
    1024,
    kl_VfsNetConfig_SpppSetAuthCfg_req_hissecret_size =
    1024,
    kl_VfsNetConfig_SpppSetAuthCfg_req_arena_size =
    4112,
    kl_VfsNetConfig_SpppSetAuthCfg_res_arena_size =
    0,
    kl_VfsNetConfig_SpppSetAuthCfg_req_handles =
    0,
    kl_VfsNetConfig_SpppSetAuthCfg_res_handles =
    0,
    kl_VfsNetConfig_SpppSetAuthCfg_err_handles =
    0,
    kl_VfsNetConfig_SpppGetAuthCfg_req_name_size =
    16,
    kl_VfsNetConfig_SpppGetAuthCfg_res_myname_size =
    1024,
    kl_VfsNetConfig_SpppGetAuthCfg_res_hisname_size =
    1024,
    kl_VfsNetConfig_SpppGetAuthCfg_req_arena_size =
    16,
    kl_VfsNetConfig_SpppGetAuthCfg_res_arena_size =
    2048,
    kl_VfsNetConfig_SpppGetAuthCfg_req_handles =
    0,
    kl_VfsNetConfig_SpppGetAuthCfg_res_handles =
    0,
    kl_VfsNetConfig_SpppGetAuthCfg_err_handles =
    0,
    kl_VfsNetConfig_SpppSetAuthFailure_req_name_size =
    16,
    kl_VfsNetConfig_SpppSetAuthFailure_req_arena_size =
    16,
    kl_VfsNetConfig_SpppSetAuthFailure_res_arena_size =
    0,
    kl_VfsNetConfig_SpppSetAuthFailure_req_handles =
    0,
    kl_VfsNetConfig_SpppSetAuthFailure_res_handles =
    0,
    kl_VfsNetConfig_SpppSetAuthFailure_err_handles =
    0,
    kl_VfsNetConfig_SpppGetAuthFailures_req_name_size =
    16,
    kl_VfsNetConfig_SpppGetAuthFailures_req_arena_size =
    16,
    kl_VfsNetConfig_SpppGetAuthFailures_res_arena_size =
    0,
    kl_VfsNetConfig_SpppGetAuthFailures_req_handles =
    0,
    kl_VfsNetConfig_SpppGetAuthFailures_res_handles =
    0,
    kl_VfsNetConfig_SpppGetAuthFailures_err_handles =
    0,
    kl_VfsNetConfig_Sysctl_req_name_size = 32,
    kl_VfsNetConfig_Sysctl_req_newp_size = 65536,
    kl_VfsNetConfig_Sysctl_res_oldp_size = 65536,
    kl_VfsNetConfig_Sysctl_req_arena_size = 65568,
    kl_VfsNetConfig_Sysctl_res_arena_size = 65536,
    kl_VfsNetConfig_Sysctl_req_handles = 0,
    kl_VfsNetConfig_Sysctl_res_handles = 0,
    kl_VfsNetConfig_Sysctl_err_handles = 0,
    kl_VfsNetConfig_RtDump_res_hdrs_size = 16,
    kl_VfsNetConfig_RtDump_res_addrs_size = 64,
    kl_VfsNetConfig_RtDump_res_addrs_elem_size =
    128,
    kl_VfsNetConfig_RtDump_req_arena_size = 0,
    kl_VfsNetConfig_RtDump_res_arena_size = 10624,
    kl_VfsNetConfig_RtDump_req_handles = 0,
    kl_VfsNetConfig_RtDump_res_handles = 0,
    kl_VfsNetConfig_RtDump_err_handles = 0,
    kl_VfsNetConfig_RtIflist_res_ifaHdrs_size =
    16,
    kl_VfsNetConfig_RtIflist_res_ifHdrs_size = 16,
    kl_VfsNetConfig_RtIflist_res_addrs_size = 64,
    kl_VfsNetConfig_RtIflist_res_addrs_elem_size =
    128,
    kl_VfsNetConfig_RtIflist_req_arena_size = 0,
    kl_VfsNetConfig_RtIflist_res_arena_size =
    11584,
    kl_VfsNetConfig_RtIflist_req_handles = 0,
    kl_VfsNetConfig_RtIflist_res_handles = 0,
    kl_VfsNetConfig_RtIflist_err_handles = 0,
    kl_VfsNetConfig_IpctlForwarding_req_arena_size =
    0,
    kl_VfsNetConfig_IpctlForwarding_res_arena_size =
    0,
    kl_VfsNetConfig_IpctlForwarding_req_handles =
    0,
    kl_VfsNetConfig_IpctlForwarding_res_handles =
    0,
    kl_VfsNetConfig_IpctlForwarding_err_handles =
    0,
    kl_VfsNetConfig_GetMedia_req_name_size = 256,
    kl_VfsNetConfig_GetMedia_res_ifm_ifmName_size =
    256,
    kl_VfsNetConfig_GetMedia_res_ifm_ifmUlist_size =
    32,
    kl_VfsNetConfig_GetMedia_req_arena_size = 256,
    kl_VfsNetConfig_GetMedia_res_arena_size = 288,
    kl_VfsNetConfig_GetMedia_req_handles = 0,
    kl_VfsNetConfig_GetMedia_res_handles = 0,
    kl_VfsNetConfig_GetMedia_err_handles = 0,
    kl_VfsNetConfig_SetMedia_req_name_size = 16,
    kl_VfsNetConfig_SetMedia_req_arena_size = 16,
    kl_VfsNetConfig_SetMedia_res_arena_size = 0,
    kl_VfsNetConfig_SetMedia_req_handles = 0,
    kl_VfsNetConfig_SetMedia_res_handles = 0,
    kl_VfsNetConfig_SetMedia_err_handles = 0,
    kl_VfsNetConfig_DeleteIfAddr_req_ifa_ifraName_size =
    256,
    kl_VfsNetConfig_DeleteIfAddr_req_ifa_ifraAddr_size =
    128,
    kl_VfsNetConfig_DeleteIfAddr_req_ifa_ifraDstaddr_size =
    128,
    kl_VfsNetConfig_DeleteIfAddr_req_ifa_ifraMask_size =
    128,
    kl_VfsNetConfig_DeleteIfAddr_req_arena_size =
    640,
    kl_VfsNetConfig_DeleteIfAddr_res_arena_size =
    0,
    kl_VfsNetConfig_DeleteIfAddr_req_handles = 0,
    kl_VfsNetConfig_DeleteIfAddr_res_handles = 0,
    kl_VfsNetConfig_DeleteIfAddr_err_handles = 0,
    kl_VfsNetConfig_AddIfAddr_req_ifa_ifraName_size =
    256,
    kl_VfsNetConfig_AddIfAddr_req_ifa_ifraAddr_size =
    128,
    kl_VfsNetConfig_AddIfAddr_req_ifa_ifraDstaddr_size =
    128,
    kl_VfsNetConfig_AddIfAddr_req_ifa_ifraMask_size =
    128,
    kl_VfsNetConfig_AddIfAddr_req_arena_size =
    640,
    kl_VfsNetConfig_AddIfAddr_res_arena_size = 0,
    kl_VfsNetConfig_AddIfAddr_req_handles = 0,
    kl_VfsNetConfig_AddIfAddr_res_handles = 0,
    kl_VfsNetConfig_AddIfAddr_err_handles = 0,
    kl_VfsNetConfig_BridgeGet_req_name_size = 16,
    kl_VfsNetConfig_BridgeGet_req_buf_size = 8192,
    kl_VfsNetConfig_BridgeGet_res_bufOut_size =
    8192,
    kl_VfsNetConfig_BridgeGet_req_arena_size =
    8208,
    kl_VfsNetConfig_BridgeGet_res_arena_size =
    8192,
    kl_VfsNetConfig_BridgeGet_req_handles = 0,
    kl_VfsNetConfig_BridgeGet_res_handles = 0,
    kl_VfsNetConfig_BridgeGet_err_handles = 0,
    kl_VfsNetConfig_BridgeSet_req_name_size = 16,
    kl_VfsNetConfig_BridgeSet_req_buf_size = 8192,
    kl_VfsNetConfig_BridgeSet_req_arena_size =
    8208,
    kl_VfsNetConfig_BridgeSet_res_arena_size = 0,
    kl_VfsNetConfig_BridgeSet_req_handles = 0,
    kl_VfsNetConfig_BridgeSet_res_handles = 0,
    kl_VfsNetConfig_BridgeSet_err_handles = 0,
    kl_VfsNetConfig_DnetIo_req_name_size = 16,
    kl_VfsNetConfig_DnetIo_req_src_size = 16384,
    kl_VfsNetConfig_DnetIo_res_dst_size = 16384,
    kl_VfsNetConfig_DnetIo_req_arena_size = 16400,
    kl_VfsNetConfig_DnetIo_res_arena_size = 16384,
    kl_VfsNetConfig_DnetIo_req_handles = 0,
    kl_VfsNetConfig_DnetIo_res_handles = 0,
    kl_VfsNetConfig_DnetIo_err_handles = 0,
    kl_VfsNetConfig_req_arena_size = 65568,
    kl_VfsNetConfig_res_arena_size = 65536,
    kl_VfsNetConfig_arena_size = 65568,
    kl_VfsNetConfig_req_handles = 0,
    kl_VfsNetConfig_res_handles = 0,
    kl_VfsNetConfig_err_handles = 0,
} ;
typedef struct __nk_packed kl_VfsNetConfig_CreateIf_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_CreateIf_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_CreateIf_res */
typedef struct kl_VfsNetConfig_CreateIf_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_CreateIf_err;
typedef struct kl_VfsNetConfig_CreateIf_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_CreateIf_err err_;
            } ;
        } kl_VfsNetConfig_CreateIf_res;
#pragma pack(pop) /* kl_VfsNetConfig_CreateIf_res */
typedef struct __nk_packed kl_VfsNetConfig_DestroyIf_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_DestroyIf_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_DestroyIf_res */
typedef struct kl_VfsNetConfig_DestroyIf_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_DestroyIf_err;
typedef struct kl_VfsNetConfig_DestroyIf_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_DestroyIf_err err_;
            } ;
        } kl_VfsNetConfig_DestroyIf_res;
#pragma pack(pop) /* kl_VfsNetConfig_DestroyIf_res */
typedef struct __nk_packed kl_VfsNetConfig_SetFlags_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_sint32_t flags;
        } kl_VfsNetConfig_SetFlags_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SetFlags_res */
typedef struct kl_VfsNetConfig_SetFlags_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SetFlags_err;
typedef struct kl_VfsNetConfig_SetFlags_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SetFlags_err err_;
            } ;
        } kl_VfsNetConfig_SetFlags_res;
#pragma pack(pop) /* kl_VfsNetConfig_SetFlags_res */
typedef struct __nk_packed kl_VfsNetConfig_GetFlags_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_GetFlags_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetFlags_res */
typedef struct kl_VfsNetConfig_GetFlags_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetFlags_err;
typedef struct kl_VfsNetConfig_GetFlags_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t flags;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t flags;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetFlags_err err_;
            } ;
        } kl_VfsNetConfig_GetFlags_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetFlags_res */
typedef struct __nk_packed kl_VfsNetConfig_SetIpAddr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t addr;
        } kl_VfsNetConfig_SetIpAddr_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SetIpAddr_res */
typedef struct kl_VfsNetConfig_SetIpAddr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SetIpAddr_err;
typedef struct kl_VfsNetConfig_SetIpAddr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SetIpAddr_err err_;
            } ;
        } kl_VfsNetConfig_SetIpAddr_res;
#pragma pack(pop) /* kl_VfsNetConfig_SetIpAddr_res */
typedef struct __nk_packed kl_VfsNetConfig_GetIpAddr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_uint32_t addrlen;
        } kl_VfsNetConfig_GetIpAddr_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetIpAddr_res */
typedef struct kl_VfsNetConfig_GetIpAddr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetIpAddr_err;
typedef struct kl_VfsNetConfig_GetIpAddr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetIpAddr_err err_;
            } ;
        } kl_VfsNetConfig_GetIpAddr_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetIpAddr_res */
typedef struct __nk_packed kl_VfsNetConfig_SetNetmask_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t addr;
        } kl_VfsNetConfig_SetNetmask_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SetNetmask_res */
typedef struct kl_VfsNetConfig_SetNetmask_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SetNetmask_err;
typedef struct kl_VfsNetConfig_SetNetmask_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SetNetmask_err err_;
            } ;
        } kl_VfsNetConfig_SetNetmask_res;
#pragma pack(pop) /* kl_VfsNetConfig_SetNetmask_res */
typedef struct __nk_packed kl_VfsNetConfig_GetNetmask_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_uint32_t addrlen;
        } kl_VfsNetConfig_GetNetmask_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetNetmask_res */
typedef struct kl_VfsNetConfig_GetNetmask_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetNetmask_err;
typedef struct kl_VfsNetConfig_GetNetmask_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetNetmask_err err_;
            } ;
        } kl_VfsNetConfig_GetNetmask_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetNetmask_res */
typedef struct __nk_packed kl_VfsNetConfig_SetBroadcast_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t addr;
        } kl_VfsNetConfig_SetBroadcast_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SetBroadcast_res */
typedef struct kl_VfsNetConfig_SetBroadcast_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SetBroadcast_err;
typedef struct kl_VfsNetConfig_SetBroadcast_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SetBroadcast_err err_;
            } ;
        } kl_VfsNetConfig_SetBroadcast_res;
#pragma pack(pop) /* kl_VfsNetConfig_SetBroadcast_res */
typedef struct __nk_packed kl_VfsNetConfig_GetBroadcast_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_uint32_t addrlen;
        } kl_VfsNetConfig_GetBroadcast_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetBroadcast_res */
typedef struct kl_VfsNetConfig_GetBroadcast_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetBroadcast_err;
typedef struct kl_VfsNetConfig_GetBroadcast_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetBroadcast_err err_;
            } ;
        } kl_VfsNetConfig_GetBroadcast_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetBroadcast_res */
typedef struct __nk_packed kl_VfsNetConfig_SetDstAddr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t addr;
        } kl_VfsNetConfig_SetDstAddr_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SetDstAddr_res */
typedef struct kl_VfsNetConfig_SetDstAddr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SetDstAddr_err;
typedef struct kl_VfsNetConfig_SetDstAddr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SetDstAddr_err err_;
            } ;
        } kl_VfsNetConfig_SetDstAddr_res;
#pragma pack(pop) /* kl_VfsNetConfig_SetDstAddr_res */
typedef struct __nk_packed kl_VfsNetConfig_GetDstAddr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_uint32_t addrlen;
        } kl_VfsNetConfig_GetDstAddr_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetDstAddr_res */
typedef struct kl_VfsNetConfig_GetDstAddr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetDstAddr_err;
typedef struct kl_VfsNetConfig_GetDstAddr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t addr;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetDstAddr_err err_;
            } ;
        } kl_VfsNetConfig_GetDstAddr_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetDstAddr_res */
typedef struct __nk_packed kl_VfsNetConfig_AddIpAddr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t addr;
            __nk_alignas(4) nk_uint32_t prefixlen;
            __nk_alignas(4) nk_uint32_t flags;
        } kl_VfsNetConfig_AddIpAddr_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_AddIpAddr_res */
typedef struct kl_VfsNetConfig_AddIpAddr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_AddIpAddr_err;
typedef struct kl_VfsNetConfig_AddIpAddr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_AddIpAddr_err err_;
            } ;
        } kl_VfsNetConfig_AddIpAddr_res;
#pragma pack(pop) /* kl_VfsNetConfig_AddIpAddr_res */
typedef struct __nk_packed kl_VfsNetConfig_RemoveIpAddr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t addr;
            __nk_alignas(4) nk_uint32_t prefixlen;
            __nk_alignas(4) nk_uint32_t flags;
        } kl_VfsNetConfig_RemoveIpAddr_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_RemoveIpAddr_res */
typedef struct kl_VfsNetConfig_RemoveIpAddr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_RemoveIpAddr_err;
typedef struct kl_VfsNetConfig_RemoveIpAddr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_RemoveIpAddr_err err_;
            } ;
        } kl_VfsNetConfig_RemoveIpAddr_res;
#pragma pack(pop) /* kl_VfsNetConfig_RemoveIpAddr_res */
typedef struct __nk_packed kl_VfsNetConfig_AddRoute_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t dst;
            __nk_alignas(4) nk_ptr_t gw;
        } kl_VfsNetConfig_AddRoute_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_AddRoute_res */
typedef struct kl_VfsNetConfig_AddRoute_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_AddRoute_err;
typedef struct kl_VfsNetConfig_AddRoute_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_AddRoute_err err_;
            } ;
        } kl_VfsNetConfig_AddRoute_res;
#pragma pack(pop) /* kl_VfsNetConfig_AddRoute_res */
typedef struct __nk_packed kl_VfsNetConfig_DelRoute_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t dst;
            __nk_alignas(4) nk_ptr_t gw;
        } kl_VfsNetConfig_DelRoute_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_DelRoute_res */
typedef struct kl_VfsNetConfig_DelRoute_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_DelRoute_err;
typedef struct kl_VfsNetConfig_DelRoute_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_DelRoute_err err_;
            } ;
        } kl_VfsNetConfig_DelRoute_res;
#pragma pack(pop) /* kl_VfsNetConfig_DelRoute_res */
typedef struct __nk_packed kl_VfsNetConfig_SetVlan_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t parent;
            __nk_alignas(4) nk_sint32_t tag;
        } kl_VfsNetConfig_SetVlan_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SetVlan_res */
typedef struct kl_VfsNetConfig_SetVlan_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SetVlan_err;
typedef struct kl_VfsNetConfig_SetVlan_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SetVlan_err err_;
            } ;
        } kl_VfsNetConfig_SetVlan_res;
#pragma pack(pop) /* kl_VfsNetConfig_SetVlan_res */
typedef struct __nk_packed kl_VfsNetConfig_GetVlan_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_GetVlan_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetVlan_res */
typedef struct kl_VfsNetConfig_GetVlan_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetVlan_err;
typedef struct kl_VfsNetConfig_GetVlan_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t parent;
                    __nk_alignas(4)
                    nk_sint32_t tag;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t parent;
                    __nk_alignas(4)
                    nk_sint32_t tag;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetVlan_err err_;
            } ;
        } kl_VfsNetConfig_GetVlan_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetVlan_res */
typedef struct __nk_packed kl_VfsNetConfig_GetActiveIfList_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_uint32_t inlen;
        } kl_VfsNetConfig_GetActiveIfList_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetActiveIfList_res */
typedef struct kl_VfsNetConfig_GetActiveIfList_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetActiveIfList_err;
typedef struct kl_VfsNetConfig_GetActiveIfList_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t confs;
                    __nk_alignas(4)
                    nk_uint32_t outlen;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t confs;
                    __nk_alignas(4)
                    nk_uint32_t outlen;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetActiveIfList_err err_;
            } ;
        } kl_VfsNetConfig_GetActiveIfList_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetActiveIfList_res */
typedef struct __nk_packed kl_VfsNetConfig_GetNumOfBytesAvail_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
        } kl_VfsNetConfig_GetNumOfBytesAvail_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetNumOfBytesAvail_res */
typedef struct kl_VfsNetConfig_GetNumOfBytesAvail_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetNumOfBytesAvail_err;
typedef struct kl_VfsNetConfig_GetNumOfBytesAvail_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t num;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t num;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetNumOfBytesAvail_err err_;
            } ;
        } kl_VfsNetConfig_GetNumOfBytesAvail_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetNumOfBytesAvail_res */
typedef struct __nk_packed kl_VfsNetConfig_GetIfAFlags_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t addr;
        } kl_VfsNetConfig_GetIfAFlags_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetIfAFlags_res */
typedef struct kl_VfsNetConfig_GetIfAFlags_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetIfAFlags_err;
typedef struct kl_VfsNetConfig_GetIfAFlags_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t flags;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t flags;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetIfAFlags_err err_;
            } ;
        } kl_VfsNetConfig_GetIfAFlags_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetIfAFlags_res */
typedef struct __nk_packed kl_VfsNetConfig_PppoeSetParams_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_ptr_t parent;
            __nk_alignas(4) nk_ptr_t ac;
            __nk_alignas(4) nk_ptr_t svc;
        } kl_VfsNetConfig_PppoeSetParams_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_PppoeSetParams_res */
typedef struct kl_VfsNetConfig_PppoeSetParams_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_PppoeSetParams_err;
typedef struct kl_VfsNetConfig_PppoeSetParams_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_PppoeSetParams_err err_;
            } ;
        } kl_VfsNetConfig_PppoeSetParams_res;
#pragma pack(pop) /* kl_VfsNetConfig_PppoeSetParams_res */
typedef struct __nk_packed kl_VfsNetConfig_PppoeGetParams_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_PppoeGetParams_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_PppoeGetParams_res */
typedef struct kl_VfsNetConfig_PppoeGetParams_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_PppoeGetParams_err;
typedef struct kl_VfsNetConfig_PppoeGetParams_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t parent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t parent;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_PppoeGetParams_err err_;
            } ;
        } kl_VfsNetConfig_PppoeGetParams_res;
#pragma pack(pop) /* kl_VfsNetConfig_PppoeGetParams_res */
typedef struct __nk_packed kl_VfsNetConfig_PppoeGetSession_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_PppoeGetSession_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_PppoeGetSession_res */
typedef struct kl_VfsNetConfig_PppoeGetSession_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_PppoeGetSession_err;
typedef struct kl_VfsNetConfig_PppoeGetSession_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t state;
                    __nk_alignas(4)
                    nk_uint32_t sid;
                    __nk_alignas(4)
                    nk_uint32_t padiRetried;
                    __nk_alignas(4)
                    nk_uint32_t padrRetried;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t state;
                    __nk_alignas(4)
                    nk_uint32_t sid;
                    __nk_alignas(4)
                    nk_uint32_t padiRetried;
                    __nk_alignas(4)
                    nk_uint32_t padrRetried;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_PppoeGetSession_err err_;
            } ;
        } kl_VfsNetConfig_PppoeGetSession_res;
#pragma pack(pop) /* kl_VfsNetConfig_PppoeGetSession_res */
typedef struct __nk_packed kl_VfsNetConfig_SpppGetStatus_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_SpppGetStatus_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SpppGetStatus_res */
typedef struct kl_VfsNetConfig_SpppGetStatus_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SpppGetStatus_err;
typedef struct kl_VfsNetConfig_SpppGetStatus_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t phase;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t phase;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SpppGetStatus_err err_;
            } ;
        } kl_VfsNetConfig_SpppGetStatus_res;
#pragma pack(pop) /* kl_VfsNetConfig_SpppGetStatus_res */
typedef struct __nk_packed kl_VfsNetConfig_SpppSetAuthCfg_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_uint32_t hisauth;
            __nk_alignas(4) nk_uint32_t myauth;
            __nk_alignas(4) nk_ptr_t myname;
            __nk_alignas(4) nk_ptr_t mysecret;
            __nk_alignas(4) nk_ptr_t hisname;
            __nk_alignas(4) nk_ptr_t hissecret;
            __nk_alignas(4)
            nk_uint32_t myauthflags;
            __nk_alignas(4)
            nk_uint32_t hisauthflags;
        } kl_VfsNetConfig_SpppSetAuthCfg_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SpppSetAuthCfg_res */
typedef struct kl_VfsNetConfig_SpppSetAuthCfg_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SpppSetAuthCfg_err;
typedef struct kl_VfsNetConfig_SpppSetAuthCfg_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SpppSetAuthCfg_err err_;
            } ;
        } kl_VfsNetConfig_SpppSetAuthCfg_res;
#pragma pack(pop) /* kl_VfsNetConfig_SpppSetAuthCfg_res */
typedef struct __nk_packed kl_VfsNetConfig_SpppGetAuthCfg_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_SpppGetAuthCfg_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SpppGetAuthCfg_res */
typedef struct kl_VfsNetConfig_SpppGetAuthCfg_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SpppGetAuthCfg_err;
typedef struct kl_VfsNetConfig_SpppGetAuthCfg_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t hisauth;
                    __nk_alignas(4)
                    nk_uint32_t myauth;
                    __nk_alignas(4)
                    nk_ptr_t myname;
                    __nk_alignas(4)
                    nk_ptr_t hisname;
                    __nk_alignas(4)
                    nk_uint32_t myauthflags;
                    __nk_alignas(4)
                    nk_uint32_t hisauthflags;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_uint32_t hisauth;
                    __nk_alignas(4)
                    nk_uint32_t myauth;
                    __nk_alignas(4)
                    nk_ptr_t myname;
                    __nk_alignas(4)
                    nk_ptr_t hisname;
                    __nk_alignas(4)
                    nk_uint32_t myauthflags;
                    __nk_alignas(4)
                    nk_uint32_t hisauthflags;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SpppGetAuthCfg_err err_;
            } ;
        } kl_VfsNetConfig_SpppGetAuthCfg_res;
#pragma pack(pop) /* kl_VfsNetConfig_SpppGetAuthCfg_res */
typedef struct __nk_packed kl_VfsNetConfig_SpppSetAuthFailure_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4)
            nk_sint32_t maxFailures;
        } kl_VfsNetConfig_SpppSetAuthFailure_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SpppSetAuthFailure_res */
typedef struct kl_VfsNetConfig_SpppSetAuthFailure_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SpppSetAuthFailure_err;
typedef struct kl_VfsNetConfig_SpppSetAuthFailure_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SpppSetAuthFailure_err err_;
            } ;
        } kl_VfsNetConfig_SpppSetAuthFailure_res;
#pragma pack(pop) /* kl_VfsNetConfig_SpppSetAuthFailure_res */
typedef struct __nk_packed kl_VfsNetConfig_SpppGetAuthFailures_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_SpppGetAuthFailures_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SpppGetAuthFailures_res */
typedef struct kl_VfsNetConfig_SpppGetAuthFailures_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SpppGetAuthFailures_err;
typedef struct kl_VfsNetConfig_SpppGetAuthFailures_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t authFailures;
                    __nk_alignas(4)
                    nk_sint32_t maxFailures;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t authFailures;
                    __nk_alignas(4)
                    nk_sint32_t maxFailures;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SpppGetAuthFailures_err err_;
            } ;
        } kl_VfsNetConfig_SpppGetAuthFailures_res;
#pragma pack(pop) /* kl_VfsNetConfig_SpppGetAuthFailures_res */
typedef struct __nk_packed kl_VfsNetConfig_Sysctl_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_uint32_t namelen;
            __nk_alignas(8) nk_uint64_t oldlen;
            __nk_alignas(4) nk_ptr_t newp;
            __nk_alignas(8) nk_uint64_t newlen;
        } kl_VfsNetConfig_Sysctl_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_Sysctl_res */
typedef struct kl_VfsNetConfig_Sysctl_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_Sysctl_err;
typedef struct kl_VfsNetConfig_Sysctl_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t oldp;
                    __nk_alignas(8)
                    nk_uint64_t outoldlen;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t oldp;
                    __nk_alignas(8)
                    nk_uint64_t outoldlen;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_Sysctl_err err_;
            } ;
        } kl_VfsNetConfig_Sysctl_res;
#pragma pack(pop) /* kl_VfsNetConfig_Sysctl_res */
typedef struct __nk_packed kl_VfsNetConfig_RtDump_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(8) nk_uint64_t oldlenpIn;
        } kl_VfsNetConfig_RtDump_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_RtDump_res */
typedef struct kl_VfsNetConfig_RtDump_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_RtDump_err;
typedef struct kl_VfsNetConfig_RtDump_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_uint64_t oldlenpOut;
                    __nk_alignas(4) nk_ptr_t hdrs;
                    __nk_alignas(4)
                    nk_ptr_t addrs;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_uint64_t oldlenpOut;
                    __nk_alignas(4) nk_ptr_t hdrs;
                    __nk_alignas(4)
                    nk_ptr_t addrs;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_RtDump_err err_;
            } ;
        } kl_VfsNetConfig_RtDump_res;
#pragma pack(pop) /* kl_VfsNetConfig_RtDump_res */
typedef struct __nk_packed kl_VfsNetConfig_RtIflist_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(8) nk_uint64_t oldlenpIn;
        } kl_VfsNetConfig_RtIflist_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_RtIflist_res */
typedef struct kl_VfsNetConfig_RtIflist_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_RtIflist_err;
typedef struct kl_VfsNetConfig_RtIflist_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_uint64_t oldlenpOut;
                    __nk_alignas(4)
                    nk_ptr_t ifaHdrs;
                    __nk_alignas(4)
                    nk_ptr_t ifHdrs;
                    __nk_alignas(4)
                    nk_ptr_t addrs;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_uint64_t oldlenpOut;
                    __nk_alignas(4)
                    nk_ptr_t ifaHdrs;
                    __nk_alignas(4)
                    nk_ptr_t ifHdrs;
                    __nk_alignas(4)
                    nk_ptr_t addrs;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_RtIflist_err err_;
            } ;
        } kl_VfsNetConfig_RtIflist_res;
#pragma pack(pop) /* kl_VfsNetConfig_RtIflist_res */
typedef struct __nk_packed kl_VfsNetConfig_IpctlForwarding_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(8) nk_uint64_t newlen;
            __nk_alignas(4)
            nk_sint32_t forwardingIn;
        } kl_VfsNetConfig_IpctlForwarding_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_IpctlForwarding_res */
typedef struct kl_VfsNetConfig_IpctlForwarding_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_IpctlForwarding_err;
typedef struct kl_VfsNetConfig_IpctlForwarding_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_uint64_t oldlenOut;
                    __nk_alignas(4)
                    nk_sint32_t forwardingOut;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    nk_uint64_t oldlenOut;
                    __nk_alignas(4)
                    nk_sint32_t forwardingOut;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_IpctlForwarding_err err_;
            } ;
        } kl_VfsNetConfig_IpctlForwarding_res;
#pragma pack(pop) /* kl_VfsNetConfig_IpctlForwarding_res */
typedef struct __nk_packed kl_VfsNetConfig_GetMedia_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
        } kl_VfsNetConfig_GetMedia_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_GetMedia_res */
typedef struct kl_VfsNetConfig_GetMedia_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_GetMedia_err;
typedef struct kl_VfsNetConfig_GetMedia_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsIfMediaReqT ifm;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(8)
                    struct kl_VfsTypes_VfsIfMediaReqT ifm;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_GetMedia_err err_;
            } ;
        } kl_VfsNetConfig_GetMedia_res;
#pragma pack(pop) /* kl_VfsNetConfig_GetMedia_res */
typedef struct __nk_packed kl_VfsNetConfig_SetMedia_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(4) nk_sint32_t media;
        } kl_VfsNetConfig_SetMedia_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_SetMedia_res */
typedef struct kl_VfsNetConfig_SetMedia_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_SetMedia_err;
typedef struct kl_VfsNetConfig_SetMedia_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_SetMedia_err err_;
            } ;
        } kl_VfsNetConfig_SetMedia_res;
#pragma pack(pop) /* kl_VfsNetConfig_SetMedia_res */
typedef struct __nk_packed kl_VfsNetConfig_DeleteIfAddr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4)
            struct kl_VfsTypes_VfsIfAliasReqT ifa;
        } kl_VfsNetConfig_DeleteIfAddr_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_DeleteIfAddr_res */
typedef struct kl_VfsNetConfig_DeleteIfAddr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_DeleteIfAddr_err;
typedef struct kl_VfsNetConfig_DeleteIfAddr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_DeleteIfAddr_err err_;
            } ;
        } kl_VfsNetConfig_DeleteIfAddr_res;
#pragma pack(pop) /* kl_VfsNetConfig_DeleteIfAddr_res */
typedef struct __nk_packed kl_VfsNetConfig_AddIfAddr_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4)
            struct kl_VfsTypes_VfsIfAliasReqT ifa;
        } kl_VfsNetConfig_AddIfAddr_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_AddIfAddr_res */
typedef struct kl_VfsNetConfig_AddIfAddr_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_AddIfAddr_err;
typedef struct kl_VfsNetConfig_AddIfAddr_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_AddIfAddr_err err_;
            } ;
        } kl_VfsNetConfig_AddIfAddr_res;
#pragma pack(pop) /* kl_VfsNetConfig_AddIfAddr_res */
typedef struct __nk_packed kl_VfsNetConfig_BridgeGet_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(8) nk_uint64_t cmd;
            __nk_alignas(8) nk_uint64_t size;
            __nk_alignas(4) nk_ptr_t buf;
        } kl_VfsNetConfig_BridgeGet_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_BridgeGet_res */
typedef struct kl_VfsNetConfig_BridgeGet_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_BridgeGet_err;
typedef struct kl_VfsNetConfig_BridgeGet_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t bufOut;
                    __nk_alignas(8)
                    nk_uint64_t lenOut;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_ptr_t bufOut;
                    __nk_alignas(8)
                    nk_uint64_t lenOut;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_BridgeGet_err err_;
            } ;
        } kl_VfsNetConfig_BridgeGet_res;
#pragma pack(pop) /* kl_VfsNetConfig_BridgeGet_res */
typedef struct __nk_packed kl_VfsNetConfig_BridgeSet_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(8) nk_uint64_t cmd;
            __nk_alignas(8) nk_uint64_t size;
            __nk_alignas(4) nk_ptr_t buf;
        } kl_VfsNetConfig_BridgeSet_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_BridgeSet_res */
typedef struct kl_VfsNetConfig_BridgeSet_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_BridgeSet_err;
typedef struct kl_VfsNetConfig_BridgeSet_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_BridgeSet_err err_;
            } ;
        } kl_VfsNetConfig_BridgeSet_res;
#pragma pack(pop) /* kl_VfsNetConfig_BridgeSet_res */
typedef struct __nk_packed kl_VfsNetConfig_DnetIo_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_uint32_t clientId;
            __nk_alignas(4) nk_uint32_t fd;
            __nk_alignas(4) nk_ptr_t name;
            __nk_alignas(8) nk_uint64_t cmd;
            __nk_alignas(4) nk_ptr_t src;
            __nk_alignas(4) nk_uint32_t dstlen;
        } kl_VfsNetConfig_DnetIo_req;
#pragma pack(push, 8) /* kl_VfsNetConfig_DnetIo_res */
typedef struct kl_VfsNetConfig_DnetIo_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_VfsNetConfig_DnetIo_err;
typedef struct kl_VfsNetConfig_DnetIo_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t dst;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t dst;
                    __nk_alignas(4)
                    nk_sint32_t error;
                } res_;
                struct kl_VfsNetConfig_DnetIo_err err_;
            } ;
        } kl_VfsNetConfig_DnetIo_res;
#pragma pack(pop) /* kl_VfsNetConfig_DnetIo_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsNetConfig_CreateIf_mid kl_VfsNetConfig_CreateIf_mid
#define VfsNetConfig_DestroyIf_mid kl_VfsNetConfig_DestroyIf_mid
#define VfsNetConfig_SetFlags_mid kl_VfsNetConfig_SetFlags_mid
#define VfsNetConfig_GetFlags_mid kl_VfsNetConfig_GetFlags_mid
#define VfsNetConfig_SetIpAddr_mid kl_VfsNetConfig_SetIpAddr_mid
#define VfsNetConfig_GetIpAddr_mid kl_VfsNetConfig_GetIpAddr_mid
#define VfsNetConfig_SetNetmask_mid kl_VfsNetConfig_SetNetmask_mid
#define VfsNetConfig_GetNetmask_mid kl_VfsNetConfig_GetNetmask_mid
#define VfsNetConfig_SetBroadcast_mid kl_VfsNetConfig_SetBroadcast_mid
#define VfsNetConfig_GetBroadcast_mid kl_VfsNetConfig_GetBroadcast_mid
#define VfsNetConfig_SetDstAddr_mid kl_VfsNetConfig_SetDstAddr_mid
#define VfsNetConfig_GetDstAddr_mid kl_VfsNetConfig_GetDstAddr_mid
#define VfsNetConfig_AddIpAddr_mid kl_VfsNetConfig_AddIpAddr_mid
#define VfsNetConfig_RemoveIpAddr_mid kl_VfsNetConfig_RemoveIpAddr_mid
#define VfsNetConfig_AddRoute_mid kl_VfsNetConfig_AddRoute_mid
#define VfsNetConfig_DelRoute_mid kl_VfsNetConfig_DelRoute_mid
#define VfsNetConfig_SetVlan_mid kl_VfsNetConfig_SetVlan_mid
#define VfsNetConfig_GetVlan_mid kl_VfsNetConfig_GetVlan_mid
#define VfsNetConfig_GetActiveIfList_mid kl_VfsNetConfig_GetActiveIfList_mid
#define VfsNetConfig_GetNumOfBytesAvail_mid kl_VfsNetConfig_GetNumOfBytesAvail_mid
#define VfsNetConfig_GetIfAFlags_mid kl_VfsNetConfig_GetIfAFlags_mid
#define VfsNetConfig_PppoeSetParams_mid kl_VfsNetConfig_PppoeSetParams_mid
#define VfsNetConfig_PppoeGetParams_mid kl_VfsNetConfig_PppoeGetParams_mid
#define VfsNetConfig_PppoeGetSession_mid kl_VfsNetConfig_PppoeGetSession_mid
#define VfsNetConfig_SpppGetStatus_mid kl_VfsNetConfig_SpppGetStatus_mid
#define VfsNetConfig_SpppSetAuthCfg_mid kl_VfsNetConfig_SpppSetAuthCfg_mid
#define VfsNetConfig_SpppGetAuthCfg_mid kl_VfsNetConfig_SpppGetAuthCfg_mid
#define VfsNetConfig_SpppSetAuthFailure_mid kl_VfsNetConfig_SpppSetAuthFailure_mid
#define VfsNetConfig_SpppGetAuthFailures_mid kl_VfsNetConfig_SpppGetAuthFailures_mid
#define VfsNetConfig_Sysctl_mid kl_VfsNetConfig_Sysctl_mid
#define VfsNetConfig_RtDump_mid kl_VfsNetConfig_RtDump_mid
#define VfsNetConfig_RtIflist_mid kl_VfsNetConfig_RtIflist_mid
#define VfsNetConfig_IpctlForwarding_mid kl_VfsNetConfig_IpctlForwarding_mid
#define VfsNetConfig_GetMedia_mid kl_VfsNetConfig_GetMedia_mid
#define VfsNetConfig_SetMedia_mid kl_VfsNetConfig_SetMedia_mid
#define VfsNetConfig_DeleteIfAddr_mid kl_VfsNetConfig_DeleteIfAddr_mid
#define VfsNetConfig_AddIfAddr_mid kl_VfsNetConfig_AddIfAddr_mid
#define VfsNetConfig_BridgeGet_mid kl_VfsNetConfig_BridgeGet_mid
#define VfsNetConfig_BridgeSet_mid kl_VfsNetConfig_BridgeSet_mid
#define VfsNetConfig_DnetIo_mid kl_VfsNetConfig_DnetIo_mid
#define VfsNetConfig_mid_max kl_VfsNetConfig_mid_max
#define VfsNetConfig_CreateIf_req_name_size kl_VfsNetConfig_CreateIf_req_name_size
#define VfsNetConfig_CreateIf_req_arena_size kl_VfsNetConfig_CreateIf_req_arena_size
#define VfsNetConfig_CreateIf_res_arena_size kl_VfsNetConfig_CreateIf_res_arena_size
#define VfsNetConfig_CreateIf_req_handles kl_VfsNetConfig_CreateIf_req_handles
#define VfsNetConfig_CreateIf_res_handles kl_VfsNetConfig_CreateIf_res_handles
#define VfsNetConfig_CreateIf_err_handles kl_VfsNetConfig_CreateIf_err_handles
#define VfsNetConfig_DestroyIf_req_name_size kl_VfsNetConfig_DestroyIf_req_name_size
#define VfsNetConfig_DestroyIf_req_arena_size kl_VfsNetConfig_DestroyIf_req_arena_size
#define VfsNetConfig_DestroyIf_res_arena_size kl_VfsNetConfig_DestroyIf_res_arena_size
#define VfsNetConfig_DestroyIf_req_handles kl_VfsNetConfig_DestroyIf_req_handles
#define VfsNetConfig_DestroyIf_res_handles kl_VfsNetConfig_DestroyIf_res_handles
#define VfsNetConfig_DestroyIf_err_handles kl_VfsNetConfig_DestroyIf_err_handles
#define VfsNetConfig_SetFlags_req_name_size kl_VfsNetConfig_SetFlags_req_name_size
#define VfsNetConfig_SetFlags_req_arena_size kl_VfsNetConfig_SetFlags_req_arena_size
#define VfsNetConfig_SetFlags_res_arena_size kl_VfsNetConfig_SetFlags_res_arena_size
#define VfsNetConfig_SetFlags_req_handles kl_VfsNetConfig_SetFlags_req_handles
#define VfsNetConfig_SetFlags_res_handles kl_VfsNetConfig_SetFlags_res_handles
#define VfsNetConfig_SetFlags_err_handles kl_VfsNetConfig_SetFlags_err_handles
#define VfsNetConfig_GetFlags_req_name_size kl_VfsNetConfig_GetFlags_req_name_size
#define VfsNetConfig_GetFlags_req_arena_size kl_VfsNetConfig_GetFlags_req_arena_size
#define VfsNetConfig_GetFlags_res_arena_size kl_VfsNetConfig_GetFlags_res_arena_size
#define VfsNetConfig_GetFlags_req_handles kl_VfsNetConfig_GetFlags_req_handles
#define VfsNetConfig_GetFlags_res_handles kl_VfsNetConfig_GetFlags_res_handles
#define VfsNetConfig_GetFlags_err_handles kl_VfsNetConfig_GetFlags_err_handles
#define VfsNetConfig_SetIpAddr_req_name_size kl_VfsNetConfig_SetIpAddr_req_name_size
#define VfsNetConfig_SetIpAddr_req_addr_size kl_VfsNetConfig_SetIpAddr_req_addr_size
#define VfsNetConfig_SetIpAddr_req_arena_size kl_VfsNetConfig_SetIpAddr_req_arena_size
#define VfsNetConfig_SetIpAddr_res_arena_size kl_VfsNetConfig_SetIpAddr_res_arena_size
#define VfsNetConfig_SetIpAddr_req_handles kl_VfsNetConfig_SetIpAddr_req_handles
#define VfsNetConfig_SetIpAddr_res_handles kl_VfsNetConfig_SetIpAddr_res_handles
#define VfsNetConfig_SetIpAddr_err_handles kl_VfsNetConfig_SetIpAddr_err_handles
#define VfsNetConfig_GetIpAddr_req_name_size kl_VfsNetConfig_GetIpAddr_req_name_size
#define VfsNetConfig_GetIpAddr_res_addr_size kl_VfsNetConfig_GetIpAddr_res_addr_size
#define VfsNetConfig_GetIpAddr_req_arena_size kl_VfsNetConfig_GetIpAddr_req_arena_size
#define VfsNetConfig_GetIpAddr_res_arena_size kl_VfsNetConfig_GetIpAddr_res_arena_size
#define VfsNetConfig_GetIpAddr_req_handles kl_VfsNetConfig_GetIpAddr_req_handles
#define VfsNetConfig_GetIpAddr_res_handles kl_VfsNetConfig_GetIpAddr_res_handles
#define VfsNetConfig_GetIpAddr_err_handles kl_VfsNetConfig_GetIpAddr_err_handles
#define VfsNetConfig_SetNetmask_req_name_size kl_VfsNetConfig_SetNetmask_req_name_size
#define VfsNetConfig_SetNetmask_req_addr_size kl_VfsNetConfig_SetNetmask_req_addr_size
#define VfsNetConfig_SetNetmask_req_arena_size kl_VfsNetConfig_SetNetmask_req_arena_size
#define VfsNetConfig_SetNetmask_res_arena_size kl_VfsNetConfig_SetNetmask_res_arena_size
#define VfsNetConfig_SetNetmask_req_handles kl_VfsNetConfig_SetNetmask_req_handles
#define VfsNetConfig_SetNetmask_res_handles kl_VfsNetConfig_SetNetmask_res_handles
#define VfsNetConfig_SetNetmask_err_handles kl_VfsNetConfig_SetNetmask_err_handles
#define VfsNetConfig_GetNetmask_req_name_size kl_VfsNetConfig_GetNetmask_req_name_size
#define VfsNetConfig_GetNetmask_res_addr_size kl_VfsNetConfig_GetNetmask_res_addr_size
#define VfsNetConfig_GetNetmask_req_arena_size kl_VfsNetConfig_GetNetmask_req_arena_size
#define VfsNetConfig_GetNetmask_res_arena_size kl_VfsNetConfig_GetNetmask_res_arena_size
#define VfsNetConfig_GetNetmask_req_handles kl_VfsNetConfig_GetNetmask_req_handles
#define VfsNetConfig_GetNetmask_res_handles kl_VfsNetConfig_GetNetmask_res_handles
#define VfsNetConfig_GetNetmask_err_handles kl_VfsNetConfig_GetNetmask_err_handles
#define VfsNetConfig_SetBroadcast_req_name_size kl_VfsNetConfig_SetBroadcast_req_name_size
#define VfsNetConfig_SetBroadcast_req_addr_size kl_VfsNetConfig_SetBroadcast_req_addr_size
#define VfsNetConfig_SetBroadcast_req_arena_size kl_VfsNetConfig_SetBroadcast_req_arena_size
#define VfsNetConfig_SetBroadcast_res_arena_size kl_VfsNetConfig_SetBroadcast_res_arena_size
#define VfsNetConfig_SetBroadcast_req_handles kl_VfsNetConfig_SetBroadcast_req_handles
#define VfsNetConfig_SetBroadcast_res_handles kl_VfsNetConfig_SetBroadcast_res_handles
#define VfsNetConfig_SetBroadcast_err_handles kl_VfsNetConfig_SetBroadcast_err_handles
#define VfsNetConfig_GetBroadcast_req_name_size kl_VfsNetConfig_GetBroadcast_req_name_size
#define VfsNetConfig_GetBroadcast_res_addr_size kl_VfsNetConfig_GetBroadcast_res_addr_size
#define VfsNetConfig_GetBroadcast_req_arena_size kl_VfsNetConfig_GetBroadcast_req_arena_size
#define VfsNetConfig_GetBroadcast_res_arena_size kl_VfsNetConfig_GetBroadcast_res_arena_size
#define VfsNetConfig_GetBroadcast_req_handles kl_VfsNetConfig_GetBroadcast_req_handles
#define VfsNetConfig_GetBroadcast_res_handles kl_VfsNetConfig_GetBroadcast_res_handles
#define VfsNetConfig_GetBroadcast_err_handles kl_VfsNetConfig_GetBroadcast_err_handles
#define VfsNetConfig_SetDstAddr_req_name_size kl_VfsNetConfig_SetDstAddr_req_name_size
#define VfsNetConfig_SetDstAddr_req_addr_size kl_VfsNetConfig_SetDstAddr_req_addr_size
#define VfsNetConfig_SetDstAddr_req_arena_size kl_VfsNetConfig_SetDstAddr_req_arena_size
#define VfsNetConfig_SetDstAddr_res_arena_size kl_VfsNetConfig_SetDstAddr_res_arena_size
#define VfsNetConfig_SetDstAddr_req_handles kl_VfsNetConfig_SetDstAddr_req_handles
#define VfsNetConfig_SetDstAddr_res_handles kl_VfsNetConfig_SetDstAddr_res_handles
#define VfsNetConfig_SetDstAddr_err_handles kl_VfsNetConfig_SetDstAddr_err_handles
#define VfsNetConfig_GetDstAddr_req_name_size kl_VfsNetConfig_GetDstAddr_req_name_size
#define VfsNetConfig_GetDstAddr_res_addr_size kl_VfsNetConfig_GetDstAddr_res_addr_size
#define VfsNetConfig_GetDstAddr_req_arena_size kl_VfsNetConfig_GetDstAddr_req_arena_size
#define VfsNetConfig_GetDstAddr_res_arena_size kl_VfsNetConfig_GetDstAddr_res_arena_size
#define VfsNetConfig_GetDstAddr_req_handles kl_VfsNetConfig_GetDstAddr_req_handles
#define VfsNetConfig_GetDstAddr_res_handles kl_VfsNetConfig_GetDstAddr_res_handles
#define VfsNetConfig_GetDstAddr_err_handles kl_VfsNetConfig_GetDstAddr_err_handles
#define VfsNetConfig_AddIpAddr_req_name_size kl_VfsNetConfig_AddIpAddr_req_name_size
#define VfsNetConfig_AddIpAddr_req_addr_size kl_VfsNetConfig_AddIpAddr_req_addr_size
#define VfsNetConfig_AddIpAddr_req_arena_size kl_VfsNetConfig_AddIpAddr_req_arena_size
#define VfsNetConfig_AddIpAddr_res_arena_size kl_VfsNetConfig_AddIpAddr_res_arena_size
#define VfsNetConfig_AddIpAddr_req_handles kl_VfsNetConfig_AddIpAddr_req_handles
#define VfsNetConfig_AddIpAddr_res_handles kl_VfsNetConfig_AddIpAddr_res_handles
#define VfsNetConfig_AddIpAddr_err_handles kl_VfsNetConfig_AddIpAddr_err_handles
#define VfsNetConfig_RemoveIpAddr_req_name_size kl_VfsNetConfig_RemoveIpAddr_req_name_size
#define VfsNetConfig_RemoveIpAddr_req_addr_size kl_VfsNetConfig_RemoveIpAddr_req_addr_size
#define VfsNetConfig_RemoveIpAddr_req_arena_size kl_VfsNetConfig_RemoveIpAddr_req_arena_size
#define VfsNetConfig_RemoveIpAddr_res_arena_size kl_VfsNetConfig_RemoveIpAddr_res_arena_size
#define VfsNetConfig_RemoveIpAddr_req_handles kl_VfsNetConfig_RemoveIpAddr_req_handles
#define VfsNetConfig_RemoveIpAddr_res_handles kl_VfsNetConfig_RemoveIpAddr_res_handles
#define VfsNetConfig_RemoveIpAddr_err_handles kl_VfsNetConfig_RemoveIpAddr_err_handles
#define VfsNetConfig_AddRoute_req_dst_size kl_VfsNetConfig_AddRoute_req_dst_size
#define VfsNetConfig_AddRoute_req_gw_size kl_VfsNetConfig_AddRoute_req_gw_size
#define VfsNetConfig_AddRoute_req_arena_size kl_VfsNetConfig_AddRoute_req_arena_size
#define VfsNetConfig_AddRoute_res_arena_size kl_VfsNetConfig_AddRoute_res_arena_size
#define VfsNetConfig_AddRoute_req_handles kl_VfsNetConfig_AddRoute_req_handles
#define VfsNetConfig_AddRoute_res_handles kl_VfsNetConfig_AddRoute_res_handles
#define VfsNetConfig_AddRoute_err_handles kl_VfsNetConfig_AddRoute_err_handles
#define VfsNetConfig_DelRoute_req_dst_size kl_VfsNetConfig_DelRoute_req_dst_size
#define VfsNetConfig_DelRoute_req_gw_size kl_VfsNetConfig_DelRoute_req_gw_size
#define VfsNetConfig_DelRoute_req_arena_size kl_VfsNetConfig_DelRoute_req_arena_size
#define VfsNetConfig_DelRoute_res_arena_size kl_VfsNetConfig_DelRoute_res_arena_size
#define VfsNetConfig_DelRoute_req_handles kl_VfsNetConfig_DelRoute_req_handles
#define VfsNetConfig_DelRoute_res_handles kl_VfsNetConfig_DelRoute_res_handles
#define VfsNetConfig_DelRoute_err_handles kl_VfsNetConfig_DelRoute_err_handles
#define VfsNetConfig_SetVlan_req_name_size kl_VfsNetConfig_SetVlan_req_name_size
#define VfsNetConfig_SetVlan_req_parent_size kl_VfsNetConfig_SetVlan_req_parent_size
#define VfsNetConfig_SetVlan_req_arena_size kl_VfsNetConfig_SetVlan_req_arena_size
#define VfsNetConfig_SetVlan_res_arena_size kl_VfsNetConfig_SetVlan_res_arena_size
#define VfsNetConfig_SetVlan_req_handles kl_VfsNetConfig_SetVlan_req_handles
#define VfsNetConfig_SetVlan_res_handles kl_VfsNetConfig_SetVlan_res_handles
#define VfsNetConfig_SetVlan_err_handles kl_VfsNetConfig_SetVlan_err_handles
#define VfsNetConfig_GetVlan_req_name_size kl_VfsNetConfig_GetVlan_req_name_size
#define VfsNetConfig_GetVlan_res_parent_size kl_VfsNetConfig_GetVlan_res_parent_size
#define VfsNetConfig_GetVlan_req_arena_size kl_VfsNetConfig_GetVlan_req_arena_size
#define VfsNetConfig_GetVlan_res_arena_size kl_VfsNetConfig_GetVlan_res_arena_size
#define VfsNetConfig_GetVlan_req_handles kl_VfsNetConfig_GetVlan_req_handles
#define VfsNetConfig_GetVlan_res_handles kl_VfsNetConfig_GetVlan_res_handles
#define VfsNetConfig_GetVlan_err_handles kl_VfsNetConfig_GetVlan_err_handles
#define VfsNetConfig_GetActiveIfList_res_confs_size kl_VfsNetConfig_GetActiveIfList_res_confs_size
#define VfsNetConfig_GetActiveIfList_res_confs_elem_name_size kl_VfsNetConfig_GetActiveIfList_res_confs_elem_name_size
#define VfsNetConfig_GetActiveIfList_res_confs_elem_addr_size kl_VfsNetConfig_GetActiveIfList_res_confs_elem_addr_size
#define VfsNetConfig_GetActiveIfList_req_arena_size kl_VfsNetConfig_GetActiveIfList_req_arena_size
#define VfsNetConfig_GetActiveIfList_res_arena_size kl_VfsNetConfig_GetActiveIfList_res_arena_size
#define VfsNetConfig_GetActiveIfList_req_handles kl_VfsNetConfig_GetActiveIfList_req_handles
#define VfsNetConfig_GetActiveIfList_res_handles kl_VfsNetConfig_GetActiveIfList_res_handles
#define VfsNetConfig_GetActiveIfList_err_handles kl_VfsNetConfig_GetActiveIfList_err_handles
#define VfsNetConfig_GetNumOfBytesAvail_req_arena_size kl_VfsNetConfig_GetNumOfBytesAvail_req_arena_size
#define VfsNetConfig_GetNumOfBytesAvail_res_arena_size kl_VfsNetConfig_GetNumOfBytesAvail_res_arena_size
#define VfsNetConfig_GetNumOfBytesAvail_req_handles kl_VfsNetConfig_GetNumOfBytesAvail_req_handles
#define VfsNetConfig_GetNumOfBytesAvail_res_handles kl_VfsNetConfig_GetNumOfBytesAvail_res_handles
#define VfsNetConfig_GetNumOfBytesAvail_err_handles kl_VfsNetConfig_GetNumOfBytesAvail_err_handles
#define VfsNetConfig_GetIfAFlags_req_name_size kl_VfsNetConfig_GetIfAFlags_req_name_size
#define VfsNetConfig_GetIfAFlags_req_addr_size kl_VfsNetConfig_GetIfAFlags_req_addr_size
#define VfsNetConfig_GetIfAFlags_req_arena_size kl_VfsNetConfig_GetIfAFlags_req_arena_size
#define VfsNetConfig_GetIfAFlags_res_arena_size kl_VfsNetConfig_GetIfAFlags_res_arena_size
#define VfsNetConfig_GetIfAFlags_req_handles kl_VfsNetConfig_GetIfAFlags_req_handles
#define VfsNetConfig_GetIfAFlags_res_handles kl_VfsNetConfig_GetIfAFlags_res_handles
#define VfsNetConfig_GetIfAFlags_err_handles kl_VfsNetConfig_GetIfAFlags_err_handles
#define VfsNetConfig_PppoeSetParams_req_name_size kl_VfsNetConfig_PppoeSetParams_req_name_size
#define VfsNetConfig_PppoeSetParams_req_parent_size kl_VfsNetConfig_PppoeSetParams_req_parent_size
#define VfsNetConfig_PppoeSetParams_req_ac_size kl_VfsNetConfig_PppoeSetParams_req_ac_size
#define VfsNetConfig_PppoeSetParams_req_svc_size kl_VfsNetConfig_PppoeSetParams_req_svc_size
#define VfsNetConfig_PppoeSetParams_req_arena_size kl_VfsNetConfig_PppoeSetParams_req_arena_size
#define VfsNetConfig_PppoeSetParams_res_arena_size kl_VfsNetConfig_PppoeSetParams_res_arena_size
#define VfsNetConfig_PppoeSetParams_req_handles kl_VfsNetConfig_PppoeSetParams_req_handles
#define VfsNetConfig_PppoeSetParams_res_handles kl_VfsNetConfig_PppoeSetParams_res_handles
#define VfsNetConfig_PppoeSetParams_err_handles kl_VfsNetConfig_PppoeSetParams_err_handles
#define VfsNetConfig_PppoeGetParams_req_name_size kl_VfsNetConfig_PppoeGetParams_req_name_size
#define VfsNetConfig_PppoeGetParams_res_parent_size kl_VfsNetConfig_PppoeGetParams_res_parent_size
#define VfsNetConfig_PppoeGetParams_req_arena_size kl_VfsNetConfig_PppoeGetParams_req_arena_size
#define VfsNetConfig_PppoeGetParams_res_arena_size kl_VfsNetConfig_PppoeGetParams_res_arena_size
#define VfsNetConfig_PppoeGetParams_req_handles kl_VfsNetConfig_PppoeGetParams_req_handles
#define VfsNetConfig_PppoeGetParams_res_handles kl_VfsNetConfig_PppoeGetParams_res_handles
#define VfsNetConfig_PppoeGetParams_err_handles kl_VfsNetConfig_PppoeGetParams_err_handles
#define VfsNetConfig_PppoeGetSession_req_name_size kl_VfsNetConfig_PppoeGetSession_req_name_size
#define VfsNetConfig_PppoeGetSession_req_arena_size kl_VfsNetConfig_PppoeGetSession_req_arena_size
#define VfsNetConfig_PppoeGetSession_res_arena_size kl_VfsNetConfig_PppoeGetSession_res_arena_size
#define VfsNetConfig_PppoeGetSession_req_handles kl_VfsNetConfig_PppoeGetSession_req_handles
#define VfsNetConfig_PppoeGetSession_res_handles kl_VfsNetConfig_PppoeGetSession_res_handles
#define VfsNetConfig_PppoeGetSession_err_handles kl_VfsNetConfig_PppoeGetSession_err_handles
#define VfsNetConfig_SpppGetStatus_req_name_size kl_VfsNetConfig_SpppGetStatus_req_name_size
#define VfsNetConfig_SpppGetStatus_req_arena_size kl_VfsNetConfig_SpppGetStatus_req_arena_size
#define VfsNetConfig_SpppGetStatus_res_arena_size kl_VfsNetConfig_SpppGetStatus_res_arena_size
#define VfsNetConfig_SpppGetStatus_req_handles kl_VfsNetConfig_SpppGetStatus_req_handles
#define VfsNetConfig_SpppGetStatus_res_handles kl_VfsNetConfig_SpppGetStatus_res_handles
#define VfsNetConfig_SpppGetStatus_err_handles kl_VfsNetConfig_SpppGetStatus_err_handles
#define VfsNetConfig_SpppSetAuthCfg_req_name_size kl_VfsNetConfig_SpppSetAuthCfg_req_name_size
#define VfsNetConfig_SpppSetAuthCfg_req_myname_size kl_VfsNetConfig_SpppSetAuthCfg_req_myname_size
#define VfsNetConfig_SpppSetAuthCfg_req_mysecret_size kl_VfsNetConfig_SpppSetAuthCfg_req_mysecret_size
#define VfsNetConfig_SpppSetAuthCfg_req_hisname_size kl_VfsNetConfig_SpppSetAuthCfg_req_hisname_size
#define VfsNetConfig_SpppSetAuthCfg_req_hissecret_size kl_VfsNetConfig_SpppSetAuthCfg_req_hissecret_size
#define VfsNetConfig_SpppSetAuthCfg_req_arena_size kl_VfsNetConfig_SpppSetAuthCfg_req_arena_size
#define VfsNetConfig_SpppSetAuthCfg_res_arena_size kl_VfsNetConfig_SpppSetAuthCfg_res_arena_size
#define VfsNetConfig_SpppSetAuthCfg_req_handles kl_VfsNetConfig_SpppSetAuthCfg_req_handles
#define VfsNetConfig_SpppSetAuthCfg_res_handles kl_VfsNetConfig_SpppSetAuthCfg_res_handles
#define VfsNetConfig_SpppSetAuthCfg_err_handles kl_VfsNetConfig_SpppSetAuthCfg_err_handles
#define VfsNetConfig_SpppGetAuthCfg_req_name_size kl_VfsNetConfig_SpppGetAuthCfg_req_name_size
#define VfsNetConfig_SpppGetAuthCfg_res_myname_size kl_VfsNetConfig_SpppGetAuthCfg_res_myname_size
#define VfsNetConfig_SpppGetAuthCfg_res_hisname_size kl_VfsNetConfig_SpppGetAuthCfg_res_hisname_size
#define VfsNetConfig_SpppGetAuthCfg_req_arena_size kl_VfsNetConfig_SpppGetAuthCfg_req_arena_size
#define VfsNetConfig_SpppGetAuthCfg_res_arena_size kl_VfsNetConfig_SpppGetAuthCfg_res_arena_size
#define VfsNetConfig_SpppGetAuthCfg_req_handles kl_VfsNetConfig_SpppGetAuthCfg_req_handles
#define VfsNetConfig_SpppGetAuthCfg_res_handles kl_VfsNetConfig_SpppGetAuthCfg_res_handles
#define VfsNetConfig_SpppGetAuthCfg_err_handles kl_VfsNetConfig_SpppGetAuthCfg_err_handles
#define VfsNetConfig_SpppSetAuthFailure_req_name_size kl_VfsNetConfig_SpppSetAuthFailure_req_name_size
#define VfsNetConfig_SpppSetAuthFailure_req_arena_size kl_VfsNetConfig_SpppSetAuthFailure_req_arena_size
#define VfsNetConfig_SpppSetAuthFailure_res_arena_size kl_VfsNetConfig_SpppSetAuthFailure_res_arena_size
#define VfsNetConfig_SpppSetAuthFailure_req_handles kl_VfsNetConfig_SpppSetAuthFailure_req_handles
#define VfsNetConfig_SpppSetAuthFailure_res_handles kl_VfsNetConfig_SpppSetAuthFailure_res_handles
#define VfsNetConfig_SpppSetAuthFailure_err_handles kl_VfsNetConfig_SpppSetAuthFailure_err_handles
#define VfsNetConfig_SpppGetAuthFailures_req_name_size kl_VfsNetConfig_SpppGetAuthFailures_req_name_size
#define VfsNetConfig_SpppGetAuthFailures_req_arena_size kl_VfsNetConfig_SpppGetAuthFailures_req_arena_size
#define VfsNetConfig_SpppGetAuthFailures_res_arena_size kl_VfsNetConfig_SpppGetAuthFailures_res_arena_size
#define VfsNetConfig_SpppGetAuthFailures_req_handles kl_VfsNetConfig_SpppGetAuthFailures_req_handles
#define VfsNetConfig_SpppGetAuthFailures_res_handles kl_VfsNetConfig_SpppGetAuthFailures_res_handles
#define VfsNetConfig_SpppGetAuthFailures_err_handles kl_VfsNetConfig_SpppGetAuthFailures_err_handles
#define VfsNetConfig_Sysctl_req_name_size kl_VfsNetConfig_Sysctl_req_name_size
#define VfsNetConfig_Sysctl_req_newp_size kl_VfsNetConfig_Sysctl_req_newp_size
#define VfsNetConfig_Sysctl_res_oldp_size kl_VfsNetConfig_Sysctl_res_oldp_size
#define VfsNetConfig_Sysctl_req_arena_size kl_VfsNetConfig_Sysctl_req_arena_size
#define VfsNetConfig_Sysctl_res_arena_size kl_VfsNetConfig_Sysctl_res_arena_size
#define VfsNetConfig_Sysctl_req_handles kl_VfsNetConfig_Sysctl_req_handles
#define VfsNetConfig_Sysctl_res_handles kl_VfsNetConfig_Sysctl_res_handles
#define VfsNetConfig_Sysctl_err_handles kl_VfsNetConfig_Sysctl_err_handles
#define VfsNetConfig_RtDump_res_hdrs_size kl_VfsNetConfig_RtDump_res_hdrs_size
#define VfsNetConfig_RtDump_res_addrs_size kl_VfsNetConfig_RtDump_res_addrs_size
#define VfsNetConfig_RtDump_res_addrs_elem_size kl_VfsNetConfig_RtDump_res_addrs_elem_size
#define VfsNetConfig_RtDump_req_arena_size kl_VfsNetConfig_RtDump_req_arena_size
#define VfsNetConfig_RtDump_res_arena_size kl_VfsNetConfig_RtDump_res_arena_size
#define VfsNetConfig_RtDump_req_handles kl_VfsNetConfig_RtDump_req_handles
#define VfsNetConfig_RtDump_res_handles kl_VfsNetConfig_RtDump_res_handles
#define VfsNetConfig_RtDump_err_handles kl_VfsNetConfig_RtDump_err_handles
#define VfsNetConfig_RtIflist_res_ifaHdrs_size kl_VfsNetConfig_RtIflist_res_ifaHdrs_size
#define VfsNetConfig_RtIflist_res_ifHdrs_size kl_VfsNetConfig_RtIflist_res_ifHdrs_size
#define VfsNetConfig_RtIflist_res_addrs_size kl_VfsNetConfig_RtIflist_res_addrs_size
#define VfsNetConfig_RtIflist_res_addrs_elem_size kl_VfsNetConfig_RtIflist_res_addrs_elem_size
#define VfsNetConfig_RtIflist_req_arena_size kl_VfsNetConfig_RtIflist_req_arena_size
#define VfsNetConfig_RtIflist_res_arena_size kl_VfsNetConfig_RtIflist_res_arena_size
#define VfsNetConfig_RtIflist_req_handles kl_VfsNetConfig_RtIflist_req_handles
#define VfsNetConfig_RtIflist_res_handles kl_VfsNetConfig_RtIflist_res_handles
#define VfsNetConfig_RtIflist_err_handles kl_VfsNetConfig_RtIflist_err_handles
#define VfsNetConfig_IpctlForwarding_req_arena_size kl_VfsNetConfig_IpctlForwarding_req_arena_size
#define VfsNetConfig_IpctlForwarding_res_arena_size kl_VfsNetConfig_IpctlForwarding_res_arena_size
#define VfsNetConfig_IpctlForwarding_req_handles kl_VfsNetConfig_IpctlForwarding_req_handles
#define VfsNetConfig_IpctlForwarding_res_handles kl_VfsNetConfig_IpctlForwarding_res_handles
#define VfsNetConfig_IpctlForwarding_err_handles kl_VfsNetConfig_IpctlForwarding_err_handles
#define VfsNetConfig_GetMedia_req_name_size kl_VfsNetConfig_GetMedia_req_name_size
#define VfsNetConfig_GetMedia_res_ifm_ifmName_size kl_VfsNetConfig_GetMedia_res_ifm_ifmName_size
#define VfsNetConfig_GetMedia_res_ifm_ifmUlist_size kl_VfsNetConfig_GetMedia_res_ifm_ifmUlist_size
#define VfsNetConfig_GetMedia_req_arena_size kl_VfsNetConfig_GetMedia_req_arena_size
#define VfsNetConfig_GetMedia_res_arena_size kl_VfsNetConfig_GetMedia_res_arena_size
#define VfsNetConfig_GetMedia_req_handles kl_VfsNetConfig_GetMedia_req_handles
#define VfsNetConfig_GetMedia_res_handles kl_VfsNetConfig_GetMedia_res_handles
#define VfsNetConfig_GetMedia_err_handles kl_VfsNetConfig_GetMedia_err_handles
#define VfsNetConfig_SetMedia_req_name_size kl_VfsNetConfig_SetMedia_req_name_size
#define VfsNetConfig_SetMedia_req_arena_size kl_VfsNetConfig_SetMedia_req_arena_size
#define VfsNetConfig_SetMedia_res_arena_size kl_VfsNetConfig_SetMedia_res_arena_size
#define VfsNetConfig_SetMedia_req_handles kl_VfsNetConfig_SetMedia_req_handles
#define VfsNetConfig_SetMedia_res_handles kl_VfsNetConfig_SetMedia_res_handles
#define VfsNetConfig_SetMedia_err_handles kl_VfsNetConfig_SetMedia_err_handles
#define VfsNetConfig_DeleteIfAddr_req_ifa_ifraName_size kl_VfsNetConfig_DeleteIfAddr_req_ifa_ifraName_size
#define VfsNetConfig_DeleteIfAddr_req_ifa_ifraAddr_size kl_VfsNetConfig_DeleteIfAddr_req_ifa_ifraAddr_size
#define VfsNetConfig_DeleteIfAddr_req_ifa_ifraDstaddr_size kl_VfsNetConfig_DeleteIfAddr_req_ifa_ifraDstaddr_size
#define VfsNetConfig_DeleteIfAddr_req_ifa_ifraMask_size kl_VfsNetConfig_DeleteIfAddr_req_ifa_ifraMask_size
#define VfsNetConfig_DeleteIfAddr_req_arena_size kl_VfsNetConfig_DeleteIfAddr_req_arena_size
#define VfsNetConfig_DeleteIfAddr_res_arena_size kl_VfsNetConfig_DeleteIfAddr_res_arena_size
#define VfsNetConfig_DeleteIfAddr_req_handles kl_VfsNetConfig_DeleteIfAddr_req_handles
#define VfsNetConfig_DeleteIfAddr_res_handles kl_VfsNetConfig_DeleteIfAddr_res_handles
#define VfsNetConfig_DeleteIfAddr_err_handles kl_VfsNetConfig_DeleteIfAddr_err_handles
#define VfsNetConfig_AddIfAddr_req_ifa_ifraName_size kl_VfsNetConfig_AddIfAddr_req_ifa_ifraName_size
#define VfsNetConfig_AddIfAddr_req_ifa_ifraAddr_size kl_VfsNetConfig_AddIfAddr_req_ifa_ifraAddr_size
#define VfsNetConfig_AddIfAddr_req_ifa_ifraDstaddr_size kl_VfsNetConfig_AddIfAddr_req_ifa_ifraDstaddr_size
#define VfsNetConfig_AddIfAddr_req_ifa_ifraMask_size kl_VfsNetConfig_AddIfAddr_req_ifa_ifraMask_size
#define VfsNetConfig_AddIfAddr_req_arena_size kl_VfsNetConfig_AddIfAddr_req_arena_size
#define VfsNetConfig_AddIfAddr_res_arena_size kl_VfsNetConfig_AddIfAddr_res_arena_size
#define VfsNetConfig_AddIfAddr_req_handles kl_VfsNetConfig_AddIfAddr_req_handles
#define VfsNetConfig_AddIfAddr_res_handles kl_VfsNetConfig_AddIfAddr_res_handles
#define VfsNetConfig_AddIfAddr_err_handles kl_VfsNetConfig_AddIfAddr_err_handles
#define VfsNetConfig_BridgeGet_req_name_size kl_VfsNetConfig_BridgeGet_req_name_size
#define VfsNetConfig_BridgeGet_req_buf_size kl_VfsNetConfig_BridgeGet_req_buf_size
#define VfsNetConfig_BridgeGet_res_bufOut_size kl_VfsNetConfig_BridgeGet_res_bufOut_size
#define VfsNetConfig_BridgeGet_req_arena_size kl_VfsNetConfig_BridgeGet_req_arena_size
#define VfsNetConfig_BridgeGet_res_arena_size kl_VfsNetConfig_BridgeGet_res_arena_size
#define VfsNetConfig_BridgeGet_req_handles kl_VfsNetConfig_BridgeGet_req_handles
#define VfsNetConfig_BridgeGet_res_handles kl_VfsNetConfig_BridgeGet_res_handles
#define VfsNetConfig_BridgeGet_err_handles kl_VfsNetConfig_BridgeGet_err_handles
#define VfsNetConfig_BridgeSet_req_name_size kl_VfsNetConfig_BridgeSet_req_name_size
#define VfsNetConfig_BridgeSet_req_buf_size kl_VfsNetConfig_BridgeSet_req_buf_size
#define VfsNetConfig_BridgeSet_req_arena_size kl_VfsNetConfig_BridgeSet_req_arena_size
#define VfsNetConfig_BridgeSet_res_arena_size kl_VfsNetConfig_BridgeSet_res_arena_size
#define VfsNetConfig_BridgeSet_req_handles kl_VfsNetConfig_BridgeSet_req_handles
#define VfsNetConfig_BridgeSet_res_handles kl_VfsNetConfig_BridgeSet_res_handles
#define VfsNetConfig_BridgeSet_err_handles kl_VfsNetConfig_BridgeSet_err_handles
#define VfsNetConfig_DnetIo_req_name_size kl_VfsNetConfig_DnetIo_req_name_size
#define VfsNetConfig_DnetIo_req_src_size kl_VfsNetConfig_DnetIo_req_src_size
#define VfsNetConfig_DnetIo_res_dst_size kl_VfsNetConfig_DnetIo_res_dst_size
#define VfsNetConfig_DnetIo_req_arena_size kl_VfsNetConfig_DnetIo_req_arena_size
#define VfsNetConfig_DnetIo_res_arena_size kl_VfsNetConfig_DnetIo_res_arena_size
#define VfsNetConfig_DnetIo_req_handles kl_VfsNetConfig_DnetIo_req_handles
#define VfsNetConfig_DnetIo_res_handles kl_VfsNetConfig_DnetIo_res_handles
#define VfsNetConfig_DnetIo_err_handles kl_VfsNetConfig_DnetIo_err_handles
#define VfsNetConfig_req_arena_size kl_VfsNetConfig_req_arena_size
#define VfsNetConfig_res_arena_size kl_VfsNetConfig_res_arena_size
#define VfsNetConfig_arena_size kl_VfsNetConfig_arena_size
#define VfsNetConfig_req_handles kl_VfsNetConfig_req_handles
#define VfsNetConfig_res_handles kl_VfsNetConfig_res_handles
#define VfsNetConfig_err_handles kl_VfsNetConfig_err_handles
#define VfsNetConfig_CreateIf_req kl_VfsNetConfig_CreateIf_req
#define VfsNetConfig_CreateIf_res kl_VfsNetConfig_CreateIf_res
#define VfsNetConfig_DestroyIf_req kl_VfsNetConfig_DestroyIf_req
#define VfsNetConfig_DestroyIf_res kl_VfsNetConfig_DestroyIf_res
#define VfsNetConfig_SetFlags_req kl_VfsNetConfig_SetFlags_req
#define VfsNetConfig_SetFlags_res kl_VfsNetConfig_SetFlags_res
#define VfsNetConfig_GetFlags_req kl_VfsNetConfig_GetFlags_req
#define VfsNetConfig_GetFlags_res kl_VfsNetConfig_GetFlags_res
#define VfsNetConfig_SetIpAddr_req kl_VfsNetConfig_SetIpAddr_req
#define VfsNetConfig_SetIpAddr_res kl_VfsNetConfig_SetIpAddr_res
#define VfsNetConfig_GetIpAddr_req kl_VfsNetConfig_GetIpAddr_req
#define VfsNetConfig_GetIpAddr_res kl_VfsNetConfig_GetIpAddr_res
#define VfsNetConfig_SetNetmask_req kl_VfsNetConfig_SetNetmask_req
#define VfsNetConfig_SetNetmask_res kl_VfsNetConfig_SetNetmask_res
#define VfsNetConfig_GetNetmask_req kl_VfsNetConfig_GetNetmask_req
#define VfsNetConfig_GetNetmask_res kl_VfsNetConfig_GetNetmask_res
#define VfsNetConfig_SetBroadcast_req kl_VfsNetConfig_SetBroadcast_req
#define VfsNetConfig_SetBroadcast_res kl_VfsNetConfig_SetBroadcast_res
#define VfsNetConfig_GetBroadcast_req kl_VfsNetConfig_GetBroadcast_req
#define VfsNetConfig_GetBroadcast_res kl_VfsNetConfig_GetBroadcast_res
#define VfsNetConfig_SetDstAddr_req kl_VfsNetConfig_SetDstAddr_req
#define VfsNetConfig_SetDstAddr_res kl_VfsNetConfig_SetDstAddr_res
#define VfsNetConfig_GetDstAddr_req kl_VfsNetConfig_GetDstAddr_req
#define VfsNetConfig_GetDstAddr_res kl_VfsNetConfig_GetDstAddr_res
#define VfsNetConfig_AddIpAddr_req kl_VfsNetConfig_AddIpAddr_req
#define VfsNetConfig_AddIpAddr_res kl_VfsNetConfig_AddIpAddr_res
#define VfsNetConfig_RemoveIpAddr_req kl_VfsNetConfig_RemoveIpAddr_req
#define VfsNetConfig_RemoveIpAddr_res kl_VfsNetConfig_RemoveIpAddr_res
#define VfsNetConfig_AddRoute_req kl_VfsNetConfig_AddRoute_req
#define VfsNetConfig_AddRoute_res kl_VfsNetConfig_AddRoute_res
#define VfsNetConfig_DelRoute_req kl_VfsNetConfig_DelRoute_req
#define VfsNetConfig_DelRoute_res kl_VfsNetConfig_DelRoute_res
#define VfsNetConfig_SetVlan_req kl_VfsNetConfig_SetVlan_req
#define VfsNetConfig_SetVlan_res kl_VfsNetConfig_SetVlan_res
#define VfsNetConfig_GetVlan_req kl_VfsNetConfig_GetVlan_req
#define VfsNetConfig_GetVlan_res kl_VfsNetConfig_GetVlan_res
#define VfsNetConfig_GetActiveIfList_req kl_VfsNetConfig_GetActiveIfList_req
#define VfsNetConfig_GetActiveIfList_res kl_VfsNetConfig_GetActiveIfList_res
#define VfsNetConfig_GetNumOfBytesAvail_req kl_VfsNetConfig_GetNumOfBytesAvail_req
#define VfsNetConfig_GetNumOfBytesAvail_res kl_VfsNetConfig_GetNumOfBytesAvail_res
#define VfsNetConfig_GetIfAFlags_req kl_VfsNetConfig_GetIfAFlags_req
#define VfsNetConfig_GetIfAFlags_res kl_VfsNetConfig_GetIfAFlags_res
#define VfsNetConfig_PppoeSetParams_req kl_VfsNetConfig_PppoeSetParams_req
#define VfsNetConfig_PppoeSetParams_res kl_VfsNetConfig_PppoeSetParams_res
#define VfsNetConfig_PppoeGetParams_req kl_VfsNetConfig_PppoeGetParams_req
#define VfsNetConfig_PppoeGetParams_res kl_VfsNetConfig_PppoeGetParams_res
#define VfsNetConfig_PppoeGetSession_req kl_VfsNetConfig_PppoeGetSession_req
#define VfsNetConfig_PppoeGetSession_res kl_VfsNetConfig_PppoeGetSession_res
#define VfsNetConfig_SpppGetStatus_req kl_VfsNetConfig_SpppGetStatus_req
#define VfsNetConfig_SpppGetStatus_res kl_VfsNetConfig_SpppGetStatus_res
#define VfsNetConfig_SpppSetAuthCfg_req kl_VfsNetConfig_SpppSetAuthCfg_req
#define VfsNetConfig_SpppSetAuthCfg_res kl_VfsNetConfig_SpppSetAuthCfg_res
#define VfsNetConfig_SpppGetAuthCfg_req kl_VfsNetConfig_SpppGetAuthCfg_req
#define VfsNetConfig_SpppGetAuthCfg_res kl_VfsNetConfig_SpppGetAuthCfg_res
#define VfsNetConfig_SpppSetAuthFailure_req kl_VfsNetConfig_SpppSetAuthFailure_req
#define VfsNetConfig_SpppSetAuthFailure_res kl_VfsNetConfig_SpppSetAuthFailure_res
#define VfsNetConfig_SpppGetAuthFailures_req kl_VfsNetConfig_SpppGetAuthFailures_req
#define VfsNetConfig_SpppGetAuthFailures_res kl_VfsNetConfig_SpppGetAuthFailures_res
#define VfsNetConfig_Sysctl_req kl_VfsNetConfig_Sysctl_req
#define VfsNetConfig_Sysctl_res kl_VfsNetConfig_Sysctl_res
#define VfsNetConfig_RtDump_req kl_VfsNetConfig_RtDump_req
#define VfsNetConfig_RtDump_res kl_VfsNetConfig_RtDump_res
#define VfsNetConfig_RtIflist_req kl_VfsNetConfig_RtIflist_req
#define VfsNetConfig_RtIflist_res kl_VfsNetConfig_RtIflist_res
#define VfsNetConfig_IpctlForwarding_req kl_VfsNetConfig_IpctlForwarding_req
#define VfsNetConfig_IpctlForwarding_res kl_VfsNetConfig_IpctlForwarding_res
#define VfsNetConfig_GetMedia_req kl_VfsNetConfig_GetMedia_req
#define VfsNetConfig_GetMedia_res kl_VfsNetConfig_GetMedia_res
#define VfsNetConfig_SetMedia_req kl_VfsNetConfig_SetMedia_req
#define VfsNetConfig_SetMedia_res kl_VfsNetConfig_SetMedia_res
#define VfsNetConfig_DeleteIfAddr_req kl_VfsNetConfig_DeleteIfAddr_req
#define VfsNetConfig_DeleteIfAddr_res kl_VfsNetConfig_DeleteIfAddr_res
#define VfsNetConfig_AddIfAddr_req kl_VfsNetConfig_AddIfAddr_req
#define VfsNetConfig_AddIfAddr_res kl_VfsNetConfig_AddIfAddr_res
#define VfsNetConfig_BridgeGet_req kl_VfsNetConfig_BridgeGet_req
#define VfsNetConfig_BridgeGet_res kl_VfsNetConfig_BridgeGet_res
#define VfsNetConfig_BridgeSet_req kl_VfsNetConfig_BridgeSet_req
#define VfsNetConfig_BridgeSet_res kl_VfsNetConfig_BridgeSet_res
#define VfsNetConfig_DnetIo_req kl_VfsNetConfig_DnetIo_req
#define VfsNetConfig_DnetIo_res kl_VfsNetConfig_DnetIo_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsNetConfig__INTERFACE__ */

#ifndef __kl__Vfs__COMPONENT_INTERFACE__
#define __kl__Vfs__COMPONENT_INTERFACE__
enum {
    kl_Vfs_server_iid,
    kl_Vfs_netcfg_iid,
    kl_Vfs_bpfcfg_iid,
    kl_Vfs_npfcfg_iid,
    kl_Vfs_xattrcfg_iid,
    kl_Vfs_aclcfg_iid,
    kl_Vfs_iidMax,
} ;
enum {
    kl_Vfs_iidOffset = 0,
} ;
enum {
    kl_Vfs_securityIidMax,
} ;
enum {
    kl_Vfs_component_req_arena_size = 657488,
    kl_Vfs_component_res_arena_size = 657488,
    kl_Vfs_component_arena_size = 657488,
    kl_Vfs_component_req_handles = 0,
    kl_Vfs_component_res_handles = 0,
    kl_Vfs_component_err_handles = 0,
} ;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Vfs_server_iid kl_Vfs_server_iid
#define Vfs_netcfg_iid kl_Vfs_netcfg_iid
#define Vfs_bpfcfg_iid kl_Vfs_bpfcfg_iid
#define Vfs_npfcfg_iid kl_Vfs_npfcfg_iid
#define Vfs_xattrcfg_iid kl_Vfs_xattrcfg_iid
#define Vfs_aclcfg_iid kl_Vfs_aclcfg_iid
#define Vfs_iidMax kl_Vfs_iidMax
#define Vfs_iidOffset kl_Vfs_iidOffset
#define Vfs_securityIidMax kl_Vfs_securityIidMax
#define Vfs_component_req_arena_size kl_Vfs_component_req_arena_size
#define Vfs_component_res_arena_size kl_Vfs_component_res_arena_size
#define Vfs_component_arena_size kl_Vfs_component_arena_size
#define Vfs_component_req_handles kl_Vfs_component_req_handles
#define Vfs_component_res_handles kl_Vfs_component_res_handles
#define Vfs_component_err_handles kl_Vfs_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Vfs__COMPONENT_INTERFACE__ */

#ifndef __vfs__NetVfs__COMPONENT_INTERFACE__
#define __vfs__NetVfs__COMPONENT_INTERFACE__
enum {
    vfs_NetVfs_vfs_server_iid,
    vfs_NetVfs_vfs_netcfg_iid,
    vfs_NetVfs_vfs_bpfcfg_iid,
    vfs_NetVfs_vfs_npfcfg_iid,
    vfs_NetVfs_vfs_xattrcfg_iid,
    vfs_NetVfs_vfs_aclcfg_iid,
    vfs_NetVfs_iidMax,
} ;
enum {
    vfs_NetVfs_iidOffset = 0,
    vfs_NetVfs_vfs_iidOffset = 0,
} ;
enum {
    vfs_NetVfs_securityIidMax,
} ;
enum {
    vfs_NetVfs_component_req_arena_size = 657488,
    vfs_NetVfs_component_res_arena_size = 657488,
    vfs_NetVfs_component_arena_size = 657488,
    vfs_NetVfs_component_req_handles = 0,
    vfs_NetVfs_component_res_handles = 0,
    vfs_NetVfs_component_err_handles = 0,
} ;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NetVfs_vfs_server_iid vfs_NetVfs_vfs_server_iid
#define NetVfs_vfs_netcfg_iid vfs_NetVfs_vfs_netcfg_iid
#define NetVfs_vfs_bpfcfg_iid vfs_NetVfs_vfs_bpfcfg_iid
#define NetVfs_vfs_npfcfg_iid vfs_NetVfs_vfs_npfcfg_iid
#define NetVfs_vfs_xattrcfg_iid vfs_NetVfs_vfs_xattrcfg_iid
#define NetVfs_vfs_aclcfg_iid vfs_NetVfs_vfs_aclcfg_iid
#define NetVfs_iidMax vfs_NetVfs_iidMax
#define NetVfs_iidOffset vfs_NetVfs_iidOffset
#define NetVfs_vfs_iidOffset vfs_NetVfs_vfs_iidOffset
#define NetVfs_securityIidMax vfs_NetVfs_securityIidMax
#define NetVfs_component_req_arena_size vfs_NetVfs_component_req_arena_size
#define NetVfs_component_res_arena_size vfs_NetVfs_component_res_arena_size
#define NetVfs_component_arena_size vfs_NetVfs_component_arena_size
#define NetVfs_component_req_handles vfs_NetVfs_component_req_handles
#define NetVfs_component_res_handles vfs_NetVfs_component_res_handles
#define NetVfs_component_err_handles vfs_NetVfs_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __vfs__NetVfs__COMPONENT_INTERFACE__ */

#ifndef __vfs__NetVfs__ENTITY_INTERFACE__
#define __vfs__NetVfs__ENTITY_INTERFACE__
enum {
    vfs_NetVfs_entity_req_arena_size =
    vfs_NetVfs_component_req_arena_size,
    vfs_NetVfs_entity_res_arena_size =
    vfs_NetVfs_component_res_arena_size,
    vfs_NetVfs_entity_arena_size =
    vfs_NetVfs_component_arena_size,
    vfs_NetVfs_entity_req_handles =
    vfs_NetVfs_component_req_handles,
    vfs_NetVfs_entity_res_handles =
    vfs_NetVfs_component_res_handles,
    vfs_NetVfs_entity_err_handles =
    vfs_NetVfs_component_err_handles,
} ;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NetVfs_entity_req_arena_size vfs_NetVfs_entity_req_arena_size
#define NetVfs_entity_res_arena_size vfs_NetVfs_entity_res_arena_size
#define NetVfs_entity_arena_size vfs_NetVfs_entity_arena_size
#define NetVfs_entity_req_handles vfs_NetVfs_entity_req_handles
#define NetVfs_entity_res_handles vfs_NetVfs_entity_res_handles
#define NetVfs_entity_err_handles vfs_NetVfs_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __vfs__NetVfs__ENTITY_INTERFACE__ */

#ifndef __kl__VfsFilesystem__VTABLE__
#define __kl__VfsFilesystem__VTABLE__
typedef struct kl_VfsFilesystem {
            const
            struct kl_VfsFilesystem_ops *ops;
        } kl_VfsFilesystem;
typedef nk_err_t
kl_VfsFilesystem_ClientConnected_fn(struct kl_VfsFilesystem *,
                                    const
                                    struct kl_VfsFilesystem_ClientConnected_req *,
                                    const
                                    struct nk_arena *,
                                    struct kl_VfsFilesystem_ClientConnected_res *,
                                    struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_ClientDisconnected_fn(struct kl_VfsFilesystem *,
                                       const
                                       struct kl_VfsFilesystem_ClientDisconnected_req *,
                                       const
                                       struct nk_arena *,
                                       struct kl_VfsFilesystem_ClientDisconnected_res *,
                                       struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_DisconnectAllClients_fn(struct kl_VfsFilesystem *,
                                         const
                                         struct kl_VfsFilesystem_DisconnectAllClients_req *,
                                         const
                                         struct nk_arena *,
                                         struct kl_VfsFilesystem_DisconnectAllClients_res *,
                                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Mount_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Mount_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Mount_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Unmount_fn(struct kl_VfsFilesystem *,
                            const
                            struct kl_VfsFilesystem_Unmount_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsFilesystem_Unmount_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Unlink_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Unlink_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Unlink_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Unlinkat_fn(struct kl_VfsFilesystem *,
                             const
                             struct kl_VfsFilesystem_Unlinkat_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsFilesystem_Unlinkat_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Link_fn(struct kl_VfsFilesystem *,
                         const
                         struct kl_VfsFilesystem_Link_req *,
                         const struct nk_arena *,
                         struct kl_VfsFilesystem_Link_res *,
                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Linkat_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Linkat_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Linkat_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Symlink_fn(struct kl_VfsFilesystem *,
                            const
                            struct kl_VfsFilesystem_Symlink_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsFilesystem_Symlink_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Symlinkat_fn(struct kl_VfsFilesystem *,
                              const
                              struct kl_VfsFilesystem_Symlinkat_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsFilesystem_Symlinkat_res *,
                              struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Ftruncate_fn(struct kl_VfsFilesystem *,
                              const
                              struct kl_VfsFilesystem_Ftruncate_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsFilesystem_Ftruncate_res *,
                              struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Rename_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Rename_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Rename_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Renameat_fn(struct kl_VfsFilesystem *,
                             const
                             struct kl_VfsFilesystem_Renameat_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsFilesystem_Renameat_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Rmdir_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Rmdir_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Rmdir_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Mkdir_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Mkdir_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Mkdir_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Mkdirat_fn(struct kl_VfsFilesystem *,
                            const
                            struct kl_VfsFilesystem_Mkdirat_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsFilesystem_Mkdirat_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Chdir_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Chdir_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Chdir_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Chmod_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Chmod_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Chmod_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Fchmod_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Fchmod_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Fchmod_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Fchmodat_fn(struct kl_VfsFilesystem *,
                             const
                             struct kl_VfsFilesystem_Fchmodat_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsFilesystem_Fchmodat_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Chroot_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Chroot_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Chroot_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Open_fn(struct kl_VfsFilesystem *,
                         const
                         struct kl_VfsFilesystem_Open_req *,
                         const struct nk_arena *,
                         struct kl_VfsFilesystem_Open_res *,
                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Openat_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Openat_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Openat_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Read_fn(struct kl_VfsFilesystem *,
                         const
                         struct kl_VfsFilesystem_Read_req *,
                         const struct nk_arena *,
                         struct kl_VfsFilesystem_Read_res *,
                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Readv_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Readv_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Readv_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Pread_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Pread_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Pread_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Write_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Write_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Write_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Sendfile_fn(struct kl_VfsFilesystem *,
                             const
                             struct kl_VfsFilesystem_Sendfile_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsFilesystem_Sendfile_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Writev_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Writev_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Writev_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Pwrite_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Pwrite_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Pwrite_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Lseek_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Lseek_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Lseek_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Stat_fn(struct kl_VfsFilesystem *,
                         const
                         struct kl_VfsFilesystem_Stat_req *,
                         const struct nk_arena *,
                         struct kl_VfsFilesystem_Stat_res *,
                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Lstat_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Lstat_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Lstat_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Fstat_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Fstat_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Fstat_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Fstatat_fn(struct kl_VfsFilesystem *,
                            const
                            struct kl_VfsFilesystem_Fstatat_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsFilesystem_Fstatat_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Fsync_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Fsync_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Fsync_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Fdatasync_fn(struct kl_VfsFilesystem *,
                              const
                              struct kl_VfsFilesystem_Fdatasync_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsFilesystem_Fdatasync_res *,
                              struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Close_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Close_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Close_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_StatVfs_fn(struct kl_VfsFilesystem *,
                            const
                            struct kl_VfsFilesystem_StatVfs_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsFilesystem_StatVfs_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_FStatVfs_fn(struct kl_VfsFilesystem *,
                             const
                             struct kl_VfsFilesystem_FStatVfs_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsFilesystem_FStatVfs_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Pipe_fn(struct kl_VfsFilesystem *,
                         const
                         struct kl_VfsFilesystem_Pipe_req *,
                         const struct nk_arena *,
                         struct kl_VfsFilesystem_Pipe_res *,
                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getdents_fn(struct kl_VfsFilesystem *,
                             const
                             struct kl_VfsFilesystem_Getdents_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsFilesystem_Getdents_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Socket_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Socket_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Socket_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Socketpair_fn(struct kl_VfsFilesystem *,
                               const
                               struct kl_VfsFilesystem_Socketpair_req *,
                               const
                               struct nk_arena *,
                               struct kl_VfsFilesystem_Socketpair_res *,
                               struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Bind_fn(struct kl_VfsFilesystem *,
                         const
                         struct kl_VfsFilesystem_Bind_req *,
                         const struct nk_arena *,
                         struct kl_VfsFilesystem_Bind_res *,
                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Listen_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Listen_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Listen_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Connect_fn(struct kl_VfsFilesystem *,
                            const
                            struct kl_VfsFilesystem_Connect_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsFilesystem_Connect_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Accept_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Accept_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Accept_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Poll_fn(struct kl_VfsFilesystem *,
                         const
                         struct kl_VfsFilesystem_Poll_req *,
                         const struct nk_arena *,
                         struct kl_VfsFilesystem_Poll_res *,
                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Shutdown_fn(struct kl_VfsFilesystem *,
                             const
                             struct kl_VfsFilesystem_Shutdown_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsFilesystem_Shutdown_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getnameinfo_fn(struct kl_VfsFilesystem *,
                                const
                                struct kl_VfsFilesystem_Getnameinfo_req *,
                                const
                                struct nk_arena *,
                                struct kl_VfsFilesystem_Getnameinfo_res *,
                                struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getaddrinfo_fn(struct kl_VfsFilesystem *,
                                const
                                struct kl_VfsFilesystem_Getaddrinfo_req *,
                                const
                                struct nk_arena *,
                                struct kl_VfsFilesystem_Getaddrinfo_res *,
                                struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getifaddrs_fn(struct kl_VfsFilesystem *,
                               const
                               struct kl_VfsFilesystem_Getifaddrs_req *,
                               const
                               struct nk_arena *,
                               struct kl_VfsFilesystem_Getifaddrs_res *,
                               struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getpeername_fn(struct kl_VfsFilesystem *,
                                const
                                struct kl_VfsFilesystem_Getpeername_req *,
                                const
                                struct nk_arena *,
                                struct kl_VfsFilesystem_Getpeername_res *,
                                struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getsockname_fn(struct kl_VfsFilesystem *,
                                const
                                struct kl_VfsFilesystem_Getsockname_req *,
                                const
                                struct nk_arena *,
                                struct kl_VfsFilesystem_Getsockname_res *,
                                struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Gethostbyname_fn(struct kl_VfsFilesystem *,
                                  const
                                  struct kl_VfsFilesystem_Gethostbyname_req *,
                                  const
                                  struct nk_arena *,
                                  struct kl_VfsFilesystem_Gethostbyname_res *,
                                  struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getnetbyname_fn(struct kl_VfsFilesystem *,
                                 const
                                 struct kl_VfsFilesystem_Getnetbyname_req *,
                                 const
                                 struct nk_arena *,
                                 struct kl_VfsFilesystem_Getnetbyname_res *,
                                 struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getprotobyname_fn(struct kl_VfsFilesystem *,
                                   const
                                   struct kl_VfsFilesystem_Getprotobyname_req *,
                                   const
                                   struct nk_arena *,
                                   struct kl_VfsFilesystem_Getprotobyname_res *,
                                   struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getprotobynumber_fn(struct kl_VfsFilesystem *,
                                     const
                                     struct kl_VfsFilesystem_Getprotobynumber_req *,
                                     const
                                     struct nk_arena *,
                                     struct kl_VfsFilesystem_Getprotobynumber_res *,
                                     struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Getsockopt_fn(struct kl_VfsFilesystem *,
                               const
                               struct kl_VfsFilesystem_Getsockopt_req *,
                               const
                               struct nk_arena *,
                               struct kl_VfsFilesystem_Getsockopt_res *,
                               struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Setsockopt_fn(struct kl_VfsFilesystem *,
                               const
                               struct kl_VfsFilesystem_Setsockopt_req *,
                               const
                               struct nk_arena *,
                               struct kl_VfsFilesystem_Setsockopt_res *,
                               struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Recv_fn(struct kl_VfsFilesystem *,
                         const
                         struct kl_VfsFilesystem_Recv_req *,
                         const struct nk_arena *,
                         struct kl_VfsFilesystem_Recv_res *,
                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Recvfrom_fn(struct kl_VfsFilesystem *,
                             const
                             struct kl_VfsFilesystem_Recvfrom_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsFilesystem_Recvfrom_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Recvmsg_fn(struct kl_VfsFilesystem *,
                            const
                            struct kl_VfsFilesystem_Recvmsg_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsFilesystem_Recvmsg_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Send_fn(struct kl_VfsFilesystem *,
                         const
                         struct kl_VfsFilesystem_Send_req *,
                         const struct nk_arena *,
                         struct kl_VfsFilesystem_Send_res *,
                         struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Sendto_fn(struct kl_VfsFilesystem *,
                           const
                           struct kl_VfsFilesystem_Sendto_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsFilesystem_Sendto_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Sendmsg_fn(struct kl_VfsFilesystem *,
                            const
                            struct kl_VfsFilesystem_Sendmsg_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsFilesystem_Sendmsg_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Synchronize_fn(struct kl_VfsFilesystem *,
                                const
                                struct kl_VfsFilesystem_Synchronize_req *,
                                const
                                struct nk_arena *,
                                struct kl_VfsFilesystem_Synchronize_res *,
                                struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Fcntl_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Fcntl_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Fcntl_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Ioctl_fn(struct kl_VfsFilesystem *,
                          const
                          struct kl_VfsFilesystem_Ioctl_req *,
                          const struct nk_arena *,
                          struct kl_VfsFilesystem_Ioctl_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Futimens_fn(struct kl_VfsFilesystem *,
                             const
                             struct kl_VfsFilesystem_Futimens_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsFilesystem_Futimens_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsFilesystem_Utimensat_fn(struct kl_VfsFilesystem *,
                              const
                              struct kl_VfsFilesystem_Utimensat_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsFilesystem_Utimensat_res *,
                              struct nk_arena *);
typedef struct kl_VfsFilesystem_ops {
            kl_VfsFilesystem_ClientConnected_fn *ClientConnected;
            kl_VfsFilesystem_ClientDisconnected_fn *ClientDisconnected;
            kl_VfsFilesystem_DisconnectAllClients_fn *DisconnectAllClients;
            kl_VfsFilesystem_Mount_fn *Mount;
            kl_VfsFilesystem_Unmount_fn *Unmount;
            kl_VfsFilesystem_Unlink_fn *Unlink;
            kl_VfsFilesystem_Unlinkat_fn *Unlinkat;
            kl_VfsFilesystem_Link_fn *Link;
            kl_VfsFilesystem_Linkat_fn *Linkat;
            kl_VfsFilesystem_Symlink_fn *Symlink;
            kl_VfsFilesystem_Symlinkat_fn *Symlinkat;
            kl_VfsFilesystem_Ftruncate_fn *Ftruncate;
            kl_VfsFilesystem_Rename_fn *Rename;
            kl_VfsFilesystem_Renameat_fn *Renameat;
            kl_VfsFilesystem_Rmdir_fn *Rmdir;
            kl_VfsFilesystem_Mkdir_fn *Mkdir;
            kl_VfsFilesystem_Mkdirat_fn *Mkdirat;
            kl_VfsFilesystem_Chdir_fn *Chdir;
            kl_VfsFilesystem_Chmod_fn *Chmod;
            kl_VfsFilesystem_Fchmod_fn *Fchmod;
            kl_VfsFilesystem_Fchmodat_fn *Fchmodat;
            kl_VfsFilesystem_Chroot_fn *Chroot;
            kl_VfsFilesystem_Open_fn *Open;
            kl_VfsFilesystem_Openat_fn *Openat;
            kl_VfsFilesystem_Read_fn *Read;
            kl_VfsFilesystem_Readv_fn *Readv;
            kl_VfsFilesystem_Pread_fn *Pread;
            kl_VfsFilesystem_Write_fn *Write;
            kl_VfsFilesystem_Sendfile_fn *Sendfile;
            kl_VfsFilesystem_Writev_fn *Writev;
            kl_VfsFilesystem_Pwrite_fn *Pwrite;
            kl_VfsFilesystem_Lseek_fn *Lseek;
            kl_VfsFilesystem_Stat_fn *Stat;
            kl_VfsFilesystem_Lstat_fn *Lstat;
            kl_VfsFilesystem_Fstat_fn *Fstat;
            kl_VfsFilesystem_Fstatat_fn *Fstatat;
            kl_VfsFilesystem_Fsync_fn *Fsync;
            kl_VfsFilesystem_Fdatasync_fn *Fdatasync;
            kl_VfsFilesystem_Close_fn *Close;
            kl_VfsFilesystem_StatVfs_fn *StatVfs;
            kl_VfsFilesystem_FStatVfs_fn *FStatVfs;
            kl_VfsFilesystem_Pipe_fn *Pipe;
            kl_VfsFilesystem_Getdents_fn *Getdents;
            kl_VfsFilesystem_Socket_fn *Socket;
            kl_VfsFilesystem_Socketpair_fn *Socketpair;
            kl_VfsFilesystem_Bind_fn *Bind;
            kl_VfsFilesystem_Listen_fn *Listen;
            kl_VfsFilesystem_Connect_fn *Connect;
            kl_VfsFilesystem_Accept_fn *Accept;
            kl_VfsFilesystem_Poll_fn *Poll;
            kl_VfsFilesystem_Shutdown_fn *Shutdown;
            kl_VfsFilesystem_Getnameinfo_fn *Getnameinfo;
            kl_VfsFilesystem_Getaddrinfo_fn *Getaddrinfo;
            kl_VfsFilesystem_Getifaddrs_fn *Getifaddrs;
            kl_VfsFilesystem_Getpeername_fn *Getpeername;
            kl_VfsFilesystem_Getsockname_fn *Getsockname;
            kl_VfsFilesystem_Gethostbyname_fn *Gethostbyname;
            kl_VfsFilesystem_Getnetbyname_fn *Getnetbyname;
            kl_VfsFilesystem_Getprotobyname_fn *Getprotobyname;
            kl_VfsFilesystem_Getprotobynumber_fn *Getprotobynumber;
            kl_VfsFilesystem_Getsockopt_fn *Getsockopt;
            kl_VfsFilesystem_Setsockopt_fn *Setsockopt;
            kl_VfsFilesystem_Recv_fn *Recv;
            kl_VfsFilesystem_Recvfrom_fn *Recvfrom;
            kl_VfsFilesystem_Recvmsg_fn *Recvmsg;
            kl_VfsFilesystem_Send_fn *Send;
            kl_VfsFilesystem_Sendto_fn *Sendto;
            kl_VfsFilesystem_Sendmsg_fn *Sendmsg;
            kl_VfsFilesystem_Synchronize_fn *Synchronize;
            kl_VfsFilesystem_Fcntl_fn *Fcntl;
            kl_VfsFilesystem_Ioctl_fn *Ioctl;
            kl_VfsFilesystem_Futimens_fn *Futimens;
            kl_VfsFilesystem_Utimensat_fn *Utimensat;
        } kl_VfsFilesystem_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsFilesystem_ClientConnected_fn kl_VfsFilesystem_ClientConnected_fn
#define VfsFilesystem_ClientDisconnected_fn kl_VfsFilesystem_ClientDisconnected_fn
#define VfsFilesystem_DisconnectAllClients_fn kl_VfsFilesystem_DisconnectAllClients_fn
#define VfsFilesystem_Mount_fn kl_VfsFilesystem_Mount_fn
#define VfsFilesystem_Unmount_fn kl_VfsFilesystem_Unmount_fn
#define VfsFilesystem_Unlink_fn kl_VfsFilesystem_Unlink_fn
#define VfsFilesystem_Unlinkat_fn kl_VfsFilesystem_Unlinkat_fn
#define VfsFilesystem_Link_fn kl_VfsFilesystem_Link_fn
#define VfsFilesystem_Linkat_fn kl_VfsFilesystem_Linkat_fn
#define VfsFilesystem_Symlink_fn kl_VfsFilesystem_Symlink_fn
#define VfsFilesystem_Symlinkat_fn kl_VfsFilesystem_Symlinkat_fn
#define VfsFilesystem_Ftruncate_fn kl_VfsFilesystem_Ftruncate_fn
#define VfsFilesystem_Rename_fn kl_VfsFilesystem_Rename_fn
#define VfsFilesystem_Renameat_fn kl_VfsFilesystem_Renameat_fn
#define VfsFilesystem_Rmdir_fn kl_VfsFilesystem_Rmdir_fn
#define VfsFilesystem_Mkdir_fn kl_VfsFilesystem_Mkdir_fn
#define VfsFilesystem_Mkdirat_fn kl_VfsFilesystem_Mkdirat_fn
#define VfsFilesystem_Chdir_fn kl_VfsFilesystem_Chdir_fn
#define VfsFilesystem_Chmod_fn kl_VfsFilesystem_Chmod_fn
#define VfsFilesystem_Fchmod_fn kl_VfsFilesystem_Fchmod_fn
#define VfsFilesystem_Fchmodat_fn kl_VfsFilesystem_Fchmodat_fn
#define VfsFilesystem_Chroot_fn kl_VfsFilesystem_Chroot_fn
#define VfsFilesystem_Open_fn kl_VfsFilesystem_Open_fn
#define VfsFilesystem_Openat_fn kl_VfsFilesystem_Openat_fn
#define VfsFilesystem_Read_fn kl_VfsFilesystem_Read_fn
#define VfsFilesystem_Readv_fn kl_VfsFilesystem_Readv_fn
#define VfsFilesystem_Pread_fn kl_VfsFilesystem_Pread_fn
#define VfsFilesystem_Write_fn kl_VfsFilesystem_Write_fn
#define VfsFilesystem_Sendfile_fn kl_VfsFilesystem_Sendfile_fn
#define VfsFilesystem_Writev_fn kl_VfsFilesystem_Writev_fn
#define VfsFilesystem_Pwrite_fn kl_VfsFilesystem_Pwrite_fn
#define VfsFilesystem_Lseek_fn kl_VfsFilesystem_Lseek_fn
#define VfsFilesystem_Stat_fn kl_VfsFilesystem_Stat_fn
#define VfsFilesystem_Lstat_fn kl_VfsFilesystem_Lstat_fn
#define VfsFilesystem_Fstat_fn kl_VfsFilesystem_Fstat_fn
#define VfsFilesystem_Fstatat_fn kl_VfsFilesystem_Fstatat_fn
#define VfsFilesystem_Fsync_fn kl_VfsFilesystem_Fsync_fn
#define VfsFilesystem_Fdatasync_fn kl_VfsFilesystem_Fdatasync_fn
#define VfsFilesystem_Close_fn kl_VfsFilesystem_Close_fn
#define VfsFilesystem_StatVfs_fn kl_VfsFilesystem_StatVfs_fn
#define VfsFilesystem_FStatVfs_fn kl_VfsFilesystem_FStatVfs_fn
#define VfsFilesystem_Pipe_fn kl_VfsFilesystem_Pipe_fn
#define VfsFilesystem_Getdents_fn kl_VfsFilesystem_Getdents_fn
#define VfsFilesystem_Socket_fn kl_VfsFilesystem_Socket_fn
#define VfsFilesystem_Socketpair_fn kl_VfsFilesystem_Socketpair_fn
#define VfsFilesystem_Bind_fn kl_VfsFilesystem_Bind_fn
#define VfsFilesystem_Listen_fn kl_VfsFilesystem_Listen_fn
#define VfsFilesystem_Connect_fn kl_VfsFilesystem_Connect_fn
#define VfsFilesystem_Accept_fn kl_VfsFilesystem_Accept_fn
#define VfsFilesystem_Poll_fn kl_VfsFilesystem_Poll_fn
#define VfsFilesystem_Shutdown_fn kl_VfsFilesystem_Shutdown_fn
#define VfsFilesystem_Getnameinfo_fn kl_VfsFilesystem_Getnameinfo_fn
#define VfsFilesystem_Getaddrinfo_fn kl_VfsFilesystem_Getaddrinfo_fn
#define VfsFilesystem_Getifaddrs_fn kl_VfsFilesystem_Getifaddrs_fn
#define VfsFilesystem_Getpeername_fn kl_VfsFilesystem_Getpeername_fn
#define VfsFilesystem_Getsockname_fn kl_VfsFilesystem_Getsockname_fn
#define VfsFilesystem_Gethostbyname_fn kl_VfsFilesystem_Gethostbyname_fn
#define VfsFilesystem_Getnetbyname_fn kl_VfsFilesystem_Getnetbyname_fn
#define VfsFilesystem_Getprotobyname_fn kl_VfsFilesystem_Getprotobyname_fn
#define VfsFilesystem_Getprotobynumber_fn kl_VfsFilesystem_Getprotobynumber_fn
#define VfsFilesystem_Getsockopt_fn kl_VfsFilesystem_Getsockopt_fn
#define VfsFilesystem_Setsockopt_fn kl_VfsFilesystem_Setsockopt_fn
#define VfsFilesystem_Recv_fn kl_VfsFilesystem_Recv_fn
#define VfsFilesystem_Recvfrom_fn kl_VfsFilesystem_Recvfrom_fn
#define VfsFilesystem_Recvmsg_fn kl_VfsFilesystem_Recvmsg_fn
#define VfsFilesystem_Send_fn kl_VfsFilesystem_Send_fn
#define VfsFilesystem_Sendto_fn kl_VfsFilesystem_Sendto_fn
#define VfsFilesystem_Sendmsg_fn kl_VfsFilesystem_Sendmsg_fn
#define VfsFilesystem_Synchronize_fn kl_VfsFilesystem_Synchronize_fn
#define VfsFilesystem_Fcntl_fn kl_VfsFilesystem_Fcntl_fn
#define VfsFilesystem_Ioctl_fn kl_VfsFilesystem_Ioctl_fn
#define VfsFilesystem_Futimens_fn kl_VfsFilesystem_Futimens_fn
#define VfsFilesystem_Utimensat_fn kl_VfsFilesystem_Utimensat_fn
#define VfsFilesystem_ops kl_VfsFilesystem_ops
#define VfsFilesystem kl_VfsFilesystem
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsFilesystem__VTABLE__ */

#ifndef __kl__VfsExtAttr__VTABLE__
#define __kl__VfsExtAttr__VTABLE__
typedef struct kl_VfsExtAttr {
            const struct kl_VfsExtAttr_ops *ops;
        } kl_VfsExtAttr;
typedef nk_err_t
kl_VfsExtAttr_Setxattr_fn(struct kl_VfsExtAttr *,
                          const
                          struct kl_VfsExtAttr_Setxattr_req *,
                          const struct nk_arena *,
                          struct kl_VfsExtAttr_Setxattr_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Lsetxattr_fn(struct kl_VfsExtAttr *,
                           const
                           struct kl_VfsExtAttr_Lsetxattr_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsExtAttr_Lsetxattr_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Fsetxattr_fn(struct kl_VfsExtAttr *,
                           const
                           struct kl_VfsExtAttr_Fsetxattr_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsExtAttr_Fsetxattr_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Getxattr_fn(struct kl_VfsExtAttr *,
                          const
                          struct kl_VfsExtAttr_Getxattr_req *,
                          const struct nk_arena *,
                          struct kl_VfsExtAttr_Getxattr_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Lgetxattr_fn(struct kl_VfsExtAttr *,
                           const
                           struct kl_VfsExtAttr_Lgetxattr_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsExtAttr_Lgetxattr_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Fgetxattr_fn(struct kl_VfsExtAttr *,
                           const
                           struct kl_VfsExtAttr_Fgetxattr_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsExtAttr_Fgetxattr_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Listxattr_fn(struct kl_VfsExtAttr *,
                           const
                           struct kl_VfsExtAttr_Listxattr_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsExtAttr_Listxattr_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Llistxattr_fn(struct kl_VfsExtAttr *,
                            const
                            struct kl_VfsExtAttr_Llistxattr_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsExtAttr_Llistxattr_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Flistxattr_fn(struct kl_VfsExtAttr *,
                            const
                            struct kl_VfsExtAttr_Flistxattr_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsExtAttr_Flistxattr_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Removexattr_fn(struct kl_VfsExtAttr *,
                             const
                             struct kl_VfsExtAttr_Removexattr_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsExtAttr_Removexattr_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Lremovexattr_fn(struct kl_VfsExtAttr *,
                              const
                              struct kl_VfsExtAttr_Lremovexattr_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsExtAttr_Lremovexattr_res *,
                              struct nk_arena *);
typedef nk_err_t
kl_VfsExtAttr_Fremovexattr_fn(struct kl_VfsExtAttr *,
                              const
                              struct kl_VfsExtAttr_Fremovexattr_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsExtAttr_Fremovexattr_res *,
                              struct nk_arena *);
typedef struct kl_VfsExtAttr_ops {
            kl_VfsExtAttr_Setxattr_fn *Setxattr;
            kl_VfsExtAttr_Lsetxattr_fn *Lsetxattr;
            kl_VfsExtAttr_Fsetxattr_fn *Fsetxattr;
            kl_VfsExtAttr_Getxattr_fn *Getxattr;
            kl_VfsExtAttr_Lgetxattr_fn *Lgetxattr;
            kl_VfsExtAttr_Fgetxattr_fn *Fgetxattr;
            kl_VfsExtAttr_Listxattr_fn *Listxattr;
            kl_VfsExtAttr_Llistxattr_fn *Llistxattr;
            kl_VfsExtAttr_Flistxattr_fn *Flistxattr;
            kl_VfsExtAttr_Removexattr_fn *Removexattr;
            kl_VfsExtAttr_Lremovexattr_fn *Lremovexattr;
            kl_VfsExtAttr_Fremovexattr_fn *Fremovexattr;
        } kl_VfsExtAttr_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsExtAttr_Setxattr_fn kl_VfsExtAttr_Setxattr_fn
#define VfsExtAttr_Lsetxattr_fn kl_VfsExtAttr_Lsetxattr_fn
#define VfsExtAttr_Fsetxattr_fn kl_VfsExtAttr_Fsetxattr_fn
#define VfsExtAttr_Getxattr_fn kl_VfsExtAttr_Getxattr_fn
#define VfsExtAttr_Lgetxattr_fn kl_VfsExtAttr_Lgetxattr_fn
#define VfsExtAttr_Fgetxattr_fn kl_VfsExtAttr_Fgetxattr_fn
#define VfsExtAttr_Listxattr_fn kl_VfsExtAttr_Listxattr_fn
#define VfsExtAttr_Llistxattr_fn kl_VfsExtAttr_Llistxattr_fn
#define VfsExtAttr_Flistxattr_fn kl_VfsExtAttr_Flistxattr_fn
#define VfsExtAttr_Removexattr_fn kl_VfsExtAttr_Removexattr_fn
#define VfsExtAttr_Lremovexattr_fn kl_VfsExtAttr_Lremovexattr_fn
#define VfsExtAttr_Fremovexattr_fn kl_VfsExtAttr_Fremovexattr_fn
#define VfsExtAttr_ops kl_VfsExtAttr_ops
#define VfsExtAttr kl_VfsExtAttr
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsExtAttr__VTABLE__ */

#ifndef __kl__VfsBPFilter__VTABLE__
#define __kl__VfsBPFilter__VTABLE__
typedef struct kl_VfsBPFilter {
            const struct kl_VfsBPFilter_ops *ops;
        } kl_VfsBPFilter;
typedef nk_err_t
kl_VfsBPFilter_SetFilter_fn(struct kl_VfsBPFilter *,
                            const
                            struct kl_VfsBPFilter_SetFilter_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsBPFilter_SetFilter_res *,
                            struct nk_arena *);
typedef struct kl_VfsBPFilter_ops {
            kl_VfsBPFilter_SetFilter_fn *SetFilter;
        } kl_VfsBPFilter_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsBPFilter_SetFilter_fn kl_VfsBPFilter_SetFilter_fn
#define VfsBPFilter_ops kl_VfsBPFilter_ops
#define VfsBPFilter kl_VfsBPFilter
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsBPFilter__VTABLE__ */

#ifndef __kl__VfsNPFilter__VTABLE__
#define __kl__VfsNPFilter__VTABLE__
typedef struct kl_VfsNPFilter {
            const struct kl_VfsNPFilter_ops *ops;
        } kl_VfsNPFilter;
typedef nk_err_t
kl_VfsNPFilter_Load_fn(struct kl_VfsNPFilter *,
                       const
                       struct kl_VfsNPFilter_Load_req *,
                       const struct nk_arena *,
                       struct kl_VfsNPFilter_Load_res *,
                       struct nk_arena *);
typedef nk_err_t
kl_VfsNPFilter_Save_fn(struct kl_VfsNPFilter *,
                       const
                       struct kl_VfsNPFilter_Save_req *,
                       const struct nk_arena *,
                       struct kl_VfsNPFilter_Save_res *,
                       struct nk_arena *);
typedef nk_err_t
kl_VfsNPFilter_Stats_fn(struct kl_VfsNPFilter *,
                        const
                        struct kl_VfsNPFilter_Stats_req *,
                        const struct nk_arena *,
                        struct kl_VfsNPFilter_Stats_res *,
                        struct nk_arena *);
typedef nk_err_t
kl_VfsNPFilter_TableEnt_fn(struct kl_VfsNPFilter *,
                           const
                           struct kl_VfsNPFilter_TableEnt_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsNPFilter_TableEnt_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsNPFilter_Rule_fn(struct kl_VfsNPFilter *,
                       const
                       struct kl_VfsNPFilter_Rule_req *,
                       const struct nk_arena *,
                       struct kl_VfsNPFilter_Rule_res *,
                       struct nk_arena *);
typedef struct kl_VfsNPFilter_ops {
            kl_VfsNPFilter_Load_fn *Load;
            kl_VfsNPFilter_Save_fn *Save;
            kl_VfsNPFilter_Stats_fn *Stats;
            kl_VfsNPFilter_TableEnt_fn *TableEnt;
            kl_VfsNPFilter_Rule_fn *Rule;
        } kl_VfsNPFilter_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsNPFilter_Load_fn kl_VfsNPFilter_Load_fn
#define VfsNPFilter_Save_fn kl_VfsNPFilter_Save_fn
#define VfsNPFilter_Stats_fn kl_VfsNPFilter_Stats_fn
#define VfsNPFilter_TableEnt_fn kl_VfsNPFilter_TableEnt_fn
#define VfsNPFilter_Rule_fn kl_VfsNPFilter_Rule_fn
#define VfsNPFilter_ops kl_VfsNPFilter_ops
#define VfsNPFilter kl_VfsNPFilter
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsNPFilter__VTABLE__ */

#ifndef __kl__VfsNetConfig__VTABLE__
#define __kl__VfsNetConfig__VTABLE__
typedef struct kl_VfsNetConfig {
            const struct kl_VfsNetConfig_ops *ops;
        } kl_VfsNetConfig;
typedef nk_err_t
kl_VfsNetConfig_CreateIf_fn(struct kl_VfsNetConfig *,
                            const
                            struct kl_VfsNetConfig_CreateIf_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsNetConfig_CreateIf_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_DestroyIf_fn(struct kl_VfsNetConfig *,
                             const
                             struct kl_VfsNetConfig_DestroyIf_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsNetConfig_DestroyIf_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SetFlags_fn(struct kl_VfsNetConfig *,
                            const
                            struct kl_VfsNetConfig_SetFlags_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsNetConfig_SetFlags_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetFlags_fn(struct kl_VfsNetConfig *,
                            const
                            struct kl_VfsNetConfig_GetFlags_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsNetConfig_GetFlags_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SetIpAddr_fn(struct kl_VfsNetConfig *,
                             const
                             struct kl_VfsNetConfig_SetIpAddr_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsNetConfig_SetIpAddr_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetIpAddr_fn(struct kl_VfsNetConfig *,
                             const
                             struct kl_VfsNetConfig_GetIpAddr_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsNetConfig_GetIpAddr_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SetNetmask_fn(struct kl_VfsNetConfig *,
                              const
                              struct kl_VfsNetConfig_SetNetmask_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsNetConfig_SetNetmask_res *,
                              struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetNetmask_fn(struct kl_VfsNetConfig *,
                              const
                              struct kl_VfsNetConfig_GetNetmask_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsNetConfig_GetNetmask_res *,
                              struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SetBroadcast_fn(struct kl_VfsNetConfig *,
                                const
                                struct kl_VfsNetConfig_SetBroadcast_req *,
                                const
                                struct nk_arena *,
                                struct kl_VfsNetConfig_SetBroadcast_res *,
                                struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetBroadcast_fn(struct kl_VfsNetConfig *,
                                const
                                struct kl_VfsNetConfig_GetBroadcast_req *,
                                const
                                struct nk_arena *,
                                struct kl_VfsNetConfig_GetBroadcast_res *,
                                struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SetDstAddr_fn(struct kl_VfsNetConfig *,
                              const
                              struct kl_VfsNetConfig_SetDstAddr_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsNetConfig_SetDstAddr_res *,
                              struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetDstAddr_fn(struct kl_VfsNetConfig *,
                              const
                              struct kl_VfsNetConfig_GetDstAddr_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsNetConfig_GetDstAddr_res *,
                              struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_AddIpAddr_fn(struct kl_VfsNetConfig *,
                             const
                             struct kl_VfsNetConfig_AddIpAddr_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsNetConfig_AddIpAddr_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_RemoveIpAddr_fn(struct kl_VfsNetConfig *,
                                const
                                struct kl_VfsNetConfig_RemoveIpAddr_req *,
                                const
                                struct nk_arena *,
                                struct kl_VfsNetConfig_RemoveIpAddr_res *,
                                struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_AddRoute_fn(struct kl_VfsNetConfig *,
                            const
                            struct kl_VfsNetConfig_AddRoute_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsNetConfig_AddRoute_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_DelRoute_fn(struct kl_VfsNetConfig *,
                            const
                            struct kl_VfsNetConfig_DelRoute_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsNetConfig_DelRoute_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SetVlan_fn(struct kl_VfsNetConfig *,
                           const
                           struct kl_VfsNetConfig_SetVlan_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsNetConfig_SetVlan_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetVlan_fn(struct kl_VfsNetConfig *,
                           const
                           struct kl_VfsNetConfig_GetVlan_req *,
                           const
                           struct nk_arena *,
                           struct kl_VfsNetConfig_GetVlan_res *,
                           struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetActiveIfList_fn(struct kl_VfsNetConfig *,
                                   const
                                   struct kl_VfsNetConfig_GetActiveIfList_req *,
                                   const
                                   struct nk_arena *,
                                   struct kl_VfsNetConfig_GetActiveIfList_res *,
                                   struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetNumOfBytesAvail_fn(struct kl_VfsNetConfig *,
                                      const
                                      struct kl_VfsNetConfig_GetNumOfBytesAvail_req *,
                                      const
                                      struct nk_arena *,
                                      struct kl_VfsNetConfig_GetNumOfBytesAvail_res *,
                                      struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetIfAFlags_fn(struct kl_VfsNetConfig *,
                               const
                               struct kl_VfsNetConfig_GetIfAFlags_req *,
                               const
                               struct nk_arena *,
                               struct kl_VfsNetConfig_GetIfAFlags_res *,
                               struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_PppoeSetParams_fn(struct kl_VfsNetConfig *,
                                  const
                                  struct kl_VfsNetConfig_PppoeSetParams_req *,
                                  const
                                  struct nk_arena *,
                                  struct kl_VfsNetConfig_PppoeSetParams_res *,
                                  struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_PppoeGetParams_fn(struct kl_VfsNetConfig *,
                                  const
                                  struct kl_VfsNetConfig_PppoeGetParams_req *,
                                  const
                                  struct nk_arena *,
                                  struct kl_VfsNetConfig_PppoeGetParams_res *,
                                  struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_PppoeGetSession_fn(struct kl_VfsNetConfig *,
                                   const
                                   struct kl_VfsNetConfig_PppoeGetSession_req *,
                                   const
                                   struct nk_arena *,
                                   struct kl_VfsNetConfig_PppoeGetSession_res *,
                                   struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SpppGetStatus_fn(struct kl_VfsNetConfig *,
                                 const
                                 struct kl_VfsNetConfig_SpppGetStatus_req *,
                                 const
                                 struct nk_arena *,
                                 struct kl_VfsNetConfig_SpppGetStatus_res *,
                                 struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SpppSetAuthCfg_fn(struct kl_VfsNetConfig *,
                                  const
                                  struct kl_VfsNetConfig_SpppSetAuthCfg_req *,
                                  const
                                  struct nk_arena *,
                                  struct kl_VfsNetConfig_SpppSetAuthCfg_res *,
                                  struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SpppGetAuthCfg_fn(struct kl_VfsNetConfig *,
                                  const
                                  struct kl_VfsNetConfig_SpppGetAuthCfg_req *,
                                  const
                                  struct nk_arena *,
                                  struct kl_VfsNetConfig_SpppGetAuthCfg_res *,
                                  struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SpppSetAuthFailure_fn(struct kl_VfsNetConfig *,
                                      const
                                      struct kl_VfsNetConfig_SpppSetAuthFailure_req *,
                                      const
                                      struct nk_arena *,
                                      struct kl_VfsNetConfig_SpppSetAuthFailure_res *,
                                      struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SpppGetAuthFailures_fn(struct kl_VfsNetConfig *,
                                       const
                                       struct kl_VfsNetConfig_SpppGetAuthFailures_req *,
                                       const
                                       struct nk_arena *,
                                       struct kl_VfsNetConfig_SpppGetAuthFailures_res *,
                                       struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_Sysctl_fn(struct kl_VfsNetConfig *,
                          const
                          struct kl_VfsNetConfig_Sysctl_req *,
                          const struct nk_arena *,
                          struct kl_VfsNetConfig_Sysctl_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_RtDump_fn(struct kl_VfsNetConfig *,
                          const
                          struct kl_VfsNetConfig_RtDump_req *,
                          const struct nk_arena *,
                          struct kl_VfsNetConfig_RtDump_res *,
                          struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_RtIflist_fn(struct kl_VfsNetConfig *,
                            const
                            struct kl_VfsNetConfig_RtIflist_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsNetConfig_RtIflist_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_IpctlForwarding_fn(struct kl_VfsNetConfig *,
                                   const
                                   struct kl_VfsNetConfig_IpctlForwarding_req *,
                                   const
                                   struct nk_arena *,
                                   struct kl_VfsNetConfig_IpctlForwarding_res *,
                                   struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_GetMedia_fn(struct kl_VfsNetConfig *,
                            const
                            struct kl_VfsNetConfig_GetMedia_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsNetConfig_GetMedia_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_SetMedia_fn(struct kl_VfsNetConfig *,
                            const
                            struct kl_VfsNetConfig_SetMedia_req *,
                            const
                            struct nk_arena *,
                            struct kl_VfsNetConfig_SetMedia_res *,
                            struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_DeleteIfAddr_fn(struct kl_VfsNetConfig *,
                                const
                                struct kl_VfsNetConfig_DeleteIfAddr_req *,
                                const
                                struct nk_arena *,
                                struct kl_VfsNetConfig_DeleteIfAddr_res *,
                                struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_AddIfAddr_fn(struct kl_VfsNetConfig *,
                             const
                             struct kl_VfsNetConfig_AddIfAddr_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsNetConfig_AddIfAddr_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_BridgeGet_fn(struct kl_VfsNetConfig *,
                             const
                             struct kl_VfsNetConfig_BridgeGet_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsNetConfig_BridgeGet_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_BridgeSet_fn(struct kl_VfsNetConfig *,
                             const
                             struct kl_VfsNetConfig_BridgeSet_req *,
                             const
                             struct nk_arena *,
                             struct kl_VfsNetConfig_BridgeSet_res *,
                             struct nk_arena *);
typedef nk_err_t
kl_VfsNetConfig_DnetIo_fn(struct kl_VfsNetConfig *,
                          const
                          struct kl_VfsNetConfig_DnetIo_req *,
                          const struct nk_arena *,
                          struct kl_VfsNetConfig_DnetIo_res *,
                          struct nk_arena *);
typedef struct kl_VfsNetConfig_ops {
            kl_VfsNetConfig_CreateIf_fn *CreateIf;
            kl_VfsNetConfig_DestroyIf_fn *DestroyIf;
            kl_VfsNetConfig_SetFlags_fn *SetFlags;
            kl_VfsNetConfig_GetFlags_fn *GetFlags;
            kl_VfsNetConfig_SetIpAddr_fn *SetIpAddr;
            kl_VfsNetConfig_GetIpAddr_fn *GetIpAddr;
            kl_VfsNetConfig_SetNetmask_fn *SetNetmask;
            kl_VfsNetConfig_GetNetmask_fn *GetNetmask;
            kl_VfsNetConfig_SetBroadcast_fn *SetBroadcast;
            kl_VfsNetConfig_GetBroadcast_fn *GetBroadcast;
            kl_VfsNetConfig_SetDstAddr_fn *SetDstAddr;
            kl_VfsNetConfig_GetDstAddr_fn *GetDstAddr;
            kl_VfsNetConfig_AddIpAddr_fn *AddIpAddr;
            kl_VfsNetConfig_RemoveIpAddr_fn *RemoveIpAddr;
            kl_VfsNetConfig_AddRoute_fn *AddRoute;
            kl_VfsNetConfig_DelRoute_fn *DelRoute;
            kl_VfsNetConfig_SetVlan_fn *SetVlan;
            kl_VfsNetConfig_GetVlan_fn *GetVlan;
            kl_VfsNetConfig_GetActiveIfList_fn *GetActiveIfList;
            kl_VfsNetConfig_GetNumOfBytesAvail_fn *GetNumOfBytesAvail;
            kl_VfsNetConfig_GetIfAFlags_fn *GetIfAFlags;
            kl_VfsNetConfig_PppoeSetParams_fn *PppoeSetParams;
            kl_VfsNetConfig_PppoeGetParams_fn *PppoeGetParams;
            kl_VfsNetConfig_PppoeGetSession_fn *PppoeGetSession;
            kl_VfsNetConfig_SpppGetStatus_fn *SpppGetStatus;
            kl_VfsNetConfig_SpppSetAuthCfg_fn *SpppSetAuthCfg;
            kl_VfsNetConfig_SpppGetAuthCfg_fn *SpppGetAuthCfg;
            kl_VfsNetConfig_SpppSetAuthFailure_fn *SpppSetAuthFailure;
            kl_VfsNetConfig_SpppGetAuthFailures_fn *SpppGetAuthFailures;
            kl_VfsNetConfig_Sysctl_fn *Sysctl;
            kl_VfsNetConfig_RtDump_fn *RtDump;
            kl_VfsNetConfig_RtIflist_fn *RtIflist;
            kl_VfsNetConfig_IpctlForwarding_fn *IpctlForwarding;
            kl_VfsNetConfig_GetMedia_fn *GetMedia;
            kl_VfsNetConfig_SetMedia_fn *SetMedia;
            kl_VfsNetConfig_DeleteIfAddr_fn *DeleteIfAddr;
            kl_VfsNetConfig_AddIfAddr_fn *AddIfAddr;
            kl_VfsNetConfig_BridgeGet_fn *BridgeGet;
            kl_VfsNetConfig_BridgeSet_fn *BridgeSet;
            kl_VfsNetConfig_DnetIo_fn *DnetIo;
        } kl_VfsNetConfig_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsNetConfig_CreateIf_fn kl_VfsNetConfig_CreateIf_fn
#define VfsNetConfig_DestroyIf_fn kl_VfsNetConfig_DestroyIf_fn
#define VfsNetConfig_SetFlags_fn kl_VfsNetConfig_SetFlags_fn
#define VfsNetConfig_GetFlags_fn kl_VfsNetConfig_GetFlags_fn
#define VfsNetConfig_SetIpAddr_fn kl_VfsNetConfig_SetIpAddr_fn
#define VfsNetConfig_GetIpAddr_fn kl_VfsNetConfig_GetIpAddr_fn
#define VfsNetConfig_SetNetmask_fn kl_VfsNetConfig_SetNetmask_fn
#define VfsNetConfig_GetNetmask_fn kl_VfsNetConfig_GetNetmask_fn
#define VfsNetConfig_SetBroadcast_fn kl_VfsNetConfig_SetBroadcast_fn
#define VfsNetConfig_GetBroadcast_fn kl_VfsNetConfig_GetBroadcast_fn
#define VfsNetConfig_SetDstAddr_fn kl_VfsNetConfig_SetDstAddr_fn
#define VfsNetConfig_GetDstAddr_fn kl_VfsNetConfig_GetDstAddr_fn
#define VfsNetConfig_AddIpAddr_fn kl_VfsNetConfig_AddIpAddr_fn
#define VfsNetConfig_RemoveIpAddr_fn kl_VfsNetConfig_RemoveIpAddr_fn
#define VfsNetConfig_AddRoute_fn kl_VfsNetConfig_AddRoute_fn
#define VfsNetConfig_DelRoute_fn kl_VfsNetConfig_DelRoute_fn
#define VfsNetConfig_SetVlan_fn kl_VfsNetConfig_SetVlan_fn
#define VfsNetConfig_GetVlan_fn kl_VfsNetConfig_GetVlan_fn
#define VfsNetConfig_GetActiveIfList_fn kl_VfsNetConfig_GetActiveIfList_fn
#define VfsNetConfig_GetNumOfBytesAvail_fn kl_VfsNetConfig_GetNumOfBytesAvail_fn
#define VfsNetConfig_GetIfAFlags_fn kl_VfsNetConfig_GetIfAFlags_fn
#define VfsNetConfig_PppoeSetParams_fn kl_VfsNetConfig_PppoeSetParams_fn
#define VfsNetConfig_PppoeGetParams_fn kl_VfsNetConfig_PppoeGetParams_fn
#define VfsNetConfig_PppoeGetSession_fn kl_VfsNetConfig_PppoeGetSession_fn
#define VfsNetConfig_SpppGetStatus_fn kl_VfsNetConfig_SpppGetStatus_fn
#define VfsNetConfig_SpppSetAuthCfg_fn kl_VfsNetConfig_SpppSetAuthCfg_fn
#define VfsNetConfig_SpppGetAuthCfg_fn kl_VfsNetConfig_SpppGetAuthCfg_fn
#define VfsNetConfig_SpppSetAuthFailure_fn kl_VfsNetConfig_SpppSetAuthFailure_fn
#define VfsNetConfig_SpppGetAuthFailures_fn kl_VfsNetConfig_SpppGetAuthFailures_fn
#define VfsNetConfig_Sysctl_fn kl_VfsNetConfig_Sysctl_fn
#define VfsNetConfig_RtDump_fn kl_VfsNetConfig_RtDump_fn
#define VfsNetConfig_RtIflist_fn kl_VfsNetConfig_RtIflist_fn
#define VfsNetConfig_IpctlForwarding_fn kl_VfsNetConfig_IpctlForwarding_fn
#define VfsNetConfig_GetMedia_fn kl_VfsNetConfig_GetMedia_fn
#define VfsNetConfig_SetMedia_fn kl_VfsNetConfig_SetMedia_fn
#define VfsNetConfig_DeleteIfAddr_fn kl_VfsNetConfig_DeleteIfAddr_fn
#define VfsNetConfig_AddIfAddr_fn kl_VfsNetConfig_AddIfAddr_fn
#define VfsNetConfig_BridgeGet_fn kl_VfsNetConfig_BridgeGet_fn
#define VfsNetConfig_BridgeSet_fn kl_VfsNetConfig_BridgeSet_fn
#define VfsNetConfig_DnetIo_fn kl_VfsNetConfig_DnetIo_fn
#define VfsNetConfig_ops kl_VfsNetConfig_ops
#define VfsNetConfig kl_VfsNetConfig
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsNetConfig__VTABLE__ */

#ifndef __kl__VfsACL__VTABLE__
#define __kl__VfsACL__VTABLE__
typedef struct kl_VfsACL {
            const struct kl_VfsACL_ops *ops;
        } kl_VfsACL;
typedef nk_err_t
kl_VfsACL_AclSetFile_fn(struct kl_VfsACL *, const
                        struct kl_VfsACL_AclSetFile_req *,
                        const struct nk_arena *,
                        struct kl_VfsACL_AclSetFile_res *,
                        struct nk_arena *);
typedef nk_err_t
kl_VfsACL_AclGetFile_fn(struct kl_VfsACL *, const
                        struct kl_VfsACL_AclGetFile_req *,
                        const struct nk_arena *,
                        struct kl_VfsACL_AclGetFile_res *,
                        struct nk_arena *);
typedef nk_err_t
kl_VfsACL_AclDeleteDefFile_fn(struct kl_VfsACL *,
                              const
                              struct kl_VfsACL_AclDeleteDefFile_req *,
                              const
                              struct nk_arena *,
                              struct kl_VfsACL_AclDeleteDefFile_res *,
                              struct nk_arena *);
typedef struct kl_VfsACL_ops {
            kl_VfsACL_AclSetFile_fn *AclSetFile;
            kl_VfsACL_AclGetFile_fn *AclGetFile;
            kl_VfsACL_AclDeleteDefFile_fn *AclDeleteDefFile;
        } kl_VfsACL_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsACL_AclSetFile_fn kl_VfsACL_AclSetFile_fn
#define VfsACL_AclGetFile_fn kl_VfsACL_AclGetFile_fn
#define VfsACL_AclDeleteDefFile_fn kl_VfsACL_AclDeleteDefFile_fn
#define VfsACL_ops kl_VfsACL_ops
#define VfsACL kl_VfsACL
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsACL__VTABLE__ */

#ifndef __kl__VfsFilesystem__SERVER__
#define __kl__VfsFilesystem__SERVER__
typedef union kl_VfsFilesystem_req {
            struct nk_message base_;
            struct kl_VfsFilesystem_ClientConnected_req ClientConnected;
            struct kl_VfsFilesystem_ClientDisconnected_req ClientDisconnected;
            struct kl_VfsFilesystem_DisconnectAllClients_req DisconnectAllClients;
            struct kl_VfsFilesystem_Mount_req Mount;
            struct kl_VfsFilesystem_Unmount_req Unmount;
            struct kl_VfsFilesystem_Unlink_req Unlink;
            struct kl_VfsFilesystem_Unlinkat_req Unlinkat;
            struct kl_VfsFilesystem_Link_req Link;
            struct kl_VfsFilesystem_Linkat_req Linkat;
            struct kl_VfsFilesystem_Symlink_req Symlink;
            struct kl_VfsFilesystem_Symlinkat_req Symlinkat;
            struct kl_VfsFilesystem_Ftruncate_req Ftruncate;
            struct kl_VfsFilesystem_Rename_req Rename;
            struct kl_VfsFilesystem_Renameat_req Renameat;
            struct kl_VfsFilesystem_Rmdir_req Rmdir;
            struct kl_VfsFilesystem_Mkdir_req Mkdir;
            struct kl_VfsFilesystem_Mkdirat_req Mkdirat;
            struct kl_VfsFilesystem_Chdir_req Chdir;
            struct kl_VfsFilesystem_Chmod_req Chmod;
            struct kl_VfsFilesystem_Fchmod_req Fchmod;
            struct kl_VfsFilesystem_Fchmodat_req Fchmodat;
            struct kl_VfsFilesystem_Chroot_req Chroot;
            struct kl_VfsFilesystem_Open_req Open;
            struct kl_VfsFilesystem_Openat_req Openat;
            struct kl_VfsFilesystem_Read_req Read;
            struct kl_VfsFilesystem_Readv_req Readv;
            struct kl_VfsFilesystem_Pread_req Pread;
            struct kl_VfsFilesystem_Write_req Write;
            struct kl_VfsFilesystem_Sendfile_req Sendfile;
            struct kl_VfsFilesystem_Writev_req Writev;
            struct kl_VfsFilesystem_Pwrite_req Pwrite;
            struct kl_VfsFilesystem_Lseek_req Lseek;
            struct kl_VfsFilesystem_Stat_req Stat;
            struct kl_VfsFilesystem_Lstat_req Lstat;
            struct kl_VfsFilesystem_Fstat_req Fstat;
            struct kl_VfsFilesystem_Fstatat_req Fstatat;
            struct kl_VfsFilesystem_Fsync_req Fsync;
            struct kl_VfsFilesystem_Fdatasync_req Fdatasync;
            struct kl_VfsFilesystem_Close_req Close;
            struct kl_VfsFilesystem_StatVfs_req StatVfs;
            struct kl_VfsFilesystem_FStatVfs_req FStatVfs;
            struct kl_VfsFilesystem_Pipe_req Pipe;
            struct kl_VfsFilesystem_Getdents_req Getdents;
            struct kl_VfsFilesystem_Socket_req Socket;
            struct kl_VfsFilesystem_Socketpair_req Socketpair;
            struct kl_VfsFilesystem_Bind_req Bind;
            struct kl_VfsFilesystem_Listen_req Listen;
            struct kl_VfsFilesystem_Connect_req Connect;
            struct kl_VfsFilesystem_Accept_req Accept;
            struct kl_VfsFilesystem_Poll_req Poll;
            struct kl_VfsFilesystem_Shutdown_req Shutdown;
            struct kl_VfsFilesystem_Getnameinfo_req Getnameinfo;
            struct kl_VfsFilesystem_Getaddrinfo_req Getaddrinfo;
            struct kl_VfsFilesystem_Getifaddrs_req Getifaddrs;
            struct kl_VfsFilesystem_Getpeername_req Getpeername;
            struct kl_VfsFilesystem_Getsockname_req Getsockname;
            struct kl_VfsFilesystem_Gethostbyname_req Gethostbyname;
            struct kl_VfsFilesystem_Getnetbyname_req Getnetbyname;
            struct kl_VfsFilesystem_Getprotobyname_req Getprotobyname;
            struct kl_VfsFilesystem_Getprotobynumber_req Getprotobynumber;
            struct kl_VfsFilesystem_Getsockopt_req Getsockopt;
            struct kl_VfsFilesystem_Setsockopt_req Setsockopt;
            struct kl_VfsFilesystem_Recv_req Recv;
            struct kl_VfsFilesystem_Recvfrom_req Recvfrom;
            struct kl_VfsFilesystem_Recvmsg_req Recvmsg;
            struct kl_VfsFilesystem_Send_req Send;
            struct kl_VfsFilesystem_Sendto_req Sendto;
            struct kl_VfsFilesystem_Sendmsg_req Sendmsg;
            struct kl_VfsFilesystem_Synchronize_req Synchronize;
            struct kl_VfsFilesystem_Fcntl_req Fcntl;
            struct kl_VfsFilesystem_Ioctl_req Ioctl;
            struct kl_VfsFilesystem_Futimens_req Futimens;
            struct kl_VfsFilesystem_Utimensat_req Utimensat;
        } kl_VfsFilesystem_req;
typedef union kl_VfsFilesystem_res {
            struct nk_message base_;
            struct kl_VfsFilesystem_ClientConnected_res ClientConnected;
            struct kl_VfsFilesystem_ClientDisconnected_res ClientDisconnected;
            struct kl_VfsFilesystem_DisconnectAllClients_res DisconnectAllClients;
            struct kl_VfsFilesystem_Mount_res Mount;
            struct kl_VfsFilesystem_Unmount_res Unmount;
            struct kl_VfsFilesystem_Unlink_res Unlink;
            struct kl_VfsFilesystem_Unlinkat_res Unlinkat;
            struct kl_VfsFilesystem_Link_res Link;
            struct kl_VfsFilesystem_Linkat_res Linkat;
            struct kl_VfsFilesystem_Symlink_res Symlink;
            struct kl_VfsFilesystem_Symlinkat_res Symlinkat;
            struct kl_VfsFilesystem_Ftruncate_res Ftruncate;
            struct kl_VfsFilesystem_Rename_res Rename;
            struct kl_VfsFilesystem_Renameat_res Renameat;
            struct kl_VfsFilesystem_Rmdir_res Rmdir;
            struct kl_VfsFilesystem_Mkdir_res Mkdir;
            struct kl_VfsFilesystem_Mkdirat_res Mkdirat;
            struct kl_VfsFilesystem_Chdir_res Chdir;
            struct kl_VfsFilesystem_Chmod_res Chmod;
            struct kl_VfsFilesystem_Fchmod_res Fchmod;
            struct kl_VfsFilesystem_Fchmodat_res Fchmodat;
            struct kl_VfsFilesystem_Chroot_res Chroot;
            struct kl_VfsFilesystem_Open_res Open;
            struct kl_VfsFilesystem_Openat_res Openat;
            struct kl_VfsFilesystem_Read_res Read;
            struct kl_VfsFilesystem_Readv_res Readv;
            struct kl_VfsFilesystem_Pread_res Pread;
            struct kl_VfsFilesystem_Write_res Write;
            struct kl_VfsFilesystem_Sendfile_res Sendfile;
            struct kl_VfsFilesystem_Writev_res Writev;
            struct kl_VfsFilesystem_Pwrite_res Pwrite;
            struct kl_VfsFilesystem_Lseek_res Lseek;
            struct kl_VfsFilesystem_Stat_res Stat;
            struct kl_VfsFilesystem_Lstat_res Lstat;
            struct kl_VfsFilesystem_Fstat_res Fstat;
            struct kl_VfsFilesystem_Fstatat_res Fstatat;
            struct kl_VfsFilesystem_Fsync_res Fsync;
            struct kl_VfsFilesystem_Fdatasync_res Fdatasync;
            struct kl_VfsFilesystem_Close_res Close;
            struct kl_VfsFilesystem_StatVfs_res StatVfs;
            struct kl_VfsFilesystem_FStatVfs_res FStatVfs;
            struct kl_VfsFilesystem_Pipe_res Pipe;
            struct kl_VfsFilesystem_Getdents_res Getdents;
            struct kl_VfsFilesystem_Socket_res Socket;
            struct kl_VfsFilesystem_Socketpair_res Socketpair;
            struct kl_VfsFilesystem_Bind_res Bind;
            struct kl_VfsFilesystem_Listen_res Listen;
            struct kl_VfsFilesystem_Connect_res Connect;
            struct kl_VfsFilesystem_Accept_res Accept;
            struct kl_VfsFilesystem_Poll_res Poll;
            struct kl_VfsFilesystem_Shutdown_res Shutdown;
            struct kl_VfsFilesystem_Getnameinfo_res Getnameinfo;
            struct kl_VfsFilesystem_Getaddrinfo_res Getaddrinfo;
            struct kl_VfsFilesystem_Getifaddrs_res Getifaddrs;
            struct kl_VfsFilesystem_Getpeername_res Getpeername;
            struct kl_VfsFilesystem_Getsockname_res Getsockname;
            struct kl_VfsFilesystem_Gethostbyname_res Gethostbyname;
            struct kl_VfsFilesystem_Getnetbyname_res Getnetbyname;
            struct kl_VfsFilesystem_Getprotobyname_res Getprotobyname;
            struct kl_VfsFilesystem_Getprotobynumber_res Getprotobynumber;
            struct kl_VfsFilesystem_Getsockopt_res Getsockopt;
            struct kl_VfsFilesystem_Setsockopt_res Setsockopt;
            struct kl_VfsFilesystem_Recv_res Recv;
            struct kl_VfsFilesystem_Recvfrom_res Recvfrom;
            struct kl_VfsFilesystem_Recvmsg_res Recvmsg;
            struct kl_VfsFilesystem_Send_res Send;
            struct kl_VfsFilesystem_Sendto_res Sendto;
            struct kl_VfsFilesystem_Sendmsg_res Sendmsg;
            struct kl_VfsFilesystem_Synchronize_res Synchronize;
            struct kl_VfsFilesystem_Fcntl_res Fcntl;
            struct kl_VfsFilesystem_Ioctl_res Ioctl;
            struct kl_VfsFilesystem_Futimens_res Futimens;
            struct kl_VfsFilesystem_Utimensat_res Utimensat;
        } kl_VfsFilesystem_res;
static inline
nk_err_t kl_VfsFilesystem_interface_dispatch(struct kl_VfsFilesystem *impl,
                                             nk_iid_t iid,
                                             const
                                             struct nk_message *req,
                                             const
                                             struct nk_arena *req_arena,
                                             struct nk_message *res,
                                             struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case kl_VfsFilesystem_ClientConnected_mid:
            {
                struct kl_VfsFilesystem_ClientConnected_res
                *res_ =
                (struct kl_VfsFilesystem_ClientConnected_res *) res;
                
                rc =
                    impl->ops->ClientConnected(impl,
                                               (const
                                                struct kl_VfsFilesystem_ClientConnected_req *) req,
                                               req_arena,
                                               res_,
                                               res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_ClientConnected_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_ClientDisconnected_mid:
            {
                struct kl_VfsFilesystem_ClientDisconnected_res
                *res_ =
                (struct kl_VfsFilesystem_ClientDisconnected_res *) res;
                
                rc =
                    impl->ops->ClientDisconnected(impl,
                                                  (const
                                                   struct kl_VfsFilesystem_ClientDisconnected_req *) req,
                                                  req_arena,
                                                  res_,
                                                  res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_ClientDisconnected_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_DisconnectAllClients_mid:
            {
                struct kl_VfsFilesystem_DisconnectAllClients_res
                *res_ =
                (struct kl_VfsFilesystem_DisconnectAllClients_res *) res;
                
                rc =
                    impl->ops->DisconnectAllClients(impl,
                                                    (const
                                                     struct kl_VfsFilesystem_DisconnectAllClients_req *) req,
                                                    req_arena,
                                                    res_,
                                                    res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_DisconnectAllClients_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Mount_mid:
            {
                struct kl_VfsFilesystem_Mount_res
                *res_ =
                (struct kl_VfsFilesystem_Mount_res *) res;
                
                rc = impl->ops->Mount(impl, (const
                                             struct kl_VfsFilesystem_Mount_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Mount_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Unmount_mid:
            {
                struct kl_VfsFilesystem_Unmount_res
                *res_ =
                (struct kl_VfsFilesystem_Unmount_res *) res;
                
                rc = impl->ops->Unmount(impl,
                                        (const
                                         struct kl_VfsFilesystem_Unmount_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Unmount_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Unlink_mid:
            {
                struct kl_VfsFilesystem_Unlink_res
                *res_ =
                (struct kl_VfsFilesystem_Unlink_res *) res;
                
                rc = impl->ops->Unlink(impl,
                                       (const
                                        struct kl_VfsFilesystem_Unlink_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Unlink_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Unlinkat_mid:
            {
                struct kl_VfsFilesystem_Unlinkat_res
                *res_ =
                (struct kl_VfsFilesystem_Unlinkat_res *) res;
                
                rc = impl->ops->Unlinkat(impl,
                                         (const
                                          struct kl_VfsFilesystem_Unlinkat_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Unlinkat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Link_mid:
            {
                struct kl_VfsFilesystem_Link_res
                *res_ =
                (struct kl_VfsFilesystem_Link_res *) res;
                
                rc = impl->ops->Link(impl, (const
                                            struct kl_VfsFilesystem_Link_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Link_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Linkat_mid:
            {
                struct kl_VfsFilesystem_Linkat_res
                *res_ =
                (struct kl_VfsFilesystem_Linkat_res *) res;
                
                rc = impl->ops->Linkat(impl,
                                       (const
                                        struct kl_VfsFilesystem_Linkat_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Linkat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Symlink_mid:
            {
                struct kl_VfsFilesystem_Symlink_res
                *res_ =
                (struct kl_VfsFilesystem_Symlink_res *) res;
                
                rc = impl->ops->Symlink(impl,
                                        (const
                                         struct kl_VfsFilesystem_Symlink_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Symlink_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Symlinkat_mid:
            {
                struct kl_VfsFilesystem_Symlinkat_res
                *res_ =
                (struct kl_VfsFilesystem_Symlinkat_res *) res;
                
                rc = impl->ops->Symlinkat(impl,
                                          (const
                                           struct kl_VfsFilesystem_Symlinkat_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Symlinkat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Ftruncate_mid:
            {
                struct kl_VfsFilesystem_Ftruncate_res
                *res_ =
                (struct kl_VfsFilesystem_Ftruncate_res *) res;
                
                rc = impl->ops->Ftruncate(impl,
                                          (const
                                           struct kl_VfsFilesystem_Ftruncate_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Ftruncate_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Rename_mid:
            {
                struct kl_VfsFilesystem_Rename_res
                *res_ =
                (struct kl_VfsFilesystem_Rename_res *) res;
                
                rc = impl->ops->Rename(impl,
                                       (const
                                        struct kl_VfsFilesystem_Rename_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Rename_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Renameat_mid:
            {
                struct kl_VfsFilesystem_Renameat_res
                *res_ =
                (struct kl_VfsFilesystem_Renameat_res *) res;
                
                rc = impl->ops->Renameat(impl,
                                         (const
                                          struct kl_VfsFilesystem_Renameat_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Renameat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Rmdir_mid:
            {
                struct kl_VfsFilesystem_Rmdir_res
                *res_ =
                (struct kl_VfsFilesystem_Rmdir_res *) res;
                
                rc = impl->ops->Rmdir(impl, (const
                                             struct kl_VfsFilesystem_Rmdir_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Rmdir_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Mkdir_mid:
            {
                struct kl_VfsFilesystem_Mkdir_res
                *res_ =
                (struct kl_VfsFilesystem_Mkdir_res *) res;
                
                rc = impl->ops->Mkdir(impl, (const
                                             struct kl_VfsFilesystem_Mkdir_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Mkdir_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Mkdirat_mid:
            {
                struct kl_VfsFilesystem_Mkdirat_res
                *res_ =
                (struct kl_VfsFilesystem_Mkdirat_res *) res;
                
                rc = impl->ops->Mkdirat(impl,
                                        (const
                                         struct kl_VfsFilesystem_Mkdirat_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Mkdirat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Chdir_mid:
            {
                struct kl_VfsFilesystem_Chdir_res
                *res_ =
                (struct kl_VfsFilesystem_Chdir_res *) res;
                
                rc = impl->ops->Chdir(impl, (const
                                             struct kl_VfsFilesystem_Chdir_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Chdir_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Chmod_mid:
            {
                struct kl_VfsFilesystem_Chmod_res
                *res_ =
                (struct kl_VfsFilesystem_Chmod_res *) res;
                
                rc = impl->ops->Chmod(impl, (const
                                             struct kl_VfsFilesystem_Chmod_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Chmod_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Fchmod_mid:
            {
                struct kl_VfsFilesystem_Fchmod_res
                *res_ =
                (struct kl_VfsFilesystem_Fchmod_res *) res;
                
                rc = impl->ops->Fchmod(impl,
                                       (const
                                        struct kl_VfsFilesystem_Fchmod_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Fchmod_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Fchmodat_mid:
            {
                struct kl_VfsFilesystem_Fchmodat_res
                *res_ =
                (struct kl_VfsFilesystem_Fchmodat_res *) res;
                
                rc = impl->ops->Fchmodat(impl,
                                         (const
                                          struct kl_VfsFilesystem_Fchmodat_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Fchmodat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Chroot_mid:
            {
                struct kl_VfsFilesystem_Chroot_res
                *res_ =
                (struct kl_VfsFilesystem_Chroot_res *) res;
                
                rc = impl->ops->Chroot(impl,
                                       (const
                                        struct kl_VfsFilesystem_Chroot_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Chroot_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Open_mid:
            {
                struct kl_VfsFilesystem_Open_res
                *res_ =
                (struct kl_VfsFilesystem_Open_res *) res;
                
                rc = impl->ops->Open(impl, (const
                                            struct kl_VfsFilesystem_Open_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Open_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Openat_mid:
            {
                struct kl_VfsFilesystem_Openat_res
                *res_ =
                (struct kl_VfsFilesystem_Openat_res *) res;
                
                rc = impl->ops->Openat(impl,
                                       (const
                                        struct kl_VfsFilesystem_Openat_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Openat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Read_mid:
            {
                struct kl_VfsFilesystem_Read_res
                *res_ =
                (struct kl_VfsFilesystem_Read_res *) res;
                
                rc = impl->ops->Read(impl, (const
                                            struct kl_VfsFilesystem_Read_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Read_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Readv_mid:
            {
                struct kl_VfsFilesystem_Readv_res
                *res_ =
                (struct kl_VfsFilesystem_Readv_res *) res;
                
                rc = impl->ops->Readv(impl, (const
                                             struct kl_VfsFilesystem_Readv_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Readv_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Pread_mid:
            {
                struct kl_VfsFilesystem_Pread_res
                *res_ =
                (struct kl_VfsFilesystem_Pread_res *) res;
                
                rc = impl->ops->Pread(impl, (const
                                             struct kl_VfsFilesystem_Pread_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Pread_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Write_mid:
            {
                struct kl_VfsFilesystem_Write_res
                *res_ =
                (struct kl_VfsFilesystem_Write_res *) res;
                
                rc = impl->ops->Write(impl, (const
                                             struct kl_VfsFilesystem_Write_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Write_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Sendfile_mid:
            {
                struct kl_VfsFilesystem_Sendfile_res
                *res_ =
                (struct kl_VfsFilesystem_Sendfile_res *) res;
                
                rc = impl->ops->Sendfile(impl,
                                         (const
                                          struct kl_VfsFilesystem_Sendfile_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Sendfile_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Writev_mid:
            {
                struct kl_VfsFilesystem_Writev_res
                *res_ =
                (struct kl_VfsFilesystem_Writev_res *) res;
                
                rc = impl->ops->Writev(impl,
                                       (const
                                        struct kl_VfsFilesystem_Writev_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Writev_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Pwrite_mid:
            {
                struct kl_VfsFilesystem_Pwrite_res
                *res_ =
                (struct kl_VfsFilesystem_Pwrite_res *) res;
                
                rc = impl->ops->Pwrite(impl,
                                       (const
                                        struct kl_VfsFilesystem_Pwrite_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Pwrite_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Lseek_mid:
            {
                struct kl_VfsFilesystem_Lseek_res
                *res_ =
                (struct kl_VfsFilesystem_Lseek_res *) res;
                
                rc = impl->ops->Lseek(impl, (const
                                             struct kl_VfsFilesystem_Lseek_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Lseek_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Stat_mid:
            {
                struct kl_VfsFilesystem_Stat_res
                *res_ =
                (struct kl_VfsFilesystem_Stat_res *) res;
                
                rc = impl->ops->Stat(impl, (const
                                            struct kl_VfsFilesystem_Stat_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Stat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Lstat_mid:
            {
                struct kl_VfsFilesystem_Lstat_res
                *res_ =
                (struct kl_VfsFilesystem_Lstat_res *) res;
                
                rc = impl->ops->Lstat(impl, (const
                                             struct kl_VfsFilesystem_Lstat_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Lstat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Fstat_mid:
            {
                struct kl_VfsFilesystem_Fstat_res
                *res_ =
                (struct kl_VfsFilesystem_Fstat_res *) res;
                
                rc = impl->ops->Fstat(impl, (const
                                             struct kl_VfsFilesystem_Fstat_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Fstat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Fstatat_mid:
            {
                struct kl_VfsFilesystem_Fstatat_res
                *res_ =
                (struct kl_VfsFilesystem_Fstatat_res *) res;
                
                rc = impl->ops->Fstatat(impl,
                                        (const
                                         struct kl_VfsFilesystem_Fstatat_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Fstatat_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Fsync_mid:
            {
                struct kl_VfsFilesystem_Fsync_res
                *res_ =
                (struct kl_VfsFilesystem_Fsync_res *) res;
                
                rc = impl->ops->Fsync(impl, (const
                                             struct kl_VfsFilesystem_Fsync_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Fsync_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Fdatasync_mid:
            {
                struct kl_VfsFilesystem_Fdatasync_res
                *res_ =
                (struct kl_VfsFilesystem_Fdatasync_res *) res;
                
                rc = impl->ops->Fdatasync(impl,
                                          (const
                                           struct kl_VfsFilesystem_Fdatasync_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Fdatasync_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Close_mid:
            {
                struct kl_VfsFilesystem_Close_res
                *res_ =
                (struct kl_VfsFilesystem_Close_res *) res;
                
                rc = impl->ops->Close(impl, (const
                                             struct kl_VfsFilesystem_Close_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Close_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_StatVfs_mid:
            {
                struct kl_VfsFilesystem_StatVfs_res
                *res_ =
                (struct kl_VfsFilesystem_StatVfs_res *) res;
                
                rc = impl->ops->StatVfs(impl,
                                        (const
                                         struct kl_VfsFilesystem_StatVfs_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_StatVfs_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_FStatVfs_mid:
            {
                struct kl_VfsFilesystem_FStatVfs_res
                *res_ =
                (struct kl_VfsFilesystem_FStatVfs_res *) res;
                
                rc = impl->ops->FStatVfs(impl,
                                         (const
                                          struct kl_VfsFilesystem_FStatVfs_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_FStatVfs_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Pipe_mid:
            {
                struct kl_VfsFilesystem_Pipe_res
                *res_ =
                (struct kl_VfsFilesystem_Pipe_res *) res;
                
                rc = impl->ops->Pipe(impl, (const
                                            struct kl_VfsFilesystem_Pipe_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Pipe_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getdents_mid:
            {
                struct kl_VfsFilesystem_Getdents_res
                *res_ =
                (struct kl_VfsFilesystem_Getdents_res *) res;
                
                rc = impl->ops->Getdents(impl,
                                         (const
                                          struct kl_VfsFilesystem_Getdents_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getdents_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Socket_mid:
            {
                struct kl_VfsFilesystem_Socket_res
                *res_ =
                (struct kl_VfsFilesystem_Socket_res *) res;
                
                rc = impl->ops->Socket(impl,
                                       (const
                                        struct kl_VfsFilesystem_Socket_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Socket_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Socketpair_mid:
            {
                struct kl_VfsFilesystem_Socketpair_res
                *res_ =
                (struct kl_VfsFilesystem_Socketpair_res *) res;
                
                rc = impl->ops->Socketpair(impl,
                                           (const
                                            struct kl_VfsFilesystem_Socketpair_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Socketpair_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Bind_mid:
            {
                struct kl_VfsFilesystem_Bind_res
                *res_ =
                (struct kl_VfsFilesystem_Bind_res *) res;
                
                rc = impl->ops->Bind(impl, (const
                                            struct kl_VfsFilesystem_Bind_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Bind_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Listen_mid:
            {
                struct kl_VfsFilesystem_Listen_res
                *res_ =
                (struct kl_VfsFilesystem_Listen_res *) res;
                
                rc = impl->ops->Listen(impl,
                                       (const
                                        struct kl_VfsFilesystem_Listen_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Listen_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Connect_mid:
            {
                struct kl_VfsFilesystem_Connect_res
                *res_ =
                (struct kl_VfsFilesystem_Connect_res *) res;
                
                rc = impl->ops->Connect(impl,
                                        (const
                                         struct kl_VfsFilesystem_Connect_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Connect_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Accept_mid:
            {
                struct kl_VfsFilesystem_Accept_res
                *res_ =
                (struct kl_VfsFilesystem_Accept_res *) res;
                
                rc = impl->ops->Accept(impl,
                                       (const
                                        struct kl_VfsFilesystem_Accept_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Accept_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Poll_mid:
            {
                struct kl_VfsFilesystem_Poll_res
                *res_ =
                (struct kl_VfsFilesystem_Poll_res *) res;
                
                rc = impl->ops->Poll(impl, (const
                                            struct kl_VfsFilesystem_Poll_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Poll_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Shutdown_mid:
            {
                struct kl_VfsFilesystem_Shutdown_res
                *res_ =
                (struct kl_VfsFilesystem_Shutdown_res *) res;
                
                rc = impl->ops->Shutdown(impl,
                                         (const
                                          struct kl_VfsFilesystem_Shutdown_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Shutdown_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getnameinfo_mid:
            {
                struct kl_VfsFilesystem_Getnameinfo_res
                *res_ =
                (struct kl_VfsFilesystem_Getnameinfo_res *) res;
                
                rc = impl->ops->Getnameinfo(impl,
                                            (const
                                             struct kl_VfsFilesystem_Getnameinfo_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getnameinfo_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getaddrinfo_mid:
            {
                struct kl_VfsFilesystem_Getaddrinfo_res
                *res_ =
                (struct kl_VfsFilesystem_Getaddrinfo_res *) res;
                
                rc = impl->ops->Getaddrinfo(impl,
                                            (const
                                             struct kl_VfsFilesystem_Getaddrinfo_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getaddrinfo_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getifaddrs_mid:
            {
                struct kl_VfsFilesystem_Getifaddrs_res
                *res_ =
                (struct kl_VfsFilesystem_Getifaddrs_res *) res;
                
                rc = impl->ops->Getifaddrs(impl,
                                           (const
                                            struct kl_VfsFilesystem_Getifaddrs_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getifaddrs_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getpeername_mid:
            {
                struct kl_VfsFilesystem_Getpeername_res
                *res_ =
                (struct kl_VfsFilesystem_Getpeername_res *) res;
                
                rc = impl->ops->Getpeername(impl,
                                            (const
                                             struct kl_VfsFilesystem_Getpeername_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getpeername_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getsockname_mid:
            {
                struct kl_VfsFilesystem_Getsockname_res
                *res_ =
                (struct kl_VfsFilesystem_Getsockname_res *) res;
                
                rc = impl->ops->Getsockname(impl,
                                            (const
                                             struct kl_VfsFilesystem_Getsockname_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getsockname_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Gethostbyname_mid:
            {
                struct kl_VfsFilesystem_Gethostbyname_res
                *res_ =
                (struct kl_VfsFilesystem_Gethostbyname_res *) res;
                
                rc =
                    impl->ops->Gethostbyname(impl,
                                             (const
                                              struct kl_VfsFilesystem_Gethostbyname_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Gethostbyname_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getnetbyname_mid:
            {
                struct kl_VfsFilesystem_Getnetbyname_res
                *res_ =
                (struct kl_VfsFilesystem_Getnetbyname_res *) res;
                
                rc = impl->ops->Getnetbyname(impl,
                                             (const
                                              struct kl_VfsFilesystem_Getnetbyname_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getnetbyname_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getprotobyname_mid:
            {
                struct kl_VfsFilesystem_Getprotobyname_res
                *res_ =
                (struct kl_VfsFilesystem_Getprotobyname_res *) res;
                
                rc =
                    impl->ops->Getprotobyname(impl,
                                              (const
                                               struct kl_VfsFilesystem_Getprotobyname_req *) req,
                                              req_arena,
                                              res_,
                                              res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getprotobyname_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getprotobynumber_mid:
            {
                struct kl_VfsFilesystem_Getprotobynumber_res
                *res_ =
                (struct kl_VfsFilesystem_Getprotobynumber_res *) res;
                
                rc =
                    impl->ops->Getprotobynumber(impl,
                                                (const
                                                 struct kl_VfsFilesystem_Getprotobynumber_req *) req,
                                                req_arena,
                                                res_,
                                                res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getprotobynumber_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Getsockopt_mid:
            {
                struct kl_VfsFilesystem_Getsockopt_res
                *res_ =
                (struct kl_VfsFilesystem_Getsockopt_res *) res;
                
                rc = impl->ops->Getsockopt(impl,
                                           (const
                                            struct kl_VfsFilesystem_Getsockopt_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Getsockopt_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Setsockopt_mid:
            {
                struct kl_VfsFilesystem_Setsockopt_res
                *res_ =
                (struct kl_VfsFilesystem_Setsockopt_res *) res;
                
                rc = impl->ops->Setsockopt(impl,
                                           (const
                                            struct kl_VfsFilesystem_Setsockopt_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Setsockopt_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Recv_mid:
            {
                struct kl_VfsFilesystem_Recv_res
                *res_ =
                (struct kl_VfsFilesystem_Recv_res *) res;
                
                rc = impl->ops->Recv(impl, (const
                                            struct kl_VfsFilesystem_Recv_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Recv_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Recvfrom_mid:
            {
                struct kl_VfsFilesystem_Recvfrom_res
                *res_ =
                (struct kl_VfsFilesystem_Recvfrom_res *) res;
                
                rc = impl->ops->Recvfrom(impl,
                                         (const
                                          struct kl_VfsFilesystem_Recvfrom_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Recvfrom_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Recvmsg_mid:
            {
                struct kl_VfsFilesystem_Recvmsg_res
                *res_ =
                (struct kl_VfsFilesystem_Recvmsg_res *) res;
                
                rc = impl->ops->Recvmsg(impl,
                                        (const
                                         struct kl_VfsFilesystem_Recvmsg_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Recvmsg_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Send_mid:
            {
                struct kl_VfsFilesystem_Send_res
                *res_ =
                (struct kl_VfsFilesystem_Send_res *) res;
                
                rc = impl->ops->Send(impl, (const
                                            struct kl_VfsFilesystem_Send_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Send_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Sendto_mid:
            {
                struct kl_VfsFilesystem_Sendto_res
                *res_ =
                (struct kl_VfsFilesystem_Sendto_res *) res;
                
                rc = impl->ops->Sendto(impl,
                                       (const
                                        struct kl_VfsFilesystem_Sendto_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Sendto_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Sendmsg_mid:
            {
                struct kl_VfsFilesystem_Sendmsg_res
                *res_ =
                (struct kl_VfsFilesystem_Sendmsg_res *) res;
                
                rc = impl->ops->Sendmsg(impl,
                                        (const
                                         struct kl_VfsFilesystem_Sendmsg_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Sendmsg_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Synchronize_mid:
            {
                struct kl_VfsFilesystem_Synchronize_res
                *res_ =
                (struct kl_VfsFilesystem_Synchronize_res *) res;
                
                rc = impl->ops->Synchronize(impl,
                                            (const
                                             struct kl_VfsFilesystem_Synchronize_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Synchronize_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Fcntl_mid:
            {
                struct kl_VfsFilesystem_Fcntl_res
                *res_ =
                (struct kl_VfsFilesystem_Fcntl_res *) res;
                
                rc = impl->ops->Fcntl(impl, (const
                                             struct kl_VfsFilesystem_Fcntl_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Fcntl_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Ioctl_mid:
            {
                struct kl_VfsFilesystem_Ioctl_res
                *res_ =
                (struct kl_VfsFilesystem_Ioctl_res *) res;
                
                rc = impl->ops->Ioctl(impl, (const
                                             struct kl_VfsFilesystem_Ioctl_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Ioctl_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Futimens_mid:
            {
                struct kl_VfsFilesystem_Futimens_res
                *res_ =
                (struct kl_VfsFilesystem_Futimens_res *) res;
                
                rc = impl->ops->Futimens(impl,
                                         (const
                                          struct kl_VfsFilesystem_Futimens_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Futimens_res_handles);
                }
                break;
            }
            
          case kl_VfsFilesystem_Utimensat_mid:
            {
                struct kl_VfsFilesystem_Utimensat_res
                *res_ =
                (struct kl_VfsFilesystem_Utimensat_res *) res;
                
                rc = impl->ops->Utimensat(impl,
                                          (const
                                           struct kl_VfsFilesystem_Utimensat_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsFilesystem_Utimensat_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsFilesystem_req kl_VfsFilesystem_req
#define VfsFilesystem_res kl_VfsFilesystem_res
#define VfsFilesystem_interface_dispatch kl_VfsFilesystem_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsFilesystem__SERVER__ */

#ifndef __kl__VfsExtAttr__SERVER__
#define __kl__VfsExtAttr__SERVER__
typedef union kl_VfsExtAttr_req {
            struct nk_message base_;
            struct kl_VfsExtAttr_Setxattr_req Setxattr;
            struct kl_VfsExtAttr_Lsetxattr_req Lsetxattr;
            struct kl_VfsExtAttr_Fsetxattr_req Fsetxattr;
            struct kl_VfsExtAttr_Getxattr_req Getxattr;
            struct kl_VfsExtAttr_Lgetxattr_req Lgetxattr;
            struct kl_VfsExtAttr_Fgetxattr_req Fgetxattr;
            struct kl_VfsExtAttr_Listxattr_req Listxattr;
            struct kl_VfsExtAttr_Llistxattr_req Llistxattr;
            struct kl_VfsExtAttr_Flistxattr_req Flistxattr;
            struct kl_VfsExtAttr_Removexattr_req Removexattr;
            struct kl_VfsExtAttr_Lremovexattr_req Lremovexattr;
            struct kl_VfsExtAttr_Fremovexattr_req Fremovexattr;
        } kl_VfsExtAttr_req;
typedef union kl_VfsExtAttr_res {
            struct nk_message base_;
            struct kl_VfsExtAttr_Setxattr_res Setxattr;
            struct kl_VfsExtAttr_Lsetxattr_res Lsetxattr;
            struct kl_VfsExtAttr_Fsetxattr_res Fsetxattr;
            struct kl_VfsExtAttr_Getxattr_res Getxattr;
            struct kl_VfsExtAttr_Lgetxattr_res Lgetxattr;
            struct kl_VfsExtAttr_Fgetxattr_res Fgetxattr;
            struct kl_VfsExtAttr_Listxattr_res Listxattr;
            struct kl_VfsExtAttr_Llistxattr_res Llistxattr;
            struct kl_VfsExtAttr_Flistxattr_res Flistxattr;
            struct kl_VfsExtAttr_Removexattr_res Removexattr;
            struct kl_VfsExtAttr_Lremovexattr_res Lremovexattr;
            struct kl_VfsExtAttr_Fremovexattr_res Fremovexattr;
        } kl_VfsExtAttr_res;
static inline
nk_err_t kl_VfsExtAttr_interface_dispatch(struct kl_VfsExtAttr *impl,
                                          nk_iid_t iid,
                                          const
                                          struct nk_message *req,
                                          const
                                          struct nk_arena *req_arena,
                                          struct nk_message *res,
                                          struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case kl_VfsExtAttr_Setxattr_mid:
            {
                struct kl_VfsExtAttr_Setxattr_res
                *res_ =
                (struct kl_VfsExtAttr_Setxattr_res *) res;
                
                rc = impl->ops->Setxattr(impl,
                                         (const
                                          struct kl_VfsExtAttr_Setxattr_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Setxattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Lsetxattr_mid:
            {
                struct kl_VfsExtAttr_Lsetxattr_res
                *res_ =
                (struct kl_VfsExtAttr_Lsetxattr_res *) res;
                
                rc = impl->ops->Lsetxattr(impl,
                                          (const
                                           struct kl_VfsExtAttr_Lsetxattr_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Lsetxattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Fsetxattr_mid:
            {
                struct kl_VfsExtAttr_Fsetxattr_res
                *res_ =
                (struct kl_VfsExtAttr_Fsetxattr_res *) res;
                
                rc = impl->ops->Fsetxattr(impl,
                                          (const
                                           struct kl_VfsExtAttr_Fsetxattr_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Fsetxattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Getxattr_mid:
            {
                struct kl_VfsExtAttr_Getxattr_res
                *res_ =
                (struct kl_VfsExtAttr_Getxattr_res *) res;
                
                rc = impl->ops->Getxattr(impl,
                                         (const
                                          struct kl_VfsExtAttr_Getxattr_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Getxattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Lgetxattr_mid:
            {
                struct kl_VfsExtAttr_Lgetxattr_res
                *res_ =
                (struct kl_VfsExtAttr_Lgetxattr_res *) res;
                
                rc = impl->ops->Lgetxattr(impl,
                                          (const
                                           struct kl_VfsExtAttr_Lgetxattr_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Lgetxattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Fgetxattr_mid:
            {
                struct kl_VfsExtAttr_Fgetxattr_res
                *res_ =
                (struct kl_VfsExtAttr_Fgetxattr_res *) res;
                
                rc = impl->ops->Fgetxattr(impl,
                                          (const
                                           struct kl_VfsExtAttr_Fgetxattr_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Fgetxattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Listxattr_mid:
            {
                struct kl_VfsExtAttr_Listxattr_res
                *res_ =
                (struct kl_VfsExtAttr_Listxattr_res *) res;
                
                rc = impl->ops->Listxattr(impl,
                                          (const
                                           struct kl_VfsExtAttr_Listxattr_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Listxattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Llistxattr_mid:
            {
                struct kl_VfsExtAttr_Llistxattr_res
                *res_ =
                (struct kl_VfsExtAttr_Llistxattr_res *) res;
                
                rc = impl->ops->Llistxattr(impl,
                                           (const
                                            struct kl_VfsExtAttr_Llistxattr_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Llistxattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Flistxattr_mid:
            {
                struct kl_VfsExtAttr_Flistxattr_res
                *res_ =
                (struct kl_VfsExtAttr_Flistxattr_res *) res;
                
                rc = impl->ops->Flistxattr(impl,
                                           (const
                                            struct kl_VfsExtAttr_Flistxattr_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Flistxattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Removexattr_mid:
            {
                struct kl_VfsExtAttr_Removexattr_res
                *res_ =
                (struct kl_VfsExtAttr_Removexattr_res *) res;
                
                rc = impl->ops->Removexattr(impl,
                                            (const
                                             struct kl_VfsExtAttr_Removexattr_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Removexattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Lremovexattr_mid:
            {
                struct kl_VfsExtAttr_Lremovexattr_res
                *res_ =
                (struct kl_VfsExtAttr_Lremovexattr_res *) res;
                
                rc = impl->ops->Lremovexattr(impl,
                                             (const
                                              struct kl_VfsExtAttr_Lremovexattr_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Lremovexattr_res_handles);
                }
                break;
            }
            
          case kl_VfsExtAttr_Fremovexattr_mid:
            {
                struct kl_VfsExtAttr_Fremovexattr_res
                *res_ =
                (struct kl_VfsExtAttr_Fremovexattr_res *) res;
                
                rc = impl->ops->Fremovexattr(impl,
                                             (const
                                              struct kl_VfsExtAttr_Fremovexattr_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsExtAttr_Fremovexattr_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsExtAttr_req kl_VfsExtAttr_req
#define VfsExtAttr_res kl_VfsExtAttr_res
#define VfsExtAttr_interface_dispatch kl_VfsExtAttr_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsExtAttr__SERVER__ */

#ifndef __kl__VfsBPFilter__SERVER__
#define __kl__VfsBPFilter__SERVER__
typedef union kl_VfsBPFilter_req {
            struct nk_message base_;
            struct kl_VfsBPFilter_SetFilter_req SetFilter;
        } kl_VfsBPFilter_req;
typedef union kl_VfsBPFilter_res {
            struct nk_message base_;
            struct kl_VfsBPFilter_SetFilter_res SetFilter;
        } kl_VfsBPFilter_res;
static inline
nk_err_t kl_VfsBPFilter_interface_dispatch(struct kl_VfsBPFilter *impl,
                                           nk_iid_t iid,
                                           const
                                           struct nk_message *req,
                                           const
                                           struct nk_arena *req_arena,
                                           struct nk_message *res,
                                           struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case kl_VfsBPFilter_SetFilter_mid:
            {
                struct kl_VfsBPFilter_SetFilter_res
                *res_ =
                (struct kl_VfsBPFilter_SetFilter_res *) res;
                
                rc = impl->ops->SetFilter(impl,
                                          (const
                                           struct kl_VfsBPFilter_SetFilter_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsBPFilter_SetFilter_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsBPFilter_req kl_VfsBPFilter_req
#define VfsBPFilter_res kl_VfsBPFilter_res
#define VfsBPFilter_interface_dispatch kl_VfsBPFilter_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsBPFilter__SERVER__ */

#ifndef __kl__VfsNPFilter__SERVER__
#define __kl__VfsNPFilter__SERVER__
typedef union kl_VfsNPFilter_req {
            struct nk_message base_;
            struct kl_VfsNPFilter_Load_req Load;
            struct kl_VfsNPFilter_Save_req Save;
            struct kl_VfsNPFilter_Stats_req Stats;
            struct kl_VfsNPFilter_TableEnt_req TableEnt;
            struct kl_VfsNPFilter_Rule_req Rule;
        } kl_VfsNPFilter_req;
typedef union kl_VfsNPFilter_res {
            struct nk_message base_;
            struct kl_VfsNPFilter_Load_res Load;
            struct kl_VfsNPFilter_Save_res Save;
            struct kl_VfsNPFilter_Stats_res Stats;
            struct kl_VfsNPFilter_TableEnt_res TableEnt;
            struct kl_VfsNPFilter_Rule_res Rule;
        } kl_VfsNPFilter_res;
static inline
nk_err_t kl_VfsNPFilter_interface_dispatch(struct kl_VfsNPFilter *impl,
                                           nk_iid_t iid,
                                           const
                                           struct nk_message *req,
                                           const
                                           struct nk_arena *req_arena,
                                           struct nk_message *res,
                                           struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case kl_VfsNPFilter_Load_mid:
            {
                struct kl_VfsNPFilter_Load_res
                *res_ =
                (struct kl_VfsNPFilter_Load_res *) res;
                
                rc = impl->ops->Load(impl, (const
                                            struct kl_VfsNPFilter_Load_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNPFilter_Load_res_handles);
                }
                break;
            }
            
          case kl_VfsNPFilter_Save_mid:
            {
                struct kl_VfsNPFilter_Save_res
                *res_ =
                (struct kl_VfsNPFilter_Save_res *) res;
                
                rc = impl->ops->Save(impl, (const
                                            struct kl_VfsNPFilter_Save_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNPFilter_Save_res_handles);
                }
                break;
            }
            
          case kl_VfsNPFilter_Stats_mid:
            {
                struct kl_VfsNPFilter_Stats_res
                *res_ =
                (struct kl_VfsNPFilter_Stats_res *) res;
                
                rc = impl->ops->Stats(impl, (const
                                             struct kl_VfsNPFilter_Stats_req *) req,
                                      req_arena,
                                      res_,
                                      res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNPFilter_Stats_res_handles);
                }
                break;
            }
            
          case kl_VfsNPFilter_TableEnt_mid:
            {
                struct kl_VfsNPFilter_TableEnt_res
                *res_ =
                (struct kl_VfsNPFilter_TableEnt_res *) res;
                
                rc = impl->ops->TableEnt(impl,
                                         (const
                                          struct kl_VfsNPFilter_TableEnt_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNPFilter_TableEnt_res_handles);
                }
                break;
            }
            
          case kl_VfsNPFilter_Rule_mid:
            {
                struct kl_VfsNPFilter_Rule_res
                *res_ =
                (struct kl_VfsNPFilter_Rule_res *) res;
                
                rc = impl->ops->Rule(impl, (const
                                            struct kl_VfsNPFilter_Rule_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNPFilter_Rule_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsNPFilter_req kl_VfsNPFilter_req
#define VfsNPFilter_res kl_VfsNPFilter_res
#define VfsNPFilter_interface_dispatch kl_VfsNPFilter_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsNPFilter__SERVER__ */

#ifndef __kl__VfsNetConfig__SERVER__
#define __kl__VfsNetConfig__SERVER__
typedef union kl_VfsNetConfig_req {
            struct nk_message base_;
            struct kl_VfsNetConfig_CreateIf_req CreateIf;
            struct kl_VfsNetConfig_DestroyIf_req DestroyIf;
            struct kl_VfsNetConfig_SetFlags_req SetFlags;
            struct kl_VfsNetConfig_GetFlags_req GetFlags;
            struct kl_VfsNetConfig_SetIpAddr_req SetIpAddr;
            struct kl_VfsNetConfig_GetIpAddr_req GetIpAddr;
            struct kl_VfsNetConfig_SetNetmask_req SetNetmask;
            struct kl_VfsNetConfig_GetNetmask_req GetNetmask;
            struct kl_VfsNetConfig_SetBroadcast_req SetBroadcast;
            struct kl_VfsNetConfig_GetBroadcast_req GetBroadcast;
            struct kl_VfsNetConfig_SetDstAddr_req SetDstAddr;
            struct kl_VfsNetConfig_GetDstAddr_req GetDstAddr;
            struct kl_VfsNetConfig_AddIpAddr_req AddIpAddr;
            struct kl_VfsNetConfig_RemoveIpAddr_req RemoveIpAddr;
            struct kl_VfsNetConfig_AddRoute_req AddRoute;
            struct kl_VfsNetConfig_DelRoute_req DelRoute;
            struct kl_VfsNetConfig_SetVlan_req SetVlan;
            struct kl_VfsNetConfig_GetVlan_req GetVlan;
            struct kl_VfsNetConfig_GetActiveIfList_req GetActiveIfList;
            struct kl_VfsNetConfig_GetNumOfBytesAvail_req GetNumOfBytesAvail;
            struct kl_VfsNetConfig_GetIfAFlags_req GetIfAFlags;
            struct kl_VfsNetConfig_PppoeSetParams_req PppoeSetParams;
            struct kl_VfsNetConfig_PppoeGetParams_req PppoeGetParams;
            struct kl_VfsNetConfig_PppoeGetSession_req PppoeGetSession;
            struct kl_VfsNetConfig_SpppGetStatus_req SpppGetStatus;
            struct kl_VfsNetConfig_SpppSetAuthCfg_req SpppSetAuthCfg;
            struct kl_VfsNetConfig_SpppGetAuthCfg_req SpppGetAuthCfg;
            struct kl_VfsNetConfig_SpppSetAuthFailure_req SpppSetAuthFailure;
            struct kl_VfsNetConfig_SpppGetAuthFailures_req SpppGetAuthFailures;
            struct kl_VfsNetConfig_Sysctl_req Sysctl;
            struct kl_VfsNetConfig_RtDump_req RtDump;
            struct kl_VfsNetConfig_RtIflist_req RtIflist;
            struct kl_VfsNetConfig_IpctlForwarding_req IpctlForwarding;
            struct kl_VfsNetConfig_GetMedia_req GetMedia;
            struct kl_VfsNetConfig_SetMedia_req SetMedia;
            struct kl_VfsNetConfig_DeleteIfAddr_req DeleteIfAddr;
            struct kl_VfsNetConfig_AddIfAddr_req AddIfAddr;
            struct kl_VfsNetConfig_BridgeGet_req BridgeGet;
            struct kl_VfsNetConfig_BridgeSet_req BridgeSet;
            struct kl_VfsNetConfig_DnetIo_req DnetIo;
        } kl_VfsNetConfig_req;
typedef union kl_VfsNetConfig_res {
            struct nk_message base_;
            struct kl_VfsNetConfig_CreateIf_res CreateIf;
            struct kl_VfsNetConfig_DestroyIf_res DestroyIf;
            struct kl_VfsNetConfig_SetFlags_res SetFlags;
            struct kl_VfsNetConfig_GetFlags_res GetFlags;
            struct kl_VfsNetConfig_SetIpAddr_res SetIpAddr;
            struct kl_VfsNetConfig_GetIpAddr_res GetIpAddr;
            struct kl_VfsNetConfig_SetNetmask_res SetNetmask;
            struct kl_VfsNetConfig_GetNetmask_res GetNetmask;
            struct kl_VfsNetConfig_SetBroadcast_res SetBroadcast;
            struct kl_VfsNetConfig_GetBroadcast_res GetBroadcast;
            struct kl_VfsNetConfig_SetDstAddr_res SetDstAddr;
            struct kl_VfsNetConfig_GetDstAddr_res GetDstAddr;
            struct kl_VfsNetConfig_AddIpAddr_res AddIpAddr;
            struct kl_VfsNetConfig_RemoveIpAddr_res RemoveIpAddr;
            struct kl_VfsNetConfig_AddRoute_res AddRoute;
            struct kl_VfsNetConfig_DelRoute_res DelRoute;
            struct kl_VfsNetConfig_SetVlan_res SetVlan;
            struct kl_VfsNetConfig_GetVlan_res GetVlan;
            struct kl_VfsNetConfig_GetActiveIfList_res GetActiveIfList;
            struct kl_VfsNetConfig_GetNumOfBytesAvail_res GetNumOfBytesAvail;
            struct kl_VfsNetConfig_GetIfAFlags_res GetIfAFlags;
            struct kl_VfsNetConfig_PppoeSetParams_res PppoeSetParams;
            struct kl_VfsNetConfig_PppoeGetParams_res PppoeGetParams;
            struct kl_VfsNetConfig_PppoeGetSession_res PppoeGetSession;
            struct kl_VfsNetConfig_SpppGetStatus_res SpppGetStatus;
            struct kl_VfsNetConfig_SpppSetAuthCfg_res SpppSetAuthCfg;
            struct kl_VfsNetConfig_SpppGetAuthCfg_res SpppGetAuthCfg;
            struct kl_VfsNetConfig_SpppSetAuthFailure_res SpppSetAuthFailure;
            struct kl_VfsNetConfig_SpppGetAuthFailures_res SpppGetAuthFailures;
            struct kl_VfsNetConfig_Sysctl_res Sysctl;
            struct kl_VfsNetConfig_RtDump_res RtDump;
            struct kl_VfsNetConfig_RtIflist_res RtIflist;
            struct kl_VfsNetConfig_IpctlForwarding_res IpctlForwarding;
            struct kl_VfsNetConfig_GetMedia_res GetMedia;
            struct kl_VfsNetConfig_SetMedia_res SetMedia;
            struct kl_VfsNetConfig_DeleteIfAddr_res DeleteIfAddr;
            struct kl_VfsNetConfig_AddIfAddr_res AddIfAddr;
            struct kl_VfsNetConfig_BridgeGet_res BridgeGet;
            struct kl_VfsNetConfig_BridgeSet_res BridgeSet;
            struct kl_VfsNetConfig_DnetIo_res DnetIo;
        } kl_VfsNetConfig_res;
static inline
nk_err_t kl_VfsNetConfig_interface_dispatch(struct kl_VfsNetConfig *impl,
                                            nk_iid_t iid,
                                            const
                                            struct nk_message *req,
                                            const
                                            struct nk_arena *req_arena,
                                            struct nk_message *res,
                                            struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case kl_VfsNetConfig_CreateIf_mid:
            {
                struct kl_VfsNetConfig_CreateIf_res
                *res_ =
                (struct kl_VfsNetConfig_CreateIf_res *) res;
                
                rc = impl->ops->CreateIf(impl,
                                         (const
                                          struct kl_VfsNetConfig_CreateIf_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_CreateIf_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_DestroyIf_mid:
            {
                struct kl_VfsNetConfig_DestroyIf_res
                *res_ =
                (struct kl_VfsNetConfig_DestroyIf_res *) res;
                
                rc = impl->ops->DestroyIf(impl,
                                          (const
                                           struct kl_VfsNetConfig_DestroyIf_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_DestroyIf_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SetFlags_mid:
            {
                struct kl_VfsNetConfig_SetFlags_res
                *res_ =
                (struct kl_VfsNetConfig_SetFlags_res *) res;
                
                rc = impl->ops->SetFlags(impl,
                                         (const
                                          struct kl_VfsNetConfig_SetFlags_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SetFlags_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetFlags_mid:
            {
                struct kl_VfsNetConfig_GetFlags_res
                *res_ =
                (struct kl_VfsNetConfig_GetFlags_res *) res;
                
                rc = impl->ops->GetFlags(impl,
                                         (const
                                          struct kl_VfsNetConfig_GetFlags_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetFlags_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SetIpAddr_mid:
            {
                struct kl_VfsNetConfig_SetIpAddr_res
                *res_ =
                (struct kl_VfsNetConfig_SetIpAddr_res *) res;
                
                rc = impl->ops->SetIpAddr(impl,
                                          (const
                                           struct kl_VfsNetConfig_SetIpAddr_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SetIpAddr_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetIpAddr_mid:
            {
                struct kl_VfsNetConfig_GetIpAddr_res
                *res_ =
                (struct kl_VfsNetConfig_GetIpAddr_res *) res;
                
                rc = impl->ops->GetIpAddr(impl,
                                          (const
                                           struct kl_VfsNetConfig_GetIpAddr_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetIpAddr_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SetNetmask_mid:
            {
                struct kl_VfsNetConfig_SetNetmask_res
                *res_ =
                (struct kl_VfsNetConfig_SetNetmask_res *) res;
                
                rc = impl->ops->SetNetmask(impl,
                                           (const
                                            struct kl_VfsNetConfig_SetNetmask_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SetNetmask_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetNetmask_mid:
            {
                struct kl_VfsNetConfig_GetNetmask_res
                *res_ =
                (struct kl_VfsNetConfig_GetNetmask_res *) res;
                
                rc = impl->ops->GetNetmask(impl,
                                           (const
                                            struct kl_VfsNetConfig_GetNetmask_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetNetmask_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SetBroadcast_mid:
            {
                struct kl_VfsNetConfig_SetBroadcast_res
                *res_ =
                (struct kl_VfsNetConfig_SetBroadcast_res *) res;
                
                rc = impl->ops->SetBroadcast(impl,
                                             (const
                                              struct kl_VfsNetConfig_SetBroadcast_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SetBroadcast_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetBroadcast_mid:
            {
                struct kl_VfsNetConfig_GetBroadcast_res
                *res_ =
                (struct kl_VfsNetConfig_GetBroadcast_res *) res;
                
                rc = impl->ops->GetBroadcast(impl,
                                             (const
                                              struct kl_VfsNetConfig_GetBroadcast_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetBroadcast_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SetDstAddr_mid:
            {
                struct kl_VfsNetConfig_SetDstAddr_res
                *res_ =
                (struct kl_VfsNetConfig_SetDstAddr_res *) res;
                
                rc = impl->ops->SetDstAddr(impl,
                                           (const
                                            struct kl_VfsNetConfig_SetDstAddr_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SetDstAddr_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetDstAddr_mid:
            {
                struct kl_VfsNetConfig_GetDstAddr_res
                *res_ =
                (struct kl_VfsNetConfig_GetDstAddr_res *) res;
                
                rc = impl->ops->GetDstAddr(impl,
                                           (const
                                            struct kl_VfsNetConfig_GetDstAddr_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetDstAddr_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_AddIpAddr_mid:
            {
                struct kl_VfsNetConfig_AddIpAddr_res
                *res_ =
                (struct kl_VfsNetConfig_AddIpAddr_res *) res;
                
                rc = impl->ops->AddIpAddr(impl,
                                          (const
                                           struct kl_VfsNetConfig_AddIpAddr_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_AddIpAddr_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_RemoveIpAddr_mid:
            {
                struct kl_VfsNetConfig_RemoveIpAddr_res
                *res_ =
                (struct kl_VfsNetConfig_RemoveIpAddr_res *) res;
                
                rc = impl->ops->RemoveIpAddr(impl,
                                             (const
                                              struct kl_VfsNetConfig_RemoveIpAddr_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_RemoveIpAddr_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_AddRoute_mid:
            {
                struct kl_VfsNetConfig_AddRoute_res
                *res_ =
                (struct kl_VfsNetConfig_AddRoute_res *) res;
                
                rc = impl->ops->AddRoute(impl,
                                         (const
                                          struct kl_VfsNetConfig_AddRoute_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_AddRoute_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_DelRoute_mid:
            {
                struct kl_VfsNetConfig_DelRoute_res
                *res_ =
                (struct kl_VfsNetConfig_DelRoute_res *) res;
                
                rc = impl->ops->DelRoute(impl,
                                         (const
                                          struct kl_VfsNetConfig_DelRoute_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_DelRoute_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SetVlan_mid:
            {
                struct kl_VfsNetConfig_SetVlan_res
                *res_ =
                (struct kl_VfsNetConfig_SetVlan_res *) res;
                
                rc = impl->ops->SetVlan(impl,
                                        (const
                                         struct kl_VfsNetConfig_SetVlan_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SetVlan_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetVlan_mid:
            {
                struct kl_VfsNetConfig_GetVlan_res
                *res_ =
                (struct kl_VfsNetConfig_GetVlan_res *) res;
                
                rc = impl->ops->GetVlan(impl,
                                        (const
                                         struct kl_VfsNetConfig_GetVlan_req *) req,
                                        req_arena,
                                        res_,
                                        res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetVlan_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetActiveIfList_mid:
            {
                struct kl_VfsNetConfig_GetActiveIfList_res
                *res_ =
                (struct kl_VfsNetConfig_GetActiveIfList_res *) res;
                
                rc =
                    impl->ops->GetActiveIfList(impl,
                                               (const
                                                struct kl_VfsNetConfig_GetActiveIfList_req *) req,
                                               req_arena,
                                               res_,
                                               res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetActiveIfList_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetNumOfBytesAvail_mid:
            {
                struct kl_VfsNetConfig_GetNumOfBytesAvail_res
                *res_ =
                (struct kl_VfsNetConfig_GetNumOfBytesAvail_res *) res;
                
                rc =
                    impl->ops->GetNumOfBytesAvail(impl,
                                                  (const
                                                   struct kl_VfsNetConfig_GetNumOfBytesAvail_req *) req,
                                                  req_arena,
                                                  res_,
                                                  res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetNumOfBytesAvail_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetIfAFlags_mid:
            {
                struct kl_VfsNetConfig_GetIfAFlags_res
                *res_ =
                (struct kl_VfsNetConfig_GetIfAFlags_res *) res;
                
                rc = impl->ops->GetIfAFlags(impl,
                                            (const
                                             struct kl_VfsNetConfig_GetIfAFlags_req *) req,
                                            req_arena,
                                            res_,
                                            res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetIfAFlags_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_PppoeSetParams_mid:
            {
                struct kl_VfsNetConfig_PppoeSetParams_res
                *res_ =
                (struct kl_VfsNetConfig_PppoeSetParams_res *) res;
                
                rc =
                    impl->ops->PppoeSetParams(impl,
                                              (const
                                               struct kl_VfsNetConfig_PppoeSetParams_req *) req,
                                              req_arena,
                                              res_,
                                              res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_PppoeSetParams_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_PppoeGetParams_mid:
            {
                struct kl_VfsNetConfig_PppoeGetParams_res
                *res_ =
                (struct kl_VfsNetConfig_PppoeGetParams_res *) res;
                
                rc =
                    impl->ops->PppoeGetParams(impl,
                                              (const
                                               struct kl_VfsNetConfig_PppoeGetParams_req *) req,
                                              req_arena,
                                              res_,
                                              res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_PppoeGetParams_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_PppoeGetSession_mid:
            {
                struct kl_VfsNetConfig_PppoeGetSession_res
                *res_ =
                (struct kl_VfsNetConfig_PppoeGetSession_res *) res;
                
                rc =
                    impl->ops->PppoeGetSession(impl,
                                               (const
                                                struct kl_VfsNetConfig_PppoeGetSession_req *) req,
                                               req_arena,
                                               res_,
                                               res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_PppoeGetSession_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SpppGetStatus_mid:
            {
                struct kl_VfsNetConfig_SpppGetStatus_res
                *res_ =
                (struct kl_VfsNetConfig_SpppGetStatus_res *) res;
                
                rc =
                    impl->ops->SpppGetStatus(impl,
                                             (const
                                              struct kl_VfsNetConfig_SpppGetStatus_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SpppGetStatus_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SpppSetAuthCfg_mid:
            {
                struct kl_VfsNetConfig_SpppSetAuthCfg_res
                *res_ =
                (struct kl_VfsNetConfig_SpppSetAuthCfg_res *) res;
                
                rc =
                    impl->ops->SpppSetAuthCfg(impl,
                                              (const
                                               struct kl_VfsNetConfig_SpppSetAuthCfg_req *) req,
                                              req_arena,
                                              res_,
                                              res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SpppSetAuthCfg_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SpppGetAuthCfg_mid:
            {
                struct kl_VfsNetConfig_SpppGetAuthCfg_res
                *res_ =
                (struct kl_VfsNetConfig_SpppGetAuthCfg_res *) res;
                
                rc =
                    impl->ops->SpppGetAuthCfg(impl,
                                              (const
                                               struct kl_VfsNetConfig_SpppGetAuthCfg_req *) req,
                                              req_arena,
                                              res_,
                                              res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SpppGetAuthCfg_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SpppSetAuthFailure_mid:
            {
                struct kl_VfsNetConfig_SpppSetAuthFailure_res
                *res_ =
                (struct kl_VfsNetConfig_SpppSetAuthFailure_res *) res;
                
                rc =
                    impl->ops->SpppSetAuthFailure(impl,
                                                  (const
                                                   struct kl_VfsNetConfig_SpppSetAuthFailure_req *) req,
                                                  req_arena,
                                                  res_,
                                                  res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SpppSetAuthFailure_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SpppGetAuthFailures_mid:
            {
                struct kl_VfsNetConfig_SpppGetAuthFailures_res
                *res_ =
                (struct kl_VfsNetConfig_SpppGetAuthFailures_res *) res;
                
                rc =
                    impl->ops->SpppGetAuthFailures(impl,
                                                   (const
                                                    struct kl_VfsNetConfig_SpppGetAuthFailures_req *) req,
                                                   req_arena,
                                                   res_,
                                                   res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SpppGetAuthFailures_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_Sysctl_mid:
            {
                struct kl_VfsNetConfig_Sysctl_res
                *res_ =
                (struct kl_VfsNetConfig_Sysctl_res *) res;
                
                rc = impl->ops->Sysctl(impl,
                                       (const
                                        struct kl_VfsNetConfig_Sysctl_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_Sysctl_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_RtDump_mid:
            {
                struct kl_VfsNetConfig_RtDump_res
                *res_ =
                (struct kl_VfsNetConfig_RtDump_res *) res;
                
                rc = impl->ops->RtDump(impl,
                                       (const
                                        struct kl_VfsNetConfig_RtDump_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_RtDump_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_RtIflist_mid:
            {
                struct kl_VfsNetConfig_RtIflist_res
                *res_ =
                (struct kl_VfsNetConfig_RtIflist_res *) res;
                
                rc = impl->ops->RtIflist(impl,
                                         (const
                                          struct kl_VfsNetConfig_RtIflist_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_RtIflist_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_IpctlForwarding_mid:
            {
                struct kl_VfsNetConfig_IpctlForwarding_res
                *res_ =
                (struct kl_VfsNetConfig_IpctlForwarding_res *) res;
                
                rc =
                    impl->ops->IpctlForwarding(impl,
                                               (const
                                                struct kl_VfsNetConfig_IpctlForwarding_req *) req,
                                               req_arena,
                                               res_,
                                               res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_IpctlForwarding_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_GetMedia_mid:
            {
                struct kl_VfsNetConfig_GetMedia_res
                *res_ =
                (struct kl_VfsNetConfig_GetMedia_res *) res;
                
                rc = impl->ops->GetMedia(impl,
                                         (const
                                          struct kl_VfsNetConfig_GetMedia_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_GetMedia_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_SetMedia_mid:
            {
                struct kl_VfsNetConfig_SetMedia_res
                *res_ =
                (struct kl_VfsNetConfig_SetMedia_res *) res;
                
                rc = impl->ops->SetMedia(impl,
                                         (const
                                          struct kl_VfsNetConfig_SetMedia_req *) req,
                                         req_arena,
                                         res_,
                                         res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_SetMedia_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_DeleteIfAddr_mid:
            {
                struct kl_VfsNetConfig_DeleteIfAddr_res
                *res_ =
                (struct kl_VfsNetConfig_DeleteIfAddr_res *) res;
                
                rc = impl->ops->DeleteIfAddr(impl,
                                             (const
                                              struct kl_VfsNetConfig_DeleteIfAddr_req *) req,
                                             req_arena,
                                             res_,
                                             res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_DeleteIfAddr_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_AddIfAddr_mid:
            {
                struct kl_VfsNetConfig_AddIfAddr_res
                *res_ =
                (struct kl_VfsNetConfig_AddIfAddr_res *) res;
                
                rc = impl->ops->AddIfAddr(impl,
                                          (const
                                           struct kl_VfsNetConfig_AddIfAddr_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_AddIfAddr_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_BridgeGet_mid:
            {
                struct kl_VfsNetConfig_BridgeGet_res
                *res_ =
                (struct kl_VfsNetConfig_BridgeGet_res *) res;
                
                rc = impl->ops->BridgeGet(impl,
                                          (const
                                           struct kl_VfsNetConfig_BridgeGet_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_BridgeGet_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_BridgeSet_mid:
            {
                struct kl_VfsNetConfig_BridgeSet_res
                *res_ =
                (struct kl_VfsNetConfig_BridgeSet_res *) res;
                
                rc = impl->ops->BridgeSet(impl,
                                          (const
                                           struct kl_VfsNetConfig_BridgeSet_req *) req,
                                          req_arena,
                                          res_,
                                          res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_BridgeSet_res_handles);
                }
                break;
            }
            
          case kl_VfsNetConfig_DnetIo_mid:
            {
                struct kl_VfsNetConfig_DnetIo_res
                *res_ =
                (struct kl_VfsNetConfig_DnetIo_res *) res;
                
                rc = impl->ops->DnetIo(impl,
                                       (const
                                        struct kl_VfsNetConfig_DnetIo_req *) req,
                                       req_arena,
                                       res_,
                                       res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsNetConfig_DnetIo_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsNetConfig_req kl_VfsNetConfig_req
#define VfsNetConfig_res kl_VfsNetConfig_res
#define VfsNetConfig_interface_dispatch kl_VfsNetConfig_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsNetConfig__SERVER__ */

#ifndef __kl__VfsACL__SERVER__
#define __kl__VfsACL__SERVER__
typedef union kl_VfsACL_req {
            struct nk_message base_;
            struct kl_VfsACL_AclSetFile_req AclSetFile;
            struct kl_VfsACL_AclGetFile_req AclGetFile;
            struct kl_VfsACL_AclDeleteDefFile_req AclDeleteDefFile;
        } kl_VfsACL_req;
typedef union kl_VfsACL_res {
            struct nk_message base_;
            struct kl_VfsACL_AclSetFile_res AclSetFile;
            struct kl_VfsACL_AclGetFile_res AclGetFile;
            struct kl_VfsACL_AclDeleteDefFile_res AclDeleteDefFile;
        } kl_VfsACL_res;
static inline
nk_err_t kl_VfsACL_interface_dispatch(struct kl_VfsACL *impl,
                                      nk_iid_t iid,
                                      const
                                      struct nk_message *req,
                                      const
                                      struct nk_arena *req_arena,
                                      struct nk_message *res,
                                      struct nk_arena *res_arena)
{
    nk_err_t rc = NK_ENOENT;
    nk_iid_t req_iid;
    nk_mid_t req_mid;
    
    nk_assert(impl != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(impl);
    nk_unused(req_arena);
    nk_unused(res_arena);
    if (req->iid == iid) {
        req_iid = req->iid;
        req_mid = req->mid;
        switch (req->mid) {
            
          case kl_VfsACL_AclSetFile_mid:
            {
                struct kl_VfsACL_AclSetFile_res
                *res_ =
                (struct kl_VfsACL_AclSetFile_res *) res;
                
                rc = impl->ops->AclSetFile(impl,
                                           (const
                                            struct kl_VfsACL_AclSetFile_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsACL_AclSetFile_res_handles);
                }
                break;
            }
            
          case kl_VfsACL_AclGetFile_mid:
            {
                struct kl_VfsACL_AclGetFile_res
                *res_ =
                (struct kl_VfsACL_AclGetFile_res *) res;
                
                rc = impl->ops->AclGetFile(impl,
                                           (const
                                            struct kl_VfsACL_AclGetFile_req *) req,
                                           req_arena,
                                           res_,
                                           res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsACL_AclGetFile_res_handles);
                }
                break;
            }
            
          case kl_VfsACL_AclDeleteDefFile_mid:
            {
                struct kl_VfsACL_AclDeleteDefFile_res
                *res_ =
                (struct kl_VfsACL_AclDeleteDefFile_res *) res;
                
                rc =
                    impl->ops->AclDeleteDefFile(impl,
                                                (const
                                                 struct kl_VfsACL_AclDeleteDefFile_req *) req,
                                                req_arena,
                                                res_,
                                                res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_VfsACL_AclDeleteDefFile_res_handles);
                }
                break;
            }
            
          default:
            ;
        }
        res->iid = req_iid;
        res->mid = req_mid;
    }
    return rc;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define VfsACL_req kl_VfsACL_req
#define VfsACL_res kl_VfsACL_res
#define VfsACL_interface_dispatch kl_VfsACL_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__VfsACL__SERVER__ */

#ifndef __kl__Vfs__COMPONENT_SERVER_TYPES__
#define __kl__Vfs__COMPONENT_SERVER_TYPES__
typedef struct kl_Vfs_component {
            struct kl_VfsFilesystem *server;
            struct kl_VfsNetConfig *netcfg;
            struct kl_VfsBPFilter *bpfcfg;
            struct kl_VfsNPFilter *npfcfg;
            struct kl_VfsExtAttr *xattrcfg;
            struct kl_VfsACL *aclcfg;
        } kl_Vfs_component;
#endif /* __kl__Vfs__COMPONENT_SERVER_TYPES__ */

#ifndef __kl__Vfs__COMPONENT_SERVER_DISPATCHER__
#define __kl__Vfs__COMPONENT_SERVER_DISPATCHER__
static inline
void kl_Vfs_component_init(struct kl_Vfs_component *self,
                           struct kl_VfsFilesystem *server,
                           struct kl_VfsNetConfig *netcfg,
                           struct kl_VfsBPFilter *bpfcfg,
                           struct kl_VfsNPFilter *npfcfg,
                           struct kl_VfsExtAttr *xattrcfg,
                           struct kl_VfsACL *aclcfg)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->server = server;
    self->netcfg = netcfg;
    self->bpfcfg = bpfcfg;
    self->npfcfg = npfcfg;
    self->xattrcfg = xattrcfg;
    self->aclcfg = aclcfg;
}
typedef union kl_Vfs_component_req {
            struct nk_message base_;
            kl_VfsFilesystem_req server;
            kl_VfsNetConfig_req netcfg;
            kl_VfsBPFilter_req bpfcfg;
            kl_VfsNPFilter_req npfcfg;
            kl_VfsExtAttr_req xattrcfg;
            kl_VfsACL_req aclcfg;
        } kl_Vfs_component_req;
typedef union kl_Vfs_component_res {
            struct nk_message base_;
            kl_VfsFilesystem_res server;
            kl_VfsNetConfig_res netcfg;
            kl_VfsBPFilter_res bpfcfg;
            kl_VfsNPFilter_res npfcfg;
            kl_VfsExtAttr_res xattrcfg;
            kl_VfsACL_res aclcfg;
        } kl_Vfs_component_res;
static inline
nk_err_t kl_Vfs_component_dispatch(struct kl_Vfs_component *self,
                                   nk_iid_t iidOffset,
                                   const
                                   struct nk_message *req,
                                   const
                                   struct nk_arena *req_arena,
                                   struct nk_message *res,
                                   struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(self);
    nk_unused(req_arena);
    nk_unused(res);
    nk_unused(res_arena);
    if (req->iid < iidOffset)
        return NK_ENOENT;
    switch (req->iid - iidOffset) {
        
      case kl_Vfs_server_iid:
        return kl_VfsFilesystem_interface_dispatch(self->server,
                                                   req->iid,
                                                   req,
                                                   req_arena,
                                                   res,
                                                   res_arena);
        
      case kl_Vfs_netcfg_iid:
        return kl_VfsNetConfig_interface_dispatch(self->netcfg,
                                                  req->iid,
                                                  req,
                                                  req_arena,
                                                  res,
                                                  res_arena);
        
      case kl_Vfs_bpfcfg_iid:
        return kl_VfsBPFilter_interface_dispatch(self->bpfcfg,
                                                 req->iid,
                                                 req,
                                                 req_arena,
                                                 res,
                                                 res_arena);
        
      case kl_Vfs_npfcfg_iid:
        return kl_VfsNPFilter_interface_dispatch(self->npfcfg,
                                                 req->iid,
                                                 req,
                                                 req_arena,
                                                 res,
                                                 res_arena);
        
      case kl_Vfs_xattrcfg_iid:
        return kl_VfsExtAttr_interface_dispatch(self->xattrcfg,
                                                req->iid,
                                                req,
                                                req_arena,
                                                res,
                                                res_arena);
        
      case kl_Vfs_aclcfg_iid:
        return kl_VfsACL_interface_dispatch(self->aclcfg,
                                            req->iid,
                                            req,
                                            req_arena,
                                            res,
                                            res_arena);
        
      default:
        ;
    }
    return NK_ENOENT;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Vfs_component kl_Vfs_component
#define Vfs_component_init kl_Vfs_component_init
#define Vfs_component_req kl_Vfs_component_req
#define Vfs_component_res kl_Vfs_component_res
#define Vfs_component_dispatch kl_Vfs_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Vfs__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __vfs__NetVfs__COMPONENT_SERVER_TYPES__
#define __vfs__NetVfs__COMPONENT_SERVER_TYPES__
typedef struct vfs_NetVfs_component {
            struct kl_Vfs_component *vfs;
        } vfs_NetVfs_component;
#endif /* __vfs__NetVfs__COMPONENT_SERVER_TYPES__ */

#ifndef __vfs__NetVfs__COMPONENT_SERVER_DISPATCHER__
#define __vfs__NetVfs__COMPONENT_SERVER_DISPATCHER__
static inline
void vfs_NetVfs_component_init(struct vfs_NetVfs_component *self,
                               struct kl_Vfs_component *vfs)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->vfs = vfs;
}
typedef union vfs_NetVfs_component_req {
            struct nk_message base_;
            kl_VfsFilesystem_req vfs_server;
            kl_VfsNetConfig_req vfs_netcfg;
            kl_VfsBPFilter_req vfs_bpfcfg;
            kl_VfsNPFilter_req vfs_npfcfg;
            kl_VfsExtAttr_req vfs_xattrcfg;
            kl_VfsACL_req vfs_aclcfg;
        } vfs_NetVfs_component_req;
typedef union vfs_NetVfs_component_res {
            struct nk_message base_;
            kl_VfsFilesystem_res vfs_server;
            kl_VfsNetConfig_res vfs_netcfg;
            kl_VfsBPFilter_res vfs_bpfcfg;
            kl_VfsNPFilter_res vfs_npfcfg;
            kl_VfsExtAttr_res vfs_xattrcfg;
            kl_VfsACL_res vfs_aclcfg;
        } vfs_NetVfs_component_res;
static inline
nk_err_t vfs_NetVfs_component_dispatch(struct vfs_NetVfs_component *self,
                                       nk_iid_t iidOffset,
                                       const
                                       struct nk_message *req,
                                       const
                                       struct nk_arena *req_arena,
                                       struct nk_message *res,
                                       struct nk_arena *res_arena)
{
    nk_assert(self != NK_NULL);
    nk_assert(req != NK_NULL);
    nk_assert(res != NK_NULL);
    nk_unused(self);
    nk_unused(req_arena);
    nk_unused(res);
    nk_unused(res_arena);
    if (req->iid < iidOffset)
        return NK_ENOENT;
    switch (req->iid - iidOffset) {
        
      case vfs_NetVfs_vfs_server_iid:
        return kl_VfsFilesystem_interface_dispatch(self->vfs->server,
                                                   req->iid,
                                                   req,
                                                   req_arena,
                                                   res,
                                                   res_arena);
        
      case vfs_NetVfs_vfs_netcfg_iid:
        return kl_VfsNetConfig_interface_dispatch(self->vfs->netcfg,
                                                  req->iid,
                                                  req,
                                                  req_arena,
                                                  res,
                                                  res_arena);
        
      case vfs_NetVfs_vfs_bpfcfg_iid:
        return kl_VfsBPFilter_interface_dispatch(self->vfs->bpfcfg,
                                                 req->iid,
                                                 req,
                                                 req_arena,
                                                 res,
                                                 res_arena);
        
      case vfs_NetVfs_vfs_npfcfg_iid:
        return kl_VfsNPFilter_interface_dispatch(self->vfs->npfcfg,
                                                 req->iid,
                                                 req,
                                                 req_arena,
                                                 res,
                                                 res_arena);
        
      case vfs_NetVfs_vfs_xattrcfg_iid:
        return kl_VfsExtAttr_interface_dispatch(self->vfs->xattrcfg,
                                                req->iid,
                                                req,
                                                req_arena,
                                                res,
                                                res_arena);
        
      case vfs_NetVfs_vfs_aclcfg_iid:
        return kl_VfsACL_interface_dispatch(self->vfs->aclcfg,
                                            req->iid,
                                            req,
                                            req_arena,
                                            res,
                                            res_arena);
        
      default:
        ;
    }
    return NK_ENOENT;
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NetVfs_component vfs_NetVfs_component
#define NetVfs_component_init vfs_NetVfs_component_init
#define NetVfs_component_req vfs_NetVfs_component_req
#define NetVfs_component_res vfs_NetVfs_component_res
#define NetVfs_component_dispatch vfs_NetVfs_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __vfs__NetVfs__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __vfs__NetVfs__ENTITY_SERVER__
#define __vfs__NetVfs__ENTITY_SERVER__
#define vfs_NetVfs_entity_res vfs_NetVfs_component_res
#define vfs_NetVfs_entity_req vfs_NetVfs_component_req
#define vfs_NetVfs_entity vfs_NetVfs_component
static inline
void vfs_NetVfs_entity_init(struct vfs_NetVfs_entity *self,
                            struct kl_Vfs_component *vfs)
{
    vfs_NetVfs_component_init(self, vfs);
}
static inline
nk_err_t vfs_NetVfs_entity_dispatch(struct vfs_NetVfs_entity *self,
                                    const
                                    struct nk_message *req,
                                    const
                                    struct nk_arena *req_arena,
                                    struct nk_message *res,
                                    struct nk_arena *res_arena)
{
    return vfs_NetVfs_component_dispatch(self, 0,
                                         req,
                                         req_arena,
                                         res,
                                         res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define NetVfs_entity vfs_NetVfs_entity
#define NetVfs_entity_init vfs_NetVfs_entity_init
#define NetVfs_entity_req vfs_NetVfs_entity_req
#define NetVfs_entity_res vfs_NetVfs_entity_res
#define NetVfs_entity_dispatch vfs_NetVfs_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __vfs__NetVfs__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

