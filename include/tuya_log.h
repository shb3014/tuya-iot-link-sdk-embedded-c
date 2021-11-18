#ifndef __TUYA_LOG_H__
#define __TUYA_LOG_H__

#include "log.h"
#include "Arduino.h"

//#define TY_LOGE log_error
//#define TY_LOGW log_warn
//#define TY_LOGI log_info
//#define TY_LOGD log_debug
//#define TY_LOGV log_trace

#define TY_LOGE log_e
#define TY_LOGW log_w
#define TY_LOGI log_i
#define TY_LOGD log_v
#define TY_LOGV log_v

//#define PR_ERR   log_error
//#define PR_WARN  log_warn
//#define PR_INFO  log_info
//#define PR_DEBUG log_debug
//#define PR_TRACE log_trace

#define PR_ERR   log_e
#define PR_WARN  log_w
#define PR_INFO  log_i
#define PR_DEBUG log_v
#define PR_TRACE log_v

#endif
