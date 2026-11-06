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
        void ToTile(void* tile) const { void* args[] = { tile }; CallStatic("ToTile", args, 1); }
        bool ToDivisions(void* divisionIds) const { void* args[] = { divisionIds }; return CallStaticValue<bool>("ToDivisions", args, 1); }
    };
}
