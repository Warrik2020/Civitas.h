#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class GunCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GunCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "GunCatalog") {}
    public:
        int KindOf(void* d) const { void* args[] = { d }; return CallStaticValue<int>("KindOf", args, 1); }
        void* Spec(int kind) const { void* args[] = { &kind }; return CallStatic("Spec", args, 1); }
        void* Spec(void* d) const { void* args[] = { d }; return CallStatic("Spec", args, 1); }
        void* KindName(int kind) const { void* args[] = { &kind }; return CallStatic("KindName", args, 1); }
        void* Option(int kind) const { void* args[] = { &kind }; return CallStatic("Option", args, 1); }
        void* PartsOf(int kind) const { void* args[] = { &kind }; return CallStatic("PartsOf", args, 1); }
        bool Fits(int kind, int part) const { void* args[] = { &kind, &part }; return CallStaticValue<bool>("Fits", args, 2); }
        void* KindPhrase(int kind) const { void* args[] = { &kind }; return CallStatic("KindPhrase", args, 1); }
        void* Window(int kind) const { void* args[] = { &kind }; return CallStatic("Window", args, 1); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        int KindCount() const { return ReadStaticField<int>("KindCount"); }
    };
}
