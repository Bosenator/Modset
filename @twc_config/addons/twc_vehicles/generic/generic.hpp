// What ERA?
#define ADD_FACTION faction = "TWC_General"

// GENERIC is for non-era specific vehicles. Some non-era specific do have era-specific equipment in them, and thus belong in their appropriate era. Most of these will be empty.
#define GENERIC_AMBULANCE_MOD 1

// doesn't have a loadout, at the moment
#define GENERIC_EMPTY 0
#define CURRENT_VEHICLE GENERIC_EMPTY

#include "generic_boat.hpp"
#include "generic_helicopter.hpp"
#include "generic_plane.hpp"
#include "generic_tracked.hpp"
#include "generic_wheeled.hpp"