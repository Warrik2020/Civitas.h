#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Youtuber
{
    class CameraViews : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CameraViews(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Youtuber", "CameraViews") {}
    public:
        bool OwnsKey(void* key) const { void* __callArgs[] = { key }; return CallStaticValue<bool>("OwnsKey", __callArgs, 1); }
        void* KeyName(void* b) const { void* __callArgs[] = { b }; return CallStatic("KeyName", __callArgs, 1); }
        int SlotCount() const { return ReadStaticField<int>("SlotCount"); }
    };
}
