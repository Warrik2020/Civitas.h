#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class WaterBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WaterBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "WaterBlock") {}
    public:
        void* deep() const { return ReadField<void*>("deep"); }
        void deep(void* value) const { WriteField<void*>("deep", value); }
        void* open() const { return ReadField<void*>("open"); }
        void open(void* value) const { WriteField<void*>("open", value); }
        void* halo() const { return ReadField<void*>("halo"); }
        void halo(void* value) const { WriteField<void*>("halo", value); }
        float haloTiles() const { return ReadField<float>("haloTiles"); }
        void haloTiles(float value) const { WriteField<float>("haloTiles", value); }
        float openTiles() const { return ReadField<float>("openTiles"); }
        void openTiles(float value) const { WriteField<float>("openTiles", value); }
        float grain() const { return ReadField<float>("grain"); }
        void grain(float value) const { WriteField<float>("grain", value); }
        float patches() const { return ReadField<float>("patches"); }
        void patches(float value) const { WriteField<float>("patches", value); }
        float waves() const { return ReadField<float>("waves"); }
        void waves(float value) const { WriteField<float>("waves", value); }
        float shelfDarken() const { return ReadField<float>("shelfDarken"); }
        void shelfDarken(float value) const { WriteField<float>("shelfDarken", value); }
    };
}
