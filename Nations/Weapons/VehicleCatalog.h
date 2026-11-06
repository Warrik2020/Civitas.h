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
        bool IsArmourBody(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsArmourBody", __callArgs, 1); }
        int KindOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("KindOf", __callArgs, 1); }
        void* Spec(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("Spec", __callArgs, 1); }
        void* Spec(void* d) const { void* __callArgs[] = { d }; return CallStatic("Spec", __callArgs, 1); }
        void* KindName(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindName", __callArgs, 1); }
        void* PartsOf(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("PartsOf", __callArgs, 1); }
        bool Fits(int kind, int part) const { void* __callArgs[] = { &kind, &part }; return CallStaticValue<bool>("Fits", __callArgs, 2); }
        void* KindPhrase(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindPhrase", __callArgs, 1); }
        bool IsArmed(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("IsArmed", __callArgs, 1); }
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
