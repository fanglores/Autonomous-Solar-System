#pragma GCC diagnostic push
#include <nk/transport.h>
#include <nk/types.h>
#ifndef ____UInt8__RAWTYPE__
#define ____UInt8__RAWTYPE__
nk_static_assert(sizeof(nk_uint8_t) == 1, bad_nk_uint8_t_size);
nk_static_assert(nk_alignof(nk_uint8_t) == 1, bad_nk_uint8_t_align);
#endif /* ____UInt8__RAWTYPE__ */

#ifndef __kl__Env__INTERFACE__
#define __kl__Env__INTERFACE__
enum {
    kl_Env_Read_mid,
    kl_Env_mid_max,
} ;
enum {
    kl_Env_Read_req_name_size = 128,
    kl_Env_Read_res_args_size = 256,
    kl_Env_Read_res_args_elem_size = 256,
    kl_Env_Read_res_envs_size = 256,
    kl_Env_Read_res_envs_elem_size = 256,
    kl_Env_Read_req_arena_size = 128,
    kl_Env_Read_res_arena_size = 135168,
    kl_Env_Read_req_handles = 0,
    kl_Env_Read_res_handles = 0,
    kl_Env_Read_err_handles = 0,
    kl_Env_req_arena_size = 128,
    kl_Env_res_arena_size = 135168,
    kl_Env_arena_size = 135168,
    kl_Env_req_handles = 0,
    kl_Env_res_handles = 0,
    kl_Env_err_handles = 0,
} ;
typedef struct __nk_packed kl_Env_Read_req {
            __nk_alignas(8)
            struct nk_message base_;
            __nk_alignas(4) nk_ptr_t name;
        } kl_Env_Read_req;
#pragma pack(push, 8) /* kl_Env_Read_res */
typedef struct kl_Env_Read_err {
            __nk_alignas(8)
            struct nk_message base_;
        } kl_Env_Read_err;
typedef struct kl_Env_Read_res {
            union {
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t args;
                    __nk_alignas(4) nk_ptr_t envs;
                } ;
                struct {
                    __nk_alignas(8)
                    struct nk_message base_;
                    __nk_alignas(4) nk_ptr_t args;
                    __nk_alignas(4) nk_ptr_t envs;
                } res_;
                struct kl_Env_Read_err err_;
            } ;
        } kl_Env_Read_res;
#pragma pack(pop) /* kl_Env_Read_res */
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Env_Read_mid kl_Env_Read_mid
#define Env_mid_max kl_Env_mid_max
#define Env_Read_req_name_size kl_Env_Read_req_name_size
#define Env_Read_res_args_size kl_Env_Read_res_args_size
#define Env_Read_res_args_elem_size kl_Env_Read_res_args_elem_size
#define Env_Read_res_envs_size kl_Env_Read_res_envs_size
#define Env_Read_res_envs_elem_size kl_Env_Read_res_envs_elem_size
#define Env_Read_req_arena_size kl_Env_Read_req_arena_size
#define Env_Read_res_arena_size kl_Env_Read_res_arena_size
#define Env_Read_req_handles kl_Env_Read_req_handles
#define Env_Read_res_handles kl_Env_Read_res_handles
#define Env_Read_err_handles kl_Env_Read_err_handles
#define Env_req_arena_size kl_Env_req_arena_size
#define Env_res_arena_size kl_Env_res_arena_size
#define Env_arena_size kl_Env_arena_size
#define Env_req_handles kl_Env_req_handles
#define Env_res_handles kl_Env_res_handles
#define Env_err_handles kl_Env_err_handles
#define Env_Read_req kl_Env_Read_req
#define Env_Read_res kl_Env_Read_res
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Env__INTERFACE__ */

#ifndef __kl__Env__COMPONENT_INTERFACE__
#define __kl__Env__COMPONENT_INTERFACE__
enum {
    kl_Env_env_iid,
    kl_Env_iidMax,
} ;
enum {
    kl_Env_iidOffset = 0,
} ;
enum {
    kl_Env_securityIidMax,
} ;
enum {
    kl_Env_component_req_arena_size = 128,
    kl_Env_component_res_arena_size = 135168,
    kl_Env_component_arena_size = 135168,
    kl_Env_component_req_handles = 0,
    kl_Env_component_res_handles = 0,
    kl_Env_component_err_handles = 0,
} ;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Env_env_iid kl_Env_env_iid
#define Env_iidMax kl_Env_iidMax
#define Env_iidOffset kl_Env_iidOffset
#define Env_securityIidMax kl_Env_securityIidMax
#define Env_component_req_arena_size kl_Env_component_req_arena_size
#define Env_component_res_arena_size kl_Env_component_res_arena_size
#define Env_component_arena_size kl_Env_component_arena_size
#define Env_component_req_handles kl_Env_component_req_handles
#define Env_component_res_handles kl_Env_component_res_handles
#define Env_component_err_handles kl_Env_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Env__COMPONENT_INTERFACE__ */

#ifndef __env__Env__COMPONENT_INTERFACE__
#define __env__Env__COMPONENT_INTERFACE__
enum {
    env_Env_env_env_iid,
    env_Env_iidMax,
} ;
enum {
    env_Env_iidOffset = 0,
    env_Env_env_iidOffset = 0,
} ;
enum {
    env_Env_securityIidMax,
} ;
enum {
    env_Env_component_req_arena_size = 128,
    env_Env_component_res_arena_size = 135168,
    env_Env_component_arena_size = 135168,
    env_Env_component_req_handles = 0,
    env_Env_component_res_handles = 0,
    env_Env_component_err_handles = 0,
} ;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Env_env_env_iid env_Env_env_env_iid
#define Env_iidMax env_Env_iidMax
#define Env_iidOffset env_Env_iidOffset
#define Env_env_iidOffset env_Env_env_iidOffset
#define Env_securityIidMax env_Env_securityIidMax
#define Env_component_req_arena_size env_Env_component_req_arena_size
#define Env_component_res_arena_size env_Env_component_res_arena_size
#define Env_component_arena_size env_Env_component_arena_size
#define Env_component_req_handles env_Env_component_req_handles
#define Env_component_res_handles env_Env_component_res_handles
#define Env_component_err_handles env_Env_component_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __env__Env__COMPONENT_INTERFACE__ */

#ifndef __env__Env__ENTITY_INTERFACE__
#define __env__Env__ENTITY_INTERFACE__
enum {
    env_Env_entity_req_arena_size =
    env_Env_component_req_arena_size,
    env_Env_entity_res_arena_size =
    env_Env_component_res_arena_size,
    env_Env_entity_arena_size =
    env_Env_component_arena_size,
    env_Env_entity_req_handles =
    env_Env_component_req_handles,
    env_Env_entity_res_handles =
    env_Env_component_res_handles,
    env_Env_entity_err_handles =
    env_Env_component_err_handles,
} ;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Env_entity_req_arena_size env_Env_entity_req_arena_size
#define Env_entity_res_arena_size env_Env_entity_res_arena_size
#define Env_entity_arena_size env_Env_entity_arena_size
#define Env_entity_req_handles env_Env_entity_req_handles
#define Env_entity_res_handles env_Env_entity_res_handles
#define Env_entity_err_handles env_Env_entity_err_handles
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __env__Env__ENTITY_INTERFACE__ */

#ifndef __kl__Env__VTABLE__
#define __kl__Env__VTABLE__
typedef struct kl_Env {
            const struct kl_Env_ops *ops;
        } kl_Env;
typedef nk_err_t kl_Env_Read_fn(struct kl_Env *,
                                const
                                struct kl_Env_Read_req *,
                                const
                                struct nk_arena *,
                                struct kl_Env_Read_res *,
                                struct nk_arena *);
typedef struct kl_Env_ops {
            kl_Env_Read_fn *Read;
        } kl_Env_ops;
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Env_Read_fn kl_Env_Read_fn
#define Env_ops kl_Env_ops
#define Env kl_Env
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Env__VTABLE__ */

#ifndef __kl__Env__SERVER__
#define __kl__Env__SERVER__
typedef union kl_Env_req {
            struct nk_message base_;
            struct kl_Env_Read_req Read;
        } kl_Env_req;
typedef union kl_Env_res {
            struct nk_message base_;
            struct kl_Env_Read_res Read;
        } kl_Env_res;
static inline
nk_err_t kl_Env_interface_dispatch(struct kl_Env *impl,
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
            
          case kl_Env_Read_mid:
            {
                struct kl_Env_Read_res *res_ =
                                       (struct kl_Env_Read_res *) res;
                
                rc = impl->ops->Read(impl, (const
                                            struct kl_Env_Read_req *) req,
                                     req_arena,
                                     res_,
                                     res_arena);
                if (rc == NK_EOK) {
                    nk_req_reset(&res_->res_);
                    nk_msg_set_ncaps(res_,
                                     kl_Env_Read_res_handles);
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
#define Env_req kl_Env_req
#define Env_res kl_Env_res
#define Env_interface_dispatch kl_Env_interface_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Env__SERVER__ */

#ifndef __kl__Env__COMPONENT_SERVER_TYPES__
#define __kl__Env__COMPONENT_SERVER_TYPES__
typedef struct kl_Env_component {
            struct kl_Env *env;
        } kl_Env_component;
#endif /* __kl__Env__COMPONENT_SERVER_TYPES__ */

#ifndef __kl__Env__COMPONENT_SERVER_DISPATCHER__
#define __kl__Env__COMPONENT_SERVER_DISPATCHER__
static inline
void kl_Env_component_init(struct kl_Env_component *self,
                           struct kl_Env *env)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->env = env;
}
typedef union kl_Env_component_req {
            struct nk_message base_;
            kl_Env_req env;
        } kl_Env_component_req;
typedef union kl_Env_component_res {
            struct nk_message base_;
            kl_Env_res env;
        } kl_Env_component_res;
static inline
nk_err_t kl_Env_component_dispatch(struct kl_Env_component *self,
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
        
      case kl_Env_env_iid:
        return kl_Env_interface_dispatch(self->env,
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
#define Env_component kl_Env_component
#define Env_component_init kl_Env_component_init
#define Env_component_req kl_Env_component_req
#define Env_component_res kl_Env_component_res
#define Env_component_dispatch kl_Env_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __kl__Env__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __env__Env__COMPONENT_SERVER_TYPES__
#define __env__Env__COMPONENT_SERVER_TYPES__
typedef struct env_Env_component {
            struct kl_Env_component *env;
        } env_Env_component;
#endif /* __env__Env__COMPONENT_SERVER_TYPES__ */

#ifndef __env__Env__COMPONENT_SERVER_DISPATCHER__
#define __env__Env__COMPONENT_SERVER_DISPATCHER__
static inline
void env_Env_component_init(struct env_Env_component *self,
                            struct kl_Env_component *env)
{
    nk_assert(self != NK_NULL);
    nk_unused(self);
    self->env = env;
}
typedef union env_Env_component_req {
            struct nk_message base_;
            kl_Env_req env_env;
        } env_Env_component_req;
typedef union env_Env_component_res {
            struct nk_message base_;
            kl_Env_res env_env;
        } env_Env_component_res;
static inline
nk_err_t env_Env_component_dispatch(struct env_Env_component *self,
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
        
      case env_Env_env_env_iid:
        return kl_Env_interface_dispatch(self->env->env,
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
#define Env_component env_Env_component
#define Env_component_init env_Env_component_init
#define Env_component_req env_Env_component_req
#define Env_component_res env_Env_component_res
#define Env_component_dispatch env_Env_component_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __env__Env__COMPONENT_SERVER_DISPATCHER__ */

#ifndef __env__Env__ENTITY_SERVER__
#define __env__Env__ENTITY_SERVER__
#define env_Env_entity_res env_Env_component_res
#define env_Env_entity_req env_Env_component_req
#define env_Env_entity env_Env_component
static inline
void env_Env_entity_init(struct env_Env_entity *self,
                         struct kl_Env_component *env)
{
    env_Env_component_init(self, env);
}
static inline
nk_err_t env_Env_entity_dispatch(struct env_Env_entity *self,
                                 const
                                 struct nk_message *req,
                                 const
                                 struct nk_arena *req_arena,
                                 struct nk_message *res,
                                 struct nk_arena *res_arena)
{
    return env_Env_component_dispatch(self, 0,
                                      req,
                                      req_arena,
                                      res,
                                      res_arena);
}
#ifdef NK_USE_UNQUALIFIED_NAMES
#define Env_entity env_Env_entity
#define Env_entity_init env_Env_entity_init
#define Env_entity_req env_Env_entity_req
#define Env_entity_res env_Env_entity_res
#define Env_entity_dispatch env_Env_entity_dispatch
#endif /* NK_USE_UNQUALIFIED_NAMES */
#endif /* __env__Env__ENTITY_SERVER__ */

#pragma GCC diagnostic pop

