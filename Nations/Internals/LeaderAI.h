#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderAI") {}
    public:
        float LosingPeaceMul(int self, int other, void* ctx, bool& intact) const { void* __callArgs[] = { &self, &other, &ctx, &intact }; return CallStaticValue<float>("LosingPeaceMul", __callArgs, 4); }
        void Evaluate(void* n, void* it, void* myRelations, void* ctx) const { void* __callArgs[] = { n, it, myRelations, &ctx }; CallStatic("Evaluate", __callArgs, 4); }
        void* RollLeader(void* cfg, int government, int tick, int tiles, float ticksPerYear, int foundingCulture = -1) const { void* __callArgs[] = { cfg, &government, &tick, &tiles, &ticksPerYear, &foundingCulture }; return CallStatic("RollLeader", __callArgs, 6); }
        void EvaluateDelegatedSettlement(void* n, void* it, void* ctx) const { void* __callArgs[] = { n, it, &ctx }; CallStatic("EvaluateDelegatedSettlement", __callArgs, 3); }
        bool BlockPeaceTreaties() const { return ReadStaticField<bool>("BlockPeaceTreaties"); }
        void BlockPeaceTreaties(bool value) const { WriteStaticField<bool>("BlockPeaceTreaties", value); }
        float HoldArmyRatio() const { return ReadStaticField<float>("HoldArmyRatio"); }
    };
}
