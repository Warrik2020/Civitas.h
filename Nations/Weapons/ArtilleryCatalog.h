#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArtilleryCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArtilleryCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArtilleryCatalog") {}
    public:
        int KindOf(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("KindOf", __callArgs, 1); }
        void* KindName(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindName", __callArgs, 1); }
        bool IsEngine(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsEngine", __callArgs, 1); }
        bool IsEngine(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("IsEngine", __callArgs, 1); }
        void* PartsOf(int k) const { void* __callArgs[] = { &k }; return CallStatic("PartsOf", __callArgs, 1); }
        bool Fits(int k, int part) const { void* __callArgs[] = { &k, &part }; return CallStaticValue<bool>("Fits", __callArgs, 2); }
        void* KindPhrase(int k) const { void* __callArgs[] = { &k }; return CallStatic("KindPhrase", __callArgs, 1); }
        bool Is(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("Is", __callArgs, 1); }
        int KindCount() const { return ReadStaticField<int>("KindCount"); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        void* Powers() const { return ReadStaticField<void*>("Powers"); }
        void* Frames() const { return ReadStaticField<void*>("Frames"); }
        void* Missiles() const { return ReadStaticField<void*>("Missiles"); }
        void* Tubes() const { return ReadStaticField<void*>("Tubes"); }
        void* Recoils() const { return ReadStaticField<void*>("Recoils"); }
        void* Shells() const { return ReadStaticField<void*>("Shells"); }
        void* Layings() const { return ReadStaticField<void*>("Layings"); }
        void* EngineLadders() const { return ReadStaticField<void*>("EngineLadders"); }
        void* GunLadders() const { return ReadStaticField<void*>("GunLadders"); }
        void* EngineLadderNames() const { return ReadStaticField<void*>("EngineLadderNames"); }
        void* GunLadderNames() const { return ReadStaticField<void*>("GunLadderNames"); }
        void* EngineParts() const { return ReadStaticField<void*>("EngineParts"); }
        void* GunParts() const { return ReadStaticField<void*>("GunParts"); }
        void* EngineMaterials() const { return ReadStaticField<void*>("EngineMaterials"); }
        void* GunMaterials() const { return ReadStaticField<void*>("GunMaterials"); }
    };
}
