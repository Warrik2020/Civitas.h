#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class CityPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "CityPanel") {}
    public:
        bool ScreenPointHitsCity(void* screen) const { void* args[] = { screen }; return CallStaticValue<bool>("ScreenPointHitsCity", args, 1); }
        void Dismiss() const { CallStatic("Dismiss", nullptr, 0); }
    };
}
