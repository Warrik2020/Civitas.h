#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Pipeline
{
    class LakeRegion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LakeRegion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Pipeline", "LakeRegion") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int ownerIsland() const { return ReadField<int>("ownerIsland"); }
        void ownerIsland(int value) const { WriteField<int>("ownerIsland", value); }
        int area() const { return ReadField<int>("area"); }
        void area(int value) const { WriteField<int>("area", value); }
    };
}
