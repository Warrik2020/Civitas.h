#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class BowCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BowCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "BowCatalog") {}
    public:
        void* KindName(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindName", __callArgs, 1); }
        int KindOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("KindOf", __callArgs, 1); }
        bool IsBowKind(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsBowKind", __callArgs, 1); }
        void* PartsOf(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("PartsOf", __callArgs, 1); }
        void* MaterialsOf(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("MaterialsOf", __callArgs, 1); }
        void* LaddersOf(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("LaddersOf", __callArgs, 1); }
        void* LadderNamesOf(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("LadderNamesOf", __callArgs, 1); }
        bool Fits(int kind, int part) const { void* __callArgs[] = { &kind, &part }; return CallStaticValue<bool>("Fits", __callArgs, 2); }
        void* KindPhrase(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindPhrase", __callArgs, 1); }
        int Limb(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("Limb", __callArgs, 1); }
        int String(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("String", __callArgs, 1); }
        int Missile(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("Missile", __callArgs, 1); }
        int Loose(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("Loose", __callArgs, 1); }
        int Lock(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("Lock", __callArgs, 1); }
        int Spanning(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("Spanning", __callArgs, 1); }
        int Manufacture(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("Manufacture", __callArgs, 1); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        void* Limbs() const { return ReadStaticField<void*>("Limbs"); }
        void* Strings() const { return ReadStaticField<void*>("Strings"); }
        void* Missiles() const { return ReadStaticField<void*>("Missiles"); }
        void* Looses() const { return ReadStaticField<void*>("Looses"); }
        void* Locks() const { return ReadStaticField<void*>("Locks"); }
        void* Spannings() const { return ReadStaticField<void*>("Spannings"); }
        void* BowLadders() const { return ReadStaticField<void*>("BowLadders"); }
        void* CrossbowLadders() const { return ReadStaticField<void*>("CrossbowLadders"); }
        void* BowLadderNames() const { return ReadStaticField<void*>("BowLadderNames"); }
        void* CrossbowLadderNames() const { return ReadStaticField<void*>("CrossbowLadderNames"); }
        void* GunParts() const { return ReadStaticField<void*>("GunParts"); }
        void* BowParts() const { return ReadStaticField<void*>("BowParts"); }
        void* CrossbowParts() const { return ReadStaticField<void*>("CrossbowParts"); }
    };
}
