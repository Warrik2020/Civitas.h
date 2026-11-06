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
        bool Mirrorable(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("Mirrorable", args, 1); }
        bool IsPaired(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsPaired", args, 1); }
        bool IsCentred(void* p) const { void* args[] = { p }; return CallStaticValue<bool>("IsCentred", args, 1); }
        void* SelfPartners(void* p) const { void* args[] = { p }; return CallStatic("SelfPartners", args, 1); }
        void ApplySelfMirror(void* orig, void* partner, void* follower, void* cur) const { void* args[] = { orig, partner, follower, cur }; CallStatic("ApplySelfMirror", args, 4); }
        void* Symmetrized(void* p, float side) const { void* args[] = { p, &side }; return CallStatic("Symmetrized", args, 2); }
        void* SymmetrizedAfterCountChange(void* before, void* after) const { void* args[] = { before, after }; return CallStatic("SymmetrizedAfterCountChange", args, 2); }
        void* MirroredAcrossSpine(void* p) const { void* args[] = { p }; return CallStatic("MirroredAcrossSpine", args, 1); }
        int TwinOf(void* d, int partIndex) const { void* args[] = { d, &partIndex }; return CallStaticValue<int>("TwinOf", args, 2); }
        bool Mirrors(void* d, bool mirrorOn) const { void* args[] = { d, &mirrorOn }; return CallStaticValue<bool>("Mirrors", args, 2); }
        void* AddRefusal(void* d, void* it, int kind) const { void* args[] = { d, it, &kind }; return CallStatic("AddRefusal", args, 3); }
        void* PaletteOf(void* d) const { void* args[] = { d }; return CallStatic("PaletteOf", args, 1); }
        int AddPart(void* d, void* it, int kind, bool mirrorOn) const { void* args[] = { d, it, &kind, &mirrorOn }; return CallStaticValue<int>("AddPart", args, 4); }
        void SetMaterial(void* d, int partIndex, int material, bool mirrorOn) const { void* args[] = { d, &partIndex, &material, &mirrorOn }; CallStatic("SetMaterial", args, 4); }
        void ApplyTwin(void* d, int partIndex, int twinIndex) const { void* args[] = { d, &partIndex, &twinIndex }; CallStatic("ApplyTwin", args, 3); }
        void* KindPhrase(void* d) const { void* args[] = { d }; return CallStatic("KindPhrase", args, 1); }
        int BestMaterialFor(int kind, void* it, int domain) const { void* args[] = { &kind, it, &domain }; return CallStaticValue<int>("BestMaterialFor", args, 3); }
        void* MaterialFill(int m) const { void* args[] = { &m }; return CallStatic("MaterialFill", args, 1); }
        bool IsTransparent(int m) const { void* args[] = { &m }; return CallStaticValue<bool>("IsTransparent", args, 1); }
        float TwinToleranceMm() const { return ReadStaticField<float>("TwinToleranceMm"); }
        float SpineToleranceMm() const { return ReadStaticField<float>("SpineToleranceMm"); }
        float PartnerToleranceMm() const { return ReadStaticField<float>("PartnerToleranceMm"); }
    };
}
