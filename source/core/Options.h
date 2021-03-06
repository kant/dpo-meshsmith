/**
 * 3D Foundation Project
 * Copyright 2019 Smithsonian Institution
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _MESHSMITH_OPTIONS_H
#define _MESHSMITH_OPTIONS_H

#include "library.h"
#include "Processor.h"

#include "math/Vector3T.h"
#include "math/Matrix4T.h"
#include "core/ResultT.h"
#include "core/json.h"

#include <string>

namespace meshsmith
{
	struct MESHSMITH_CORE_EXPORT Options
	{
		Options();

		flow::Result fromJSON(const flow::json& json);
		flow::json toJSON() const;

		std::string input;
		std::string output;
		std::string format;
		bool verbose;
		bool report;
		bool list;
		bool joinVertices;
		bool stripNormals;
		bool stripTexCoords;
		std::string swizzle;
		float scale;
		flow::Vector3f translate;
		Align alignX;
		Align alignY;
		Align alignZ;
		bool flipUV;

		flow::Matrix4f matrix;

		float metallicFactor;
		float roughnessFactor;
		std::string diffuseMap;
		std::string occlusionMap;
		std::string emissiveMap;
		std::string metallicRoughnessMap;
		std::string zoneMap;
		std::string normalMap;
		bool objectSpaceNormals;
		bool embedMaps;

		bool useCompression;
		uint32_t compressionLevel;
		uint32_t positionQuantizationBits;
		uint32_t texCoordsQuantizationBits;
		uint32_t normalsQuantizationBits;
		uint32_t genericQuantizationBits;
	};
}

#endif // _MESHSMITH_OPTIONS_H
