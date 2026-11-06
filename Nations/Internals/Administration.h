#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class Administration : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Administration(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "Administration") {}
    public:
        float SoftCapTiles(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("SoftCapTiles", args, 1); }
        float SizeMultiplier(int tileCount, void* cfg) const { void* args[] = { &tileCount, cfg }; return CallStaticValue<float>("SizeMultiplier", args, 2); }
        void SyncHomelands(void* it, void* tallyByOriginPlus2, void* touchedOrigins, int tick) const { void* args[] = { it, tallyByOriginPlus2, touchedOrigins, &tick }; CallStatic("SyncHomelands", args, 4); }
        int WorldLandTiles() const { return ReadStaticField<int>("WorldLandTiles"); }
        void SetWorldLandTiles(int value) const { WriteStaticField<int>("WorldLandTiles", value); }
    };
}
