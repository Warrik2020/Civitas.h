#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class MarchScale : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MarchScale(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "MarchScale") {}
    public:
        bool SegmentOpen(void* d, void* grid, void* from, void* to, float len) const { void* args[] = { d, grid, from, to, &len }; return CallStaticValue<bool>("SegmentOpen", args, 5); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
    };
}
