#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class VehicleCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VehicleCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "VehicleCatalog") {}
    public:
        bool IsArmourBody(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsArmourBody", args, 1); }
        int KindOf(void* d) const { void* args[] = { d }; return CallStaticValue<int>("KindOf", args, 1); }
        void* Spec(int kind) const { void* args[] = { &kind }; return CallStatic("Spec", args, 1); }
        void* Spec(void* d) const { void* args[] = { d }; return CallStatic("Spec", args, 1); }
        void* KindName(int kind) const { void* args[] = { &kind }; return CallStatic("KindName", args, 1); }
        void* PartsOf(int kind) const { void* args[] = { &kind }; return CallStatic("PartsOf", args, 1); }
        bool Fits(int kind, int part) const { void* args[] = { &kind, &part }; return CallStaticValue<bool>("Fits", args, 2); }
        void* KindPhrase(int kind) const { void* args[] = { &kind }; return CallStatic("KindPhrase", args, 1); }
        bool IsArmed(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("IsArmed", args, 1); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        void* Engines() const { return ReadStaticField<void*>("Engines"); }
        void* Suspensions() const { return ReadStaticField<void*>("Suspensions"); }
        void* Plates() const { return ReadStaticField<void*>("Plates"); }
        void* Ammunitions() const { return ReadStaticField<void*>("Ammunitions"); }
        void* FireControls() const { return ReadStaticField<void*>("FireControls"); }
        void* Ladders() const { return ReadStaticField<void*>("Ladders"); }
        void* LadderNames() const { return ReadStaticField<void*>("LadderNames"); }
        int KindCount() const { return ReadStaticField<int>("KindCount"); }
    };
}
