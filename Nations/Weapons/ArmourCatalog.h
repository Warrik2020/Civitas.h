#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourCatalog") {}
    public:
        bool IsCover(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsCover", __callArgs, 1); }
        bool IsShield(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsShield", __callArgs, 1); }
        bool IsKit(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsKit", __callArgs, 1); }
        int KindOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("KindOf", __callArgs, 1); }
        void* PartsOf(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("PartsOf", __callArgs, 1); }
        bool Fits(int kind, int part) const { void* __callArgs[] = { &kind, &part }; return CallStaticValue<bool>("Fits", __callArgs, 2); }
        void* KindPhrase(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindPhrase", __callArgs, 1); }
        void* Constructions() const { return ReadStaticField<void*>("Constructions"); }
        void* Paddings() const { return ReadStaticField<void*>("Paddings"); }
        void* Powers() const { return ReadStaticField<void*>("Powers"); }
        void* Ladders() const { return ReadStaticField<void*>("Ladders"); }
        void* LadderNames() const { return ReadStaticField<void*>("LadderNames"); }
        int KindCount() const { return ReadStaticField<int>("KindCount"); }
    };
}
