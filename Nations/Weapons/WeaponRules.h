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
        bool SelfLoading(int a) const { void* args[] = { &a }; return CallStaticValue<bool>("SelfLoading", args, 1); }
        bool Repeating(int a) const { void* args[] = { &a }; return CallStaticValue<bool>("Repeating", args, 1); }
        bool Automatic(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("Automatic", args, 1); }
        bool NeedsLockPart(int i) const { void* args[] = { &i }; return CallStaticValue<bool>("NeedsLockPart", args, 1); }
        bool BlackPowder(int p) const { void* args[] = { &p }; return CallStaticValue<bool>("BlackPowder", args, 1); }
        bool LooseOrPaper(int a) const { void* args[] = { &a }; return CallStaticValue<bool>("LooseOrPaper", args, 1); }
        bool Cartridge(int a) const { void* args[] = { &a }; return CallStaticValue<bool>("Cartridge", args, 1); }
        bool SmokelessOnly(int a) const { void* args[] = { &a }; return CallStaticValue<bool>("SmokelessOnly", args, 1); }
        bool MachineFeed(int f) const { void* args[] = { &f }; return CallStaticValue<bool>("MachineFeed", args, 1); }
        bool MagazineFeed(int f) const { void* args[] = { &f }; return CallStaticValue<bool>("MagazineFeed", args, 1); }
        bool SingleFeed(int f) const { void* args[] = { &f }; return CallStaticValue<bool>("SingleFeed", args, 1); }
        bool NeedsBolt(int a) const { void* args[] = { &a }; return CallStaticValue<bool>("NeedsBolt", args, 1); }
        bool NeedsGas(int a) const { void* args[] = { &a }; return CallStaticValue<bool>("NeedsGas", args, 1); }
        bool NeedsHammer(int i) const { void* args[] = { &i }; return CallStaticValue<bool>("NeedsHammer", args, 1); }
        bool NeedsLever(int a) const { void* args[] = { &a }; return CallStaticValue<bool>("NeedsLever", args, 1); }
        bool IsMechanism(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsMechanism", args, 1); }
        void MissingMechanism(void* d, void* into) const { void* args[] = { d, into }; CallStatic("MissingMechanism", args, 2); }
        void* AddMissingMechanism(void** args = nullptr, int count = 0) const { return CallStatic("AddMissingMechanism", args, count); }
    };
}
