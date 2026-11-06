#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class CameraFly : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CameraFly(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "CameraFly") {}
    public:
        void ToTile(void* tile) const { void* __callArgs[] = { tile }; CallStatic("ToTile", __callArgs, 1); }
        bool ToDivisions(void* divisionIds) const { void* __callArgs[] = { divisionIds }; return CallStaticValue<bool>("ToDivisions", __callArgs, 1); }
    };
}
