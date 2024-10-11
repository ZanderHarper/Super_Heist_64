#include "src/game/envfx_snow.h"

const GeoLayout getaway_kart_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 45, -95, getaway_kart_axel_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 60, -102, getaway_kart_engine_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 35, 2, getaway_kart_frame_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 35, 138, getaway_kart_pedals_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 55, -55, getaway_kart_seat_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 135, 36, -45, 0, 0, getaway_kart_steeringwheel_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 67, 34, 110, getaway_kart_wheel_f_l_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -67, 34, 110, getaway_kart_wheel_f_r_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 67, 45, -95, getaway_kart_wheel_r_l_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -67, 45, -95, getaway_kart_wheel_r_r_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
