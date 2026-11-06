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
        float FortMulUnder(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("FortMulUnder", __callArgs, 1); }
        float EffectivePower(void* d, void* cfg, int tick, bool defending) const { void* __callArgs[] = { d, cfg, &tick, &defending }; return CallStaticValue<float>("EffectivePower", __callArgs, 4); }
        float EffectivePower(void* d, void* cfg, int tick, bool defending, bool includeLogistics) const { void* __callArgs[] = { d, cfg, &tick, &defending, &includeLogistics }; return CallStaticValue<float>("EffectivePower", __callArgs, 5); }
        float SystemicMul(void* d, int tick) const { void* __callArgs[] = { d, &tick }; return CallStaticValue<float>("SystemicMul", __callArgs, 2); }
        float PowerFactors(void* d, void* cfg, int tick, bool defending, bool includeKit = true, bool includeLogistics = true, bool includeTerrain = true) const { void* __callArgs[] = { d, cfg, &tick, &defending, &includeKit, &includeLogistics, &includeTerrain }; return CallStaticValue<float>("PowerFactors", __callArgs, 7); }
        float BoardingPowerMul(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("BoardingPowerMul", __callArgs, 1); }
        float IncomingFactors(void* d, bool includeKit = true) const { void* __callArgs[] = { d, &includeKit }; return CallStaticValue<float>("IncomingFactors", __callArgs, 2); }
        void Tick(void* d, void* mil, void* n, void* grid, void* buckets, void* occupancy, void* cfg, int tick) const { void* __callArgs[] = { d, mil, n, grid, buckets, occupancy, cfg, &tick }; CallStatic("Tick", __callArgs, 8); }
        bool FightsFor(void* d, int side, int other, void* milById) const { void* __callArgs[] = { d, &side, &other, milById }; return CallStaticValue<bool>("FightsFor", __callArgs, 4); }
        float ContestFactor(void* attacker, void* holder, int tileIndex, void* grid, void* buckets, void* cfg, int tick, void* milById = nullptr) const { void* __callArgs[] = { attacker, holder, &tileIndex, grid, buckets, cfg, &tick, milById }; return CallStaticValue<float>("ContestFactor", __callArgs, 8); }
        float ContestFactorBattles(void* attacker, void* holder, int tileIndex, void* grid, void* buckets, void* cfg, int tick, void* milById = nullptr, float fullFactor = 0.0f) const { void* __callArgs[] = { attacker, holder, &tileIndex, grid, buckets, cfg, &tick, milById, &fullFactor }; return CallStaticValue<float>("ContestFactorBattles", __callArgs, 9); }
        void PowerBalanceAt(void* p, void* mil, int foeNationId, void* buckets, void* cfg, int tick, float& ours, float& theirs) const { void* __callArgs[] = { p, mil, &foeNationId, buckets, cfg, &tick, &ours, &theirs }; CallStatic("PowerBalanceAt", __callArgs, 8); }
    };
}
