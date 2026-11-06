#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class DomainSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DomainSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "DomainSpec") {}
    public:
        bool AllowsPart(int k) const { void* args[] = { &k }; return CallValue<bool>("AllowsPart", args, 1); }
        bool AllowsMaterial(int m) const { void* args[] = { &m }; return CallValue<bool>("AllowsMaterial", args, 1); }
        void* LaddersFor(int kind) const { void* args[] = { &kind }; return Call("LaddersFor", args, 1); }
        void* LadderNamesFor(int kind) const { void* args[] = { &kind }; return Call("LadderNamesFor", args, 1); }
        int LadderCountFor(int kind) const { void* args[] = { &kind }; return CallValue<int>("LadderCountFor", args, 1); }
        void* PartsFor(int kind) const { void* args[] = { &kind }; return Call("PartsFor", args, 1); }
        void* MaterialsFor(int kind) const { void* args[] = { &kind }; return Call("MaterialsFor", args, 1); }
        bool AllowsPart(int kind, int k) const { void* args[] = { &kind, &k }; return CallValue<bool>("AllowsPart", args, 2); }
        bool AllowsMaterial(int kind, int m) const { void* args[] = { &kind, &m }; return CallValue<bool>("AllowsMaterial", args, 2); }
        bool HasTopViewFor(int kind) const { void* args[] = { &kind }; return CallValue<bool>("HasTopViewFor", args, 1); }
        void* KindName(int kind) const { void* args[] = { &kind }; return Call("KindName", args, 1); }
        void* Kind(int kind) const { void* args[] = { &kind }; return Call("Kind", args, 1); }
        int domain() const { return ReadField<int>("domain"); }
        void SetDomain(int value) const { WriteField<int>("domain", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* article() const { return ReadField<void*>("article"); }
        void SetArticle(void* value) const { WriteField<void*>("article", value); }
        void* ladderNames() const { return ReadField<void*>("ladderNames"); }
        void SetLadderNames(void* value) const { WriteField<void*>("ladderNames", value); }
        void* ladders() const { return ReadField<void*>("ladders"); }
        void SetLadders(void* value) const { WriteField<void*>("ladders", value); }
        void* kinds() const { return ReadField<void*>("kinds"); }
        void SetKinds(void* value) const { WriteField<void*>("kinds", value); }
        void* parts() const { return ReadField<void*>("parts"); }
        void SetParts(void* value) const { WriteField<void*>("parts", value); }
        void* materials() const { return ReadField<void*>("materials"); }
        void SetMaterials(void* value) const { WriteField<void*>("materials", value); }
        void* kindLadders() const { return ReadField<void*>("kindLadders"); }
        void SetKindLadders(void* value) const { WriteField<void*>("kindLadders", value); }
        void* kindLadderNames() const { return ReadField<void*>("kindLadderNames"); }
        void SetKindLadderNames(void* value) const { WriteField<void*>("kindLadderNames", value); }
        void* kindParts() const { return ReadField<void*>("kindParts"); }
        void SetKindParts(void* value) const { WriteField<void*>("kindParts", value); }
        void* kindMaterials() const { return ReadField<void*>("kindMaterials"); }
        void SetKindMaterials(void* value) const { WriteField<void*>("kindMaterials", value); }
        void* kindNoTopView() const { return ReadField<void*>("kindNoTopView"); }
        void SetKindNoTopView(void* value) const { WriteField<void*>("kindNoTopView", value); }
        int unlockTech() const { return ReadField<int>("unlockTech"); }
        void SetUnlockTech(int value) const { WriteField<int>("unlockTech", value); }
        bool playable() const { return ReadField<bool>("playable"); }
        void SetPlayable(bool value) const { WriteField<bool>("playable", value); }
        bool usesCalibre() const { return ReadField<bool>("usesCalibre"); }
        void SetUsesCalibre(bool value) const { WriteField<bool>("usesCalibre", value); }
        bool usesWidth() const { return ReadField<bool>("usesWidth"); }
        void SetUsesWidth(bool value) const { WriteField<bool>("usesWidth", value); }
        bool hasAxis() const { return ReadField<bool>("hasAxis"); }
        void SetHasAxis(bool value) const { WriteField<bool>("hasAxis", value); }
        bool hasGround() const { return ReadField<bool>("hasGround"); }
        void SetHasGround(bool value) const { WriteField<bool>("hasGround", value); }
        bool hasTopView() const { return ReadField<bool>("hasTopView"); }
        void SetHasTopView(bool value) const { WriteField<bool>("hasTopView", value); }
    };
}
