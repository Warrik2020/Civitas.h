#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionCombat : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionCombat(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionCombat") {}
    public:
        float FortMulUnder(void* d) const { void* args[] = { d }; return CallStaticValue<float>("FortMulUnder", args, 1); }
        float EffectivePower(void* d, void* cfg, int tick, bool defending) const { void* args[] = { d, cfg, &tick, &defending }; return CallStaticValue<float>("EffectivePower", args, 4); }
        float EffectivePower(void* d, void* cfg, int tick, bool defending, bool includeLogistics) const { void* args[] = { d, cfg, &tick, &defending, &includeLogistics }; return CallStaticValue<float>("EffectivePower", args, 5); }
        float SystemicMul(void* d, int tick) const { void* args[] = { d, &tick }; return CallStaticValue<float>("SystemicMul", args, 2); }
        float PowerFactors(void* d, void* cfg, int tick, bool defending, bool includeKit = true, bool includeLogistics = true, bool includeTerrain = true) const { void* args[] = { d, cfg, &tick, &defending, &includeKit, &includeLogistics, &includeTerrain }; return CallStaticValue<float>("PowerFactors", args, 7); }
        float BoardingPowerMul(void* d) const { void* args[] = { d }; return CallStaticValue<float>("BoardingPowerMul", args, 1); }
        float IncomingFactors(void* d, bool includeKit = true) const { void* args[] = { d, &includeKit }; return CallStaticValue<float>("IncomingFactors", args, 2); }
        void Tick(void* d, void* mil, void* n, void* grid, void* buckets, void* occupancy, void* cfg, int tick) const { void* args[] = { d, mil, n, grid, buckets, occupancy, cfg, &tick }; CallStatic("Tick", args, 8); }
        bool FightsFor(void* d, int side, int other, void* milById) const { void* args[] = { d, &side, &other, milById }; return CallStaticValue<bool>("FightsFor", args, 4); }
        float ContestFactor(void* attacker, void* holder, int tileIndex, void* grid, void* buckets, void* cfg, int tick, void* milById = nullptr) const { void* args[] = { attacker, holder, &tileIndex, grid, buckets, cfg, &tick, milById }; return CallStaticValue<float>("ContestFactor", args, 8); }
        float ContestFactorBattles(void* attacker, void* holder, int tileIndex, void* grid, void* buckets, void* cfg, int tick, void* milById = nullptr, float fullFactor = 0f) const { void* args[] = { attacker, holder, &tileIndex, grid, buckets, cfg, &tick, milById, &fullFactor }; return CallStaticValue<float>("ContestFactorBattles", args, 9); }
        void PowerBalanceAt(void* p, void* mil, int foeNationId, void* buckets, void* cfg, int tick, float& ours, float& theirs) const { void* args[] = { p, mil, &foeNationId, buckets, cfg, &tick, &ours, &theirs }; CallStatic("PowerBalanceAt", args, 8); }
    };
}
