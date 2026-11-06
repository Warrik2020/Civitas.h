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
        int KindOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("KindOf", __callArgs, 1); }
        void* Spec(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("Spec", __callArgs, 1); }
        void* Spec(void* d) const { void* __callArgs[] = { d }; return CallStatic("Spec", __callArgs, 1); }
        void* KindName(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindName", __callArgs, 1); }
        void* Option(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("Option", __callArgs, 1); }
        void* PartsOf(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("PartsOf", __callArgs, 1); }
        bool Fits(int kind, int part) const { void* __callArgs[] = { &kind, &part }; return CallStaticValue<bool>("Fits", __callArgs, 2); }
        void* KindPhrase(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindPhrase", __callArgs, 1); }
        void* Window(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("Window", __callArgs, 1); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        int KindCount() const { return ReadStaticField<int>("KindCount"); }
    };
}
