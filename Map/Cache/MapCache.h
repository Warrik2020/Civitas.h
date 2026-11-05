#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Cache
{
    class MapCache : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapCache(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Cache", "MapCache") {}
    };
}
