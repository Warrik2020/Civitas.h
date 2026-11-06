#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SandboxProfiles : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SandboxProfiles(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SandboxProfiles") {}
    public:
        void* Spear() const { return CallStatic("Spear", nullptr, 0); }
        void* Archer() const { return CallStatic("Archer", nullptr, 0); }
        void* Musket() const { return CallStatic("Musket", nullptr, 0); }
        void* Rifle(int age) const { void* args[] = { &age }; return CallStatic("Rifle", args, 1); }
        void* Horse(int age) const { void* args[] = { &age }; return CallStatic("Horse", args, 1); }
    };
}
