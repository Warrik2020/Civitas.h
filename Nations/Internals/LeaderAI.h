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
        float LosingPeaceMul(int self, int other, void* ctx, bool& intact) const { void* args[] = { &self, &other, &ctx, &intact }; return CallStaticValue<float>("LosingPeaceMul", args, 4); }
        void Evaluate(void* n, void* it, void* myRelations, void* ctx) const { void* args[] = { n, it, myRelations, &ctx }; CallStatic("Evaluate", args, 4); }
        void* RollLeader(void* cfg, int government, int tick, int tiles, float ticksPerYear, int foundingCulture = -1) const { void* args[] = { cfg, &government, &tick, &tiles, &ticksPerYear, &foundingCulture }; return CallStatic("RollLeader", args, 6); }
        void EvaluateDelegatedSettlement(void* n, void* it, void* ctx) const { void* args[] = { n, it, &ctx }; CallStatic("EvaluateDelegatedSettlement", args, 3); }
        bool BlockPeaceTreaties() const { return ReadStaticField<bool>("BlockPeaceTreaties"); }
        void SetBlockPeaceTreaties(bool value) const { WriteStaticField<bool>("BlockPeaceTreaties", value); }
        float HoldArmyRatio() const { return ReadStaticField<float>("HoldArmyRatio"); }
        bool pass() const { return ReadField<bool>("pass"); }
        void SetPass(bool value) const { WriteField<bool>("pass", value); }
        int delayTicks() const { return ReadField<int>("delayTicks"); }
        void SetDelayTicks(int value) const { WriteField<int>("delayTicks", value); }
        float chancePerMonth() const { return ReadField<float>("chancePerMonth"); }
        void SetChancePerMonth(float value) const { WriteField<float>("chancePerMonth", value); }
        float appetite() const { return ReadField<float>("appetite"); }
        void SetAppetite(float value) const { WriteField<float>("appetite", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        void* nations() const { return ReadField<void*>("nations"); }
        void SetNations(void* value) const { WriteField<void*>("nations", value); }
        void* cities() const { return ReadField<void*>("cities"); }
        void SetCities(void* value) const { WriteField<void*>("cities", value); }
        void* industry() const { return ReadField<void*>("industry"); }
        void SetIndustry(void* value) const { WriteField<void*>("industry", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        void* cfg() const { return ReadField<void*>("cfg"); }
        void SetCfg(void* value) const { WriteField<void*>("cfg", value); }
        int thinkMul() const { return ReadField<int>("thinkMul"); }
        void SetThinkMul(int value) const { WriteField<int>("thinkMul", value); }
        void* rel() const { return ReadField<void*>("rel"); }
        void SetRel(void* value) const { WriteField<void*>("rel", value); }
        int other() const { return ReadField<int>("other"); }
        void SetOther(int value) const { WriteField<int>("other", value); }
        float score() const { return ReadField<float>("score"); }
        void SetScore(float value) const { WriteField<float>("score", value); }
        void* cause() const { return ReadField<void*>("cause"); }
        void SetCause(void* value) const { WriteField<void*>("cause", value); }
    };
}
