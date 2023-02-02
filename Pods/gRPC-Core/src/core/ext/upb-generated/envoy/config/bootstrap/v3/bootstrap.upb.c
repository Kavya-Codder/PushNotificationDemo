/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/bootstrap/v3/bootstrap.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/bootstrap/v3/bootstrap.upb.h"
#include "envoy/config/accesslog/v3/accesslog.upb.h"
#include "envoy/config/cluster/v3/cluster.upb.h"
#include "envoy/config/core/v3/address.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/config_source.upb.h"
#include "envoy/config/core/v3/event_service_config.upb.h"
#include "envoy/config/core/v3/extension.upb.h"
#include "envoy/config/core/v3/resolver.upb.h"
#include "envoy/config/core/v3/socket_option.upb.h"
#include "envoy/config/listener/v3/listener.upb.h"
#include "envoy/config/metrics/v3/stats.upb.h"
#include "envoy/config/overload/v3/overload.upb.h"
#include "envoy/config/trace/v3/http_tracer.upb.h"
#include "envoy/extensions/transport_sockets/tls/v3/secret.upb.h"
#include "envoy/type/v3/percent.upb.h"
#include "google/protobuf/duration.upb.h"
#include "google/protobuf/struct.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "envoy/annotations/deprecation.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "udpa/annotations/security.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub envoy_config_bootstrap_v3_Bootstrap_submsgs[21] = {
  {.submsg = &envoy_config_bootstrap_v3_Admin_msginit},
  {.submsg = &envoy_config_bootstrap_v3_Bootstrap_CertificateProviderInstancesEntry_msginit},
  {.submsg = &envoy_config_bootstrap_v3_Bootstrap_DynamicResources_msginit},
  {.submsg = &envoy_config_bootstrap_v3_Bootstrap_StaticResources_msginit},
  {.submsg = &envoy_config_bootstrap_v3_ClusterManager_msginit},
  {.submsg = &envoy_config_bootstrap_v3_CustomInlineHeader_msginit},
  {.submsg = &envoy_config_bootstrap_v3_FatalAction_msginit},
  {.submsg = &envoy_config_bootstrap_v3_LayeredRuntime_msginit},
  {.submsg = &envoy_config_bootstrap_v3_Watchdog_msginit},
  {.submsg = &envoy_config_bootstrap_v3_Watchdogs_msginit},
  {.submsg = &envoy_config_core_v3_ApiConfigSource_msginit},
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
  {.submsg = &envoy_config_core_v3_DnsResolutionConfig_msginit},
  {.submsg = &envoy_config_core_v3_Node_msginit},
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
  {.submsg = &envoy_config_metrics_v3_StatsConfig_msginit},
  {.submsg = &envoy_config_metrics_v3_StatsSink_msginit},
  {.submsg = &envoy_config_overload_v3_OverloadManager_msginit},
  {.submsg = &envoy_config_trace_v3_Tracing_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
  {.submsg = &google_protobuf_UInt64Value_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_Bootstrap__fields[30] = {
  {1, UPB_SIZE(32, 56), 1, 13, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(36, 64), 2, 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(40, 72), 3, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(44, 80), 4, 4, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(8, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(100, 192), 0, 16, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {7, UPB_SIZE(48, 88), 5, 19, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {8, UPB_SIZE(52, 96), 6, 8, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {9, UPB_SIZE(56, 104), 7, 18, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {12, UPB_SIZE(60, 112), 8, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {13, UPB_SIZE(64, 120), 9, 15, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {14, UPB_SIZE(68, 128), 10, 10, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {15, UPB_SIZE(72, 136), 11, 17, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {16, UPB_SIZE(3, 3), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {17, UPB_SIZE(76, 144), 12, 7, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {18, UPB_SIZE(16, 24), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {19, UPB_SIZE(80, 152), 13, 20, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {20, UPB_SIZE(4, 4), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {21, UPB_SIZE(104, 200), 0, 14, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {22, UPB_SIZE(108, 208), 0, 11, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {23, UPB_SIZE(84, 160), 14, 11, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {24, UPB_SIZE(24, 40), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {25, UPB_SIZE(112, 216), 0, 1, 11, _UPB_MODE_MAP | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {26, UPB_SIZE(116, 224), 0, 0, 9, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {27, UPB_SIZE(88, 168), 15, 9, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {28, UPB_SIZE(120, 232), 0, 6, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {29, UPB_SIZE(128, 248), UPB_SIZE(-133, -253), 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {30, UPB_SIZE(92, 176), 16, 12, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {31, UPB_SIZE(96, 184), 17, 14, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {32, UPB_SIZE(124, 240), 0, 5, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_Bootstrap_msginit = {
  &envoy_config_bootstrap_v3_Bootstrap_submsgs[0],
  &envoy_config_bootstrap_v3_Bootstrap__fields[0],
  UPB_SIZE(136, 256), 30, _UPB_MSGEXT_NONE, 9, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_Bootstrap_StaticResources_submsgs[3] = {
  {.submsg = &envoy_config_cluster_v3_Cluster_msginit},
  {.submsg = &envoy_config_listener_v3_Listener_msginit},
  {.submsg = &envoy_extensions_transport_sockets_tls_v3_Secret_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_Bootstrap_StaticResources__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 1, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 8), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(8, 16), 0, 2, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_Bootstrap_StaticResources_msginit = {
  &envoy_config_bootstrap_v3_Bootstrap_StaticResources_submsgs[0],
  &envoy_config_bootstrap_v3_Bootstrap_StaticResources__fields[0],
  UPB_SIZE(16, 24), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_Bootstrap_DynamicResources_submsgs[2] = {
  {.submsg = &envoy_config_core_v3_ApiConfigSource_msginit},
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_Bootstrap_DynamicResources__fields[5] = {
  {1, UPB_SIZE(20, 40), 1, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(24, 48), 2, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(28, 56), 3, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_Bootstrap_DynamicResources_msginit = {
  &envoy_config_bootstrap_v3_Bootstrap_DynamicResources_submsgs[0],
  &envoy_config_bootstrap_v3_Bootstrap_DynamicResources__fields[0],
  UPB_SIZE(32, 64), 5, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_Bootstrap_CertificateProviderInstancesEntry_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_Bootstrap_CertificateProviderInstancesEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 0, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_Bootstrap_CertificateProviderInstancesEntry_msginit = {
  &envoy_config_bootstrap_v3_Bootstrap_CertificateProviderInstancesEntry_submsgs[0],
  &envoy_config_bootstrap_v3_Bootstrap_CertificateProviderInstancesEntry__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_Admin_submsgs[3] = {
  {.submsg = &envoy_config_accesslog_v3_AccessLog_msginit},
  {.submsg = &envoy_config_core_v3_Address_msginit},
  {.submsg = &envoy_config_core_v3_SocketOption_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_Admin__fields[5] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(20, 40), 1, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(24, 48), 0, 2, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(28, 56), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_Admin_msginit = {
  &envoy_config_bootstrap_v3_Admin_submsgs[0],
  &envoy_config_bootstrap_v3_Admin__fields[0],
  UPB_SIZE(32, 64), 5, _UPB_MSGEXT_NONE, 5, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_ClusterManager_submsgs[3] = {
  {.submsg = &envoy_config_bootstrap_v3_ClusterManager_OutlierDetection_msginit},
  {.submsg = &envoy_config_core_v3_ApiConfigSource_msginit},
  {.submsg = &envoy_config_core_v3_BindConfig_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_ClusterManager__fields[4] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(16, 32), 2, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(20, 40), 3, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_ClusterManager_msginit = {
  &envoy_config_bootstrap_v3_ClusterManager_submsgs[0],
  &envoy_config_bootstrap_v3_ClusterManager__fields[0],
  UPB_SIZE(24, 48), 4, _UPB_MSGEXT_NONE, 4, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_ClusterManager_OutlierDetection_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_EventServiceConfig_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_ClusterManager_OutlierDetection__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_ClusterManager_OutlierDetection_msginit = {
  &envoy_config_bootstrap_v3_ClusterManager_OutlierDetection_submsgs[0],
  &envoy_config_bootstrap_v3_ClusterManager_OutlierDetection__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_Watchdogs_submsgs[1] = {
  {.submsg = &envoy_config_bootstrap_v3_Watchdog_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_Watchdogs__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_Watchdogs_msginit = {
  &envoy_config_bootstrap_v3_Watchdogs_submsgs[0],
  &envoy_config_bootstrap_v3_Watchdogs__fields[0],
  UPB_SIZE(16, 24), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_Watchdog_submsgs[3] = {
  {.submsg = &envoy_config_bootstrap_v3_Watchdog_WatchdogAction_msginit},
  {.submsg = &envoy_type_v3_Percent_msginit},
  {.submsg = &google_protobuf_Duration_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_Watchdog__fields[7] = {
  {1, UPB_SIZE(4, 8), 1, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), 2, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(12, 24), 3, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(16, 32), 4, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(20, 40), 5, 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {6, UPB_SIZE(24, 48), 6, 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {7, UPB_SIZE(28, 56), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_Watchdog_msginit = {
  &envoy_config_bootstrap_v3_Watchdog_submsgs[0],
  &envoy_config_bootstrap_v3_Watchdog__fields[0],
  UPB_SIZE(32, 64), 7, _UPB_MSGEXT_NONE, 7, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_Watchdog_WatchdogAction_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_Watchdog_WatchdogAction__fields[2] = {
  {1, UPB_SIZE(8, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(4, 4), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_Watchdog_WatchdogAction_msginit = {
  &envoy_config_bootstrap_v3_Watchdog_WatchdogAction_submsgs[0],
  &envoy_config_bootstrap_v3_Watchdog_WatchdogAction__fields[0],
  UPB_SIZE(16, 16), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_FatalAction_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_TypedExtensionConfig_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_FatalAction__fields[1] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_FatalAction_msginit = {
  &envoy_config_bootstrap_v3_FatalAction_submsgs[0],
  &envoy_config_bootstrap_v3_FatalAction__fields[0],
  UPB_SIZE(8, 16), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_Runtime_submsgs[1] = {
  {.submsg = &google_protobuf_Struct_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_Runtime__fields[4] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(20, 40), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(28, 56), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_Runtime_msginit = {
  &envoy_config_bootstrap_v3_Runtime_submsgs[0],
  &envoy_config_bootstrap_v3_Runtime__fields[0],
  UPB_SIZE(32, 64), 4, _UPB_MSGEXT_NONE, 4, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_RuntimeLayer_submsgs[4] = {
  {.submsg = &envoy_config_bootstrap_v3_RuntimeLayer_AdminLayer_msginit},
  {.submsg = &envoy_config_bootstrap_v3_RuntimeLayer_DiskLayer_msginit},
  {.submsg = &envoy_config_bootstrap_v3_RuntimeLayer_RtdsLayer_msginit},
  {.submsg = &google_protobuf_Struct_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_RuntimeLayer__fields[5] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 3, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {4, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {5, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_RuntimeLayer_msginit = {
  &envoy_config_bootstrap_v3_RuntimeLayer_submsgs[0],
  &envoy_config_bootstrap_v3_RuntimeLayer__fields[0],
  UPB_SIZE(16, 32), 5, _UPB_MSGEXT_NONE, 5, 255,
};

static const upb_msglayout_field envoy_config_bootstrap_v3_RuntimeLayer_DiskLayer__fields[3] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), 0, 0, 8, _UPB_MODE_SCALAR | (_UPB_REP_1BYTE << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_RuntimeLayer_DiskLayer_msginit = {
  NULL,
  &envoy_config_bootstrap_v3_RuntimeLayer_DiskLayer__fields[0],
  UPB_SIZE(24, 48), 3, _UPB_MSGEXT_NONE, 3, 255,
};

const upb_msglayout envoy_config_bootstrap_v3_RuntimeLayer_AdminLayer_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, _UPB_MSGEXT_NONE, 0, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_RuntimeLayer_RtdsLayer_submsgs[1] = {
  {.submsg = &envoy_config_core_v3_ConfigSource_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_RuntimeLayer_RtdsLayer__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_RuntimeLayer_RtdsLayer_msginit = {
  &envoy_config_bootstrap_v3_RuntimeLayer_RtdsLayer_submsgs[0],
  &envoy_config_bootstrap_v3_RuntimeLayer_RtdsLayer__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub envoy_config_bootstrap_v3_LayeredRuntime_submsgs[1] = {
  {.submsg = &envoy_config_bootstrap_v3_RuntimeLayer_msginit},
};

static const upb_msglayout_field envoy_config_bootstrap_v3_LayeredRuntime__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_LayeredRuntime_msginit = {
  &envoy_config_bootstrap_v3_LayeredRuntime_submsgs[0],
  &envoy_config_bootstrap_v3_LayeredRuntime__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_field envoy_config_bootstrap_v3_CustomInlineHeader__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR | (_UPB_REP_STRVIEW << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), 0, 0, 14, _UPB_MODE_SCALAR | (_UPB_REP_4BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout envoy_config_bootstrap_v3_CustomInlineHeader_msginit = {
  NULL,
  &envoy_config_bootstrap_v3_CustomInlineHeader__fields[0],
  UPB_SIZE(16, 32), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout *messages_layout[18] = {
  &envoy_config_bootstrap_v3_Bootstrap_msginit,
  &envoy_config_bootstrap_v3_Bootstrap_StaticResources_msginit,
  &envoy_config_bootstrap_v3_Bootstrap_DynamicResources_msginit,
  &envoy_config_bootstrap_v3_Bootstrap_CertificateProviderInstancesEntry_msginit,
  &envoy_config_bootstrap_v3_Admin_msginit,
  &envoy_config_bootstrap_v3_ClusterManager_msginit,
  &envoy_config_bootstrap_v3_ClusterManager_OutlierDetection_msginit,
  &envoy_config_bootstrap_v3_Watchdogs_msginit,
  &envoy_config_bootstrap_v3_Watchdog_msginit,
  &envoy_config_bootstrap_v3_Watchdog_WatchdogAction_msginit,
  &envoy_config_bootstrap_v3_FatalAction_msginit,
  &envoy_config_bootstrap_v3_Runtime_msginit,
  &envoy_config_bootstrap_v3_RuntimeLayer_msginit,
  &envoy_config_bootstrap_v3_RuntimeLayer_DiskLayer_msginit,
  &envoy_config_bootstrap_v3_RuntimeLayer_AdminLayer_msginit,
  &envoy_config_bootstrap_v3_RuntimeLayer_RtdsLayer_msginit,
  &envoy_config_bootstrap_v3_LayeredRuntime_msginit,
  &envoy_config_bootstrap_v3_CustomInlineHeader_msginit,
};

const upb_msglayout_file envoy_config_bootstrap_v3_bootstrap_proto_upb_file_layout = {
  messages_layout,
  NULL,
  18,
  0,
};

#include "upb/port_undef.inc"

