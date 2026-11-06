#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class ArmyRoster : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmyRoster(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "ArmyRoster") {}
    public:
        bool CardSpan(float& left, float& right) const { void* __callArgs[] = { &left, &right }; return CallStaticValue<bool>("CardSpan", __callArgs, 2); }
    };
}
