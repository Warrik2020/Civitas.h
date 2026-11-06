#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class DesignEdits : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DesignEdits(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "DesignEdits") {}
    public:
        bool Mirrorable(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("Mirrorable", __callArgs, 1); }
        bool IsPaired(int k) const { void* __callArgs[] = { &k }; return CallStaticValue<bool>("IsPaired", __callArgs, 1); }
        bool IsCentred(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<bool>("IsCentred", __callArgs, 1); }
        void* SelfPartners(void* p) const { void* __callArgs[] = { p }; return CallStatic("SelfPartners", __callArgs, 1); }
        void ApplySelfMirror(void* orig, void* partner, void* follower, void* cur) const { void* __callArgs[] = { orig, partner, follower, cur }; CallStatic("ApplySelfMirror", __callArgs, 4); }
        void* Symmetrized(void* p, float side) const { void* __callArgs[] = { p, &side }; return CallStatic("Symmetrized", __callArgs, 2); }
        void* SymmetrizedAfterCountChange(void* before, void* after) const { void* __callArgs[] = { before, after }; return CallStatic("SymmetrizedAfterCountChange", __callArgs, 2); }
        void* MirroredAcrossSpine(void* p) const { void* __callArgs[] = { p }; return CallStatic("MirroredAcrossSpine", __callArgs, 1); }
        int TwinOf(void* d, int partIndex) const { void* __callArgs[] = { d, &partIndex }; return CallStaticValue<int>("TwinOf", __callArgs, 2); }
        bool Mirrors(void* d, bool mirrorOn) const { void* __callArgs[] = { d, &mirrorOn }; return CallStaticValue<bool>("Mirrors", __callArgs, 2); }
        void* AddRefusal(void* d, void* it, int kind) const { void* __callArgs[] = { d, it, &kind }; return CallStatic("AddRefusal", __callArgs, 3); }
        void* PaletteOf(void* d) const { void* __callArgs[] = { d }; return CallStatic("PaletteOf", __callArgs, 1); }
        int AddPart(void* d, void* it, int kind, bool mirrorOn) const { void* __callArgs[] = { d, it, &kind, &mirrorOn }; return CallStaticValue<int>("AddPart", __callArgs, 4); }
        void SetMaterial(void* d, int partIndex, int material, bool mirrorOn) const { void* __callArgs[] = { d, &partIndex, &material, &mirrorOn }; CallStatic("SetMaterial", __callArgs, 4); }
        void ApplyTwin(void* d, int partIndex, int twinIndex) const { void* __callArgs[] = { d, &partIndex, &twinIndex }; CallStatic("ApplyTwin", __callArgs, 3); }
        void* KindPhrase(void* d) const { void* __callArgs[] = { d }; return CallStatic("KindPhrase", __callArgs, 1); }
        int BestMaterialFor(int kind, void* it, int domain) const { void* __callArgs[] = { &kind, it, &domain }; return CallStaticValue<int>("BestMaterialFor", __callArgs, 3); }
        void* MaterialFill(int m) const { void* __callArgs[] = { &m }; return CallStatic("MaterialFill", __callArgs, 1); }
        bool IsTransparent(int m) const { void* __callArgs[] = { &m }; return CallStaticValue<bool>("IsTransparent", __callArgs, 1); }
        float TwinToleranceMm() const { return ReadStaticField<float>("TwinToleranceMm"); }
        float SpineToleranceMm() const { return ReadStaticField<float>("SpineToleranceMm"); }
        float PartnerToleranceMm() const { return ReadStaticField<float>("PartnerToleranceMm"); }
    };
}
