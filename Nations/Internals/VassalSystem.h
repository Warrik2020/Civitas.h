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
        bool AreBonded(void* a, int idA, void* b, int idB) const { void* args[] = { a, &idA, b, &idB }; return CallStaticValue<bool>("AreBonded", args, 4); }
        bool MayBond(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("MayBond", args, 1); }
        bool AnsweringToOverlord(void* it, int otherId) const { void* args[] = { it, &otherId }; return CallStaticValue<bool>("AnsweringToOverlord", args, 2); }
        bool MayBond(void* it, int otherId) const { void* args[] = { it, &otherId }; return CallStaticValue<bool>("MayBond", args, 2); }
        bool MayGoToWarFor(void* it, int askedById) const { void* args[] = { it, &askedById }; return CallStaticValue<bool>("MayGoToWarFor", args, 2); }
        void TickTribute(void* nations, void* internals, void* cfg) const { void* args[] = { nations, internals, cfg }; CallStatic("TickTribute", args, 3); }
        void ClearTributePact(void* it) const { void* args[] = { it }; CallStatic("ClearTributePact", args, 1); }
        void ExpireTributePacts(void* nations, void* internals, int tick) const { void* args[] = { nations, internals, &tick }; CallStatic("ExpireTributePacts", args, 3); }
        void* TintFor(void* overlordColor, int vassalId, void* cfg) const { void* args[] = { overlordColor, &vassalId, cfg }; return CallStatic("TintFor", args, 3); }
        void* SuggestedVassalColor(void* overlordColor, void* cfg) const { void* args[] = { overlordColor, cfg }; return CallStatic("SuggestedVassalColor", args, 2); }
        void ApplyTint(void* vassalIt, void* nations, void* cfg) const { void* args[] = { vassalIt, nations, cfg }; CallStatic("ApplyTint", args, 3); }
        void RestoreColor(void* it, void* nations) const { void* args[] = { it, nations }; CallStatic("RestoreColor", args, 2); }
        void SeverIfBonded(void* a, int idA, void* b, int idB, void* nations) const { void* args[] = { a, &idA, b, &idB, nations }; CallStatic("SeverIfBonded", args, 5); }
        float IndependenceLetGoChance(float opinion, void* cfg) const { void* args[] = { &opinion, cfg }; return CallStaticValue<float>("IndependenceLetGoChance", args, 2); }
        void Release(void* it, void* nations) const { void* args[] = { it, nations }; CallStatic("Release", args, 2); }
    };
}
