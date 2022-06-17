#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef __client__Client__COMPONENT_INTERFACE__
#define __client__Client__COMPONENT_INTERFACE__
enum {
    client_Client_iidMax,
} ;
enum {
    client_Client_iidOffset = 0,
} ;
enum {
    client_Client_securityIidMax,
} ;
enum {
    client_Client_component_req_arena_size = 0,
    client_Client_component_res_arena_size = 0,
    client_Client_component_arena_size = 0,
    client_Client_component_req_handles = 0,
    client_Client_component_res_handles = 0,
    client_Client_component_err_handles = 0,
} ;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Client_iidMax client_Client_iidMax
#define Client_iidOffset client_Client_iidOffset
#define Client_securityIidMax client_Client_securityIidMax
#define Client_component_req_arena_size client_Client_component_req_arena_size
#define Client_component_res_arena_size client_Client_component_res_arena_size
#define Client_component_arena_size client_Client_component_arena_size
#define Client_component_req_handles client_Client_component_req_handles
#define Client_component_res_handles client_Client_component_res_handles
#define Client_component_err_handles client_Client_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __client__Client__COMPONENT_INTERFACE__ */

#ifndef __client__Client__ENTITY_INTERFACE__
#define __client__Client__ENTITY_INTERFACE__
enum {
    client_Client_entity_req_arena_size =
    client_Client_component_req_arena_size,
    client_Client_entity_res_arena_size =
    client_Client_component_res_arena_size,
    client_Client_entity_arena_size =
    client_Client_component_arena_size,
    client_Client_entity_req_handles =
    client_Client_component_req_handles,
    client_Client_entity_res_handles =
    client_Client_component_res_handles,
    client_Client_entity_err_handles =
    client_Client_component_err_handles,
} ;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Client_entity_req_arena_size client_Client_entity_req_arena_size
#define Client_entity_res_arena_size client_Client_entity_res_arena_size
#define Client_entity_arena_size client_Client_entity_arena_size
#define Client_entity_req_handles client_Client_entity_req_handles
#define Client_entity_res_handles client_Client_entity_res_handles
#define Client_entity_err_handles client_Client_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __client__Client__ENTITY_INTERFACE__ */

#pragma GCC diagnostic pop

