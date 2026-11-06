#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class MapDock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapDock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "MapDock") {}
    public:
        bool ShowFor(void* nations) const { void* __callArgs[] = { nations }; return CallStaticValue<bool>("ShowFor", __callArgs, 1); }
        float Height() const { return ReadStaticField<float>("Height"); }
    };
}
