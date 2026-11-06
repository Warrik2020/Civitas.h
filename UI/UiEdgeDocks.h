#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiEdgeDocks : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiEdgeDocks(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiEdgeDocks") {}
    public:
        void ReserveRail(float width) const { void* __callArgs[] = { &width }; CallStatic("ReserveRail", __callArgs, 1); }
        void Reserve(bool left, float width) const { void* __callArgs[] = { &left, &width }; CallStatic("Reserve", __callArgs, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
    };
}
