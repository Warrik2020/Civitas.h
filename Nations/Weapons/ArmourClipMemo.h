#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourClipMemo : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourClipMemo(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourClipMemo") {}
    public:
        void* For_(void* poly) const { void* args[] = { poly }; return CallStatic("For", args, 1); }
        float Organ(int o) const { void* args[] = { &o }; return CallValue<float>("Organ", args, 1); }
        float Joint(int j) const { void* args[] = { &j }; return CallValue<float>("Joint", args, 1); }
    };
}
