#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Labels
{
    class CityLabelSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityLabelSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Labels", "CityLabelSystem") {}
    public:
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void SetEmphasis(void* cityIds) const { void* __callArgs[] = { cityIds }; CallStatic("SetEmphasis", __callArgs, 1); }
    };
}
