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
        bool AllowsPart(int k) const { void* __callArgs[] = { &k }; return CallValue<bool>("AllowsPart", __callArgs, 1); }
        bool AllowsMaterial(int m) const { void* __callArgs[] = { &m }; return CallValue<bool>("AllowsMaterial", __callArgs, 1); }
        void* LaddersFor(int kind) const { void* __callArgs[] = { &kind }; return Call("LaddersFor", __callArgs, 1); }
        void* LadderNamesFor(int kind) const { void* __callArgs[] = { &kind }; return Call("LadderNamesFor", __callArgs, 1); }
        int LadderCountFor(int kind) const { void* __callArgs[] = { &kind }; return CallValue<int>("LadderCountFor", __callArgs, 1); }
        void* PartsFor(int kind) const { void* __callArgs[] = { &kind }; return Call("PartsFor", __callArgs, 1); }
        void* MaterialsFor(int kind) const { void* __callArgs[] = { &kind }; return Call("MaterialsFor", __callArgs, 1); }
        bool AllowsPart(int kind, int k) const { void* __callArgs[] = { &kind, &k }; return CallValue<bool>("AllowsPart", __callArgs, 2); }
        bool AllowsMaterial(int kind, int m) const { void* __callArgs[] = { &kind, &m }; return CallValue<bool>("AllowsMaterial", __callArgs, 2); }
        bool HasTopViewFor(int kind) const { void* __callArgs[] = { &kind }; return CallValue<bool>("HasTopViewFor", __callArgs, 1); }
        void* KindName(int kind) const { void* __callArgs[] = { &kind }; return Call("KindName", __callArgs, 1); }
        void* Kind(int kind) const { void* __callArgs[] = { &kind }; return Call("Kind", __callArgs, 1); }
        int domain() const { return ReadField<int>("domain"); }
        void domain(int value) const { WriteField<int>("domain", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* article() const { return ReadField<void*>("article"); }
        void article(void* value) const { WriteField<void*>("article", value); }
        void* ladderNames() const { return ReadField<void*>("ladderNames"); }
        void ladderNames(void* value) const { WriteField<void*>("ladderNames", value); }
        void* ladders() const { return ReadField<void*>("ladders"); }
        void ladders(void* value) const { WriteField<void*>("ladders", value); }
        void* kinds() const { return ReadField<void*>("kinds"); }
        void kinds(void* value) const { WriteField<void*>("kinds", value); }
        void* parts() const { return ReadField<void*>("parts"); }
        void parts(void* value) const { WriteField<void*>("parts", value); }
        void* materials() const { return ReadField<void*>("materials"); }
        void materials(void* value) const { WriteField<void*>("materials", value); }
        void* kindLadders() const { return ReadField<void*>("kindLadders"); }
        void kindLadders(void* value) const { WriteField<void*>("kindLadders", value); }
        void* kindLadderNames() const { return ReadField<void*>("kindLadderNames"); }
        void kindLadderNames(void* value) const { WriteField<void*>("kindLadderNames", value); }
        void* kindParts() const { return ReadField<void*>("kindParts"); }
        void kindParts(void* value) const { WriteField<void*>("kindParts", value); }
        void* kindMaterials() const { return ReadField<void*>("kindMaterials"); }
        void kindMaterials(void* value) const { WriteField<void*>("kindMaterials", value); }
        void* kindNoTopView() const { return ReadField<void*>("kindNoTopView"); }
        void kindNoTopView(void* value) const { WriteField<void*>("kindNoTopView", value); }
        int unlockTech() const { return ReadField<int>("unlockTech"); }
        void unlockTech(int value) const { WriteField<int>("unlockTech", value); }
        bool playable() const { return ReadField<bool>("playable"); }
        void playable(bool value) const { WriteField<bool>("playable", value); }
        bool usesCalibre() const { return ReadField<bool>("usesCalibre"); }
        void usesCalibre(bool value) const { WriteField<bool>("usesCalibre", value); }
        bool usesWidth() const { return ReadField<bool>("usesWidth"); }
        void usesWidth(bool value) const { WriteField<bool>("usesWidth", value); }
        bool hasAxis() const { return ReadField<bool>("hasAxis"); }
        void hasAxis(bool value) const { WriteField<bool>("hasAxis", value); }
        bool hasGround() const { return ReadField<bool>("hasGround"); }
        void hasGround(bool value) const { WriteField<bool>("hasGround", value); }
        bool hasTopView() const { return ReadField<bool>("hasTopView"); }
        void hasTopView(bool value) const { WriteField<bool>("hasTopView", value); }
    };
}
