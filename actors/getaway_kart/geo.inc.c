#include "src/game/envfx_snow.h"

const GeoLayout getaway_kart_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 224, -476, getaway_kart_axel_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 298, -511, getaway_kart_engine_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 175, 10, getaway_kart_frame_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 173, 691, getaway_kart_pedals_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 273, -276, getaway_kart_seat_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 677, 180, -45, 0, 0, getaway_kart_steeringwheel_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 337, 170, 549, getaway_kart_wheel_f_l_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -337, 170, 549, getaway_kart_wheel_f_r_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 337, 224, -476, getaway_kart_wheel_r_l_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -337, 224, -476, getaway_kart_wheel_r_r_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
