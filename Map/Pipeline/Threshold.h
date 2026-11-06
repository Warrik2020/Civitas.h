#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Pipeline
{
    class Threshold : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Threshold(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Pipeline", "Threshold") {}
    public:
        void* Build(void* tex, int thresholdR, bool dilate) const { void* args[] = { tex, &thresholdR, &dilate }; return CallStatic("Build", args, 3); }
        void* Close(void* grid, int w, int h, int radius) const { void* args[] = { grid, &w, &h, &radius }; return CallStatic("Close", args, 4); }
        uint8_t Land() const { return ReadStaticField<uint8_t>("Land"); }
        uint8_t Ocean() const { return ReadStaticField<uint8_t>("Ocean"); }
    };
}
