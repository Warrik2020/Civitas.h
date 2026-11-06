#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Pipeline
{
    class IslandRegion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IslandRegion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Pipeline", "IslandRegion") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int area() const { return ReadField<int>("area"); }
        void SetArea(int value) const { WriteField<int>("area", value); }
        void* holeLakeIds() const { return ReadField<void*>("holeLakeIds"); }
    };
}
