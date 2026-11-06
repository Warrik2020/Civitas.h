#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponRules : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponRules(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponRules") {}
    public:
        bool SelfLoading(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<bool>("SelfLoading", __callArgs, 1); }
        bool Repeating(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<bool>("Repeating", __callArgs, 1); }
        bool Automatic(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("Automatic", __callArgs, 1); }
        bool NeedsLockPart(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<bool>("NeedsLockPart", __callArgs, 1); }
        bool BlackPowder(int p) const { void* __callArgs[] = { &p }; return CallStaticValue<bool>("BlackPowder", __callArgs, 1); }
        bool LooseOrPaper(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<bool>("LooseOrPaper", __callArgs, 1); }
        bool Cartridge(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<bool>("Cartridge", __callArgs, 1); }
        bool SmokelessOnly(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<bool>("SmokelessOnly", __callArgs, 1); }
        bool MachineFeed(int f) const { void* __callArgs[] = { &f }; return CallStaticValue<bool>("MachineFeed", __callArgs, 1); }
        bool MagazineFeed(int f) const { void* __callArgs[] = { &f }; return CallStaticValue<bool>("MagazineFeed", __callArgs, 1); }
        bool SingleFeed(int f) const { void* __callArgs[] = { &f }; return CallStaticValue<bool>("SingleFeed", __callArgs, 1); }
        bool NeedsBolt(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<bool>("NeedsBolt", __callArgs, 1); }
        bool NeedsGas(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<bool>("NeedsGas", __callArgs, 1); }
        bool NeedsHammer(int i) const { void* __callArgs[] = { &i }; return CallStaticValue<bool>("NeedsHammer", __callArgs, 1); }
        bool NeedsLever(int a) const { void* __callArgs[] = { &a }; return CallStaticValue<bool>("NeedsLever", __callArgs, 1); }
        bool IsMechanism(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsMechanism", __callArgs, 1); }
        void MissingMechanism(void* d, void* into) const { void* __callArgs[] = { d, into }; CallStatic("MissingMechanism", __callArgs, 2); }
        void* AddMissingMechanism(void** args = nullptr, int count = 0) const { return CallStatic("AddMissingMechanism", args, count); }
    };
}
