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
        void* KindName(int kind) const { void* args[] = { &kind }; return CallStatic("KindName", args, 1); }
        int KindOf(void* d) const { void* args[] = { d }; return CallStaticValue<int>("KindOf", args, 1); }
        bool IsBowKind(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsBowKind", args, 1); }
        void* PartsOf(int kind) const { void* args[] = { &kind }; return CallStatic("PartsOf", args, 1); }
        void* MaterialsOf(int kind) const { void* args[] = { &kind }; return CallStatic("MaterialsOf", args, 1); }
        void* LaddersOf(int kind) const { void* args[] = { &kind }; return CallStatic("LaddersOf", args, 1); }
        void* LadderNamesOf(int kind) const { void* args[] = { &kind }; return CallStatic("LadderNamesOf", args, 1); }
        bool Fits(int kind, int part) const { void* args[] = { &kind, &part }; return CallStaticValue<bool>("Fits", args, 2); }
        void* KindPhrase(int kind) const { void* args[] = { &kind }; return CallStatic("KindPhrase", args, 1); }
        int Limb(void* d) const { void* args[] = { d }; return CallStaticValue<int>("Limb", args, 1); }
        int String(void* d) const { void* args[] = { d }; return CallStaticValue<int>("String", args, 1); }
        int Missile(void* d) const { void* args[] = { d }; return CallStaticValue<int>("Missile", args, 1); }
        int Loose(void* d) const { void* args[] = { d }; return CallStaticValue<int>("Loose", args, 1); }
        int Lock(void* d) const { void* args[] = { d }; return CallStaticValue<int>("Lock", args, 1); }
        int Spanning(void* d) const { void* args[] = { d }; return CallStaticValue<int>("Spanning", args, 1); }
        int Manufacture(void* d) const { void* args[] = { d }; return CallStaticValue<int>("Manufacture", args, 1); }
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
