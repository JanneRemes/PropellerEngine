// Copyright (c) Lauri M�kinen 2014 - 2015
// All rights reserved.
#ifndef ENGINE_RENDERER_DRAWDESCRIPTOR_H
#define ENGINE_RENDERER_DRAWDESCRIPTOR_H

#include "engine/renderer/RendererEnums.h"

namespace engine {
namespace renderer {

	struct DrawDescriptor
	{
		unsigned drawCount;
		PrimitiveTopology topology;
	};

}
}

#endif