#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class VassalSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VassalSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "VassalSystem") {}
    public:
        bool AreBonded(void* a, int idA, void* b, int idB) const { void* __callArgs[] = { a, &idA, b, &idB }; return CallStaticValue<bool>("AreBonded", __callArgs, 4); }
        bool MayBond(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("MayBond", __callArgs, 1); }
        bool AnsweringToOverlord(void* it, int otherId) const { void* __callArgs[] = { it, &otherId }; return CallStaticValue<bool>("AnsweringToOverlord", __callArgs, 2); }
        bool MayBond(void* it, int otherId) const { void* __callArgs[] = { it, &otherId }; return CallStaticValue<bool>("MayBond", __callArgs, 2); }
        bool MayGoToWarFor(void* it, int askedById) const { void* __callArgs[] = { it, &askedById }; return CallStaticValue<bool>("MayGoToWarFor", __callArgs, 2); }
        void TickTribute(void* nations, void* internals, void* cfg) const { void* __callArgs[] = { nations, internals, cfg }; CallStatic("TickTribute", __callArgs, 3); }
        void ClearTributePact(void* it) const { void* __callArgs[] = { it }; CallStatic("ClearTributePact", __callArgs, 1); }
        void ExpireTributePacts(void* nations, void* internals, int tick) const { void* __callArgs[] = { nations, internals, &tick }; CallStatic("ExpireTributePacts", __callArgs, 3); }
        void* TintFor(void* overlordColor, int vassalId, void* cfg) const { void* __callArgs[] = { overlordColor, &vassalId, cfg }; return CallStatic("TintFor", __callArgs, 3); }
        void* SuggestedVassalColor(void* overlordColor, void* cfg) const { void* __callArgs[] = { overlordColor, cfg }; return CallStatic("SuggestedVassalColor", __callArgs, 2); }
        void ApplyTint(void* vassalIt, void* nations, void* cfg) const { void* __callArgs[] = { vassalIt, nations, cfg }; CallStatic("ApplyTint", __callArgs, 3); }
        void RestoreColor(void* it, void* nations) const { void* __callArgs[] = { it, nations }; CallStatic("RestoreColor", __callArgs, 2); }
        void SeverIfBonded(void* a, int idA, void* b, int idB, void* nations) const { void* __callArgs[] = { a, &idA, b, &idB, nations }; CallStatic("SeverIfBonded", __callArgs, 5); }
        float IndependenceLetGoChance(float opinion, void* cfg) const { void* __callArgs[] = { &opinion, cfg }; return CallStaticValue<float>("IndependenceLetGoChance", __callArgs, 2); }
        void Release(void* it, void* nations) const { void* __callArgs[] = { it, nations }; CallStatic("Release", __callArgs, 2); }
    };
}
