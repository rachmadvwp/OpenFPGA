#ifndef ANNOTATE_PB_GRAPH_H
#define ANNOTATE_PB_GRAPH_H

/********************************************************************
 * Include header files that are required by function declaration
 *******************************************************************/
#include "vpr_context.h"
#include "openfpga_context.h"
#include "vpr_pb_type_annotation.h"

/********************************************************************
 * Function declaration
 *******************************************************************/

/* begin namespace openfpga */
namespace openfpga {

void annotate_pb_graph_interconnect_physical_type(const DeviceContext& vpr_device_ctx, 
                                                  VprPbTypeAnnotation& vpr_pb_type_annotation);

} /* end namespace openfpga */

#endif
