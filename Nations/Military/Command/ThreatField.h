#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class ThreatField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ThreatField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "ThreatField") {}
    public:
        float At(void* p, void* mil, void* buckets, void* cfg, int tick) const { void* __callArgs[] = { p, mil, buckets, cfg, &tick }; return CallStaticValue<float>("At", __callArgs, 5); }
        float RadiusTiles() const { return ReadStaticField<float>("RadiusTiles"); }
    };
}
