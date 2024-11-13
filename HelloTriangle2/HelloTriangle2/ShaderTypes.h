//
//  ShaderType.h
//  HelloTriangle2
//
//  Created by hiroaki-inomata on 2024/11/13.
//

#ifndef ShaderTypes_h
#define ShaderTypes_h

#include <simd/simd.h>

// Buffer index values shared between shader and C code to ensure Metal shader buffer inputs
// match Metal API buffer set calls.
typedef enum PHVertexInputIndex
{
    PHVertexInputIndexVertices     = 0,
    PHVertexInputIndexViewportSize = 1,
} PHVertexInputIndex;

//  This structure defines the layout of vertices sent to the vertex
//  shader. This header is shared between the .metal shader and C code, to guarantee that
//  the layout of the vertex array in the C code matches the layout that the .metal
//  vertex shader expects.
typedef struct
{
    vector_float2 position;
    vector_float4 color;
} PHVertex;

#endif /* ShaderType_h */
