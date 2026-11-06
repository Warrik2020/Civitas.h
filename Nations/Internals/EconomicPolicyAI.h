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
        void Evaluate(void* n, void* it, void* ctx) const { void* __callArgs[] = { n, it, &ctx }; CallStatic("Evaluate", __callArgs, 3); }
        void SnapToWar(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; CallStatic("SnapToWar", __callArgs, 2); }
        void EvaluatePlayer(void* it, void* ctx) const { void* __callArgs[] = { it, &ctx }; CallStatic("EvaluatePlayer", __callArgs, 2); }
        bool UsesDelegatedConstruction(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("UsesDelegatedConstruction", __callArgs, 1); }
        bool UsesDelegatedRoads(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("UsesDelegatedRoads", __callArgs, 1); }
        int PlayerHeld() const { return ReadStaticField<int>("PlayerHeld"); }
        int PileLevers() const { return ReadStaticField<int>("PileLevers"); }
    };
}
