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
        int KindOf(void* d) const { void* args[] = { d }; return CallStaticValue<int>("KindOf", args, 1); }
        void* KindName(int kind) const { void* args[] = { &kind }; return CallStatic("KindName", args, 1); }
        bool IsEngine(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsEngine", args, 1); }
        bool IsEngine(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("IsEngine", args, 1); }
        void* PartsOf(int k) const { void* args[] = { &k }; return CallStatic("PartsOf", args, 1); }
        bool Fits(int k, int part) const { void* args[] = { &k, &part }; return CallStaticValue<bool>("Fits", args, 2); }
        void* KindPhrase(int k) const { void* args[] = { &k }; return CallStatic("KindPhrase", args, 1); }
        bool Is(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("Is", args, 1); }
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
