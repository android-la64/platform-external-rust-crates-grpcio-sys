/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/node.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/reflection/def.h"
#include "envoy/type/matcher/v3/node.upbdefs.h"
#include "envoy/type/matcher/v3/node.upb.h"

extern _upb_DefPool_Init envoy_type_matcher_v3_string_proto_upbdefinit;
extern _upb_DefPool_Init envoy_type_matcher_v3_struct_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
static const char descriptor[531] = {'\n', ' ', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'v', '3', '/', 'n', 
'o', 'd', 'e', '.', 'p', 'r', 'o', 't', 'o', '\022', '\025', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 
'c', 'h', 'e', 'r', '.', 'v', '3', '\032', '\"', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 
'e', 'r', '/', 'v', '3', '/', 's', 't', 'r', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\032', '\"', 'e', 'n', 'v', 'o', 'y', 
'/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'v', '3', '/', 's', 't', 'r', 'u', 'c', 't', '.', 'p', 
'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 
'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 
'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\"', '\300', '\001', '\n', '\013', 
'N', 'o', 'd', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', '\022', '=', '\n', '\007', 'n', 'o', 'd', 'e', '_', 'i', 'd', '\030', '\001', ' ', 
'\001', '(', '\013', '2', '$', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 
'v', '3', '.', 'S', 't', 'r', 'i', 'n', 'g', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'R', '\006', 'n', 'o', 'd', 'e', 'I', 'd', '\022', 
'K', '\n', '\016', 'n', 'o', 'd', 'e', '_', 'm', 'e', 't', 'a', 'd', 'a', 't', 'a', 's', '\030', '\002', ' ', '\003', '(', '\013', '2', '$', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'v', '3', '.', 'S', 't', 
'r', 'u', 'c', 't', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'R', '\r', 'n', 'o', 'd', 'e', 'M', 'e', 't', 'a', 'd', 'a', 't', 'a', 
's', ':', '%', '\232', '\305', '\210', '\036', ' ', '\n', '\036', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 
'h', 'e', 'r', '.', 'N', 'o', 'd', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'B', '\202', '\001', '\n', '#', 'i', 'o', '.', 'e', 'n', 
'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 
'e', 'r', '.', 'v', '3', 'B', '\t', 'N', 'o', 'd', 'e', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 'F', 'g', 'i', 't', 'h', 'u', 
'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 
'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 
'e', 'r', '/', 'v', '3', ';', 'm', 'a', 't', 'c', 'h', 'e', 'r', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 
'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[5] = {
  &envoy_type_matcher_v3_string_proto_upbdefinit,
  &envoy_type_matcher_v3_struct_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_type_matcher_v3_node_proto_upbdefinit = {
  deps,
  &envoy_type_matcher_v3_node_proto_upb_file_layout,
  "envoy/type/matcher/v3/node.proto",
  UPB_STRINGVIEW_INIT(descriptor, 531)
};
