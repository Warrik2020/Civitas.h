#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EconomicPolicyAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EconomicPolicyAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EconomicPolicyAI") {}
    public:
        void Evaluate(void* n, void* it, void* ctx) const { void* args[] = { n, it, &ctx }; CallStatic("Evaluate", args, 3); }
        void SnapToWar(void* it, void* cfg) const { void* args[] = { it, cfg }; CallStatic("SnapToWar", args, 2); }
        void EvaluatePlayer(void* it, void* ctx) const { void* args[] = { it, &ctx }; CallStatic("EvaluatePlayer", args, 2); }
        bool UsesDelegatedConstruction(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("UsesDelegatedConstruction", args, 1); }
        bool UsesDelegatedRoads(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("UsesDelegatedRoads", args, 1); }
        int PlayerHeld() const { return ReadStaticField<int>("PlayerHeld"); }
        int PileLevers() const { return ReadStaticField<int>("PileLevers"); }
    };
}
