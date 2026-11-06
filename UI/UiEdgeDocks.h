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
        void ReserveRail(float width) const { void* args[] = { &width }; CallStatic("ReserveRail", args, 1); }
        void Reserve(bool left, float width) const { void* args[] = { &left, &width }; CallStatic("Reserve", args, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
    };
}
