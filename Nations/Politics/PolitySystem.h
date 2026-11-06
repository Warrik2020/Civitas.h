#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PolitySystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PolitySystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PolitySystem") {}
    public:
        void RecomputeModifiers(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; CallStatic("RecomputeModifiers", __callArgs, 2); }
        void Tick(void* it, void* cfg, int tick, int span = 1) const { void* __callArgs[] = { it, cfg, &tick, &span }; CallStatic("Tick", __callArgs, 4); }
        bool AllianceBlocked(void* a, void* b) const { void* __callArgs[] = { a, b }; return CallStaticValue<bool>("AllianceBlocked", __callArgs, 2); }
        float ChangeCost(void* it, void* icfg, void* cfg) const { void* __callArgs[] = { it, icfg, cfg }; return CallStaticValue<float>("ChangeCost", __callArgs, 3); }
        bool OnCooldown(void* it, int tick) const { void* __callArgs[] = { it, &tick }; return CallStaticValue<bool>("OnCooldown", __callArgs, 2); }
        void* BlockReason(void* it, void* icfg, void* cfg, int ideology, int tick, int year, void* calendar = nullptr) const { void* __callArgs[] = { it, icfg, cfg, &ideology, &tick, &year, calendar }; return CallStatic("BlockReason", __callArgs, 7); }
        bool TryChange(void* it, void* icfg, void* cfg, int ideology, int tick, int year, const char*& error) const { void* __callArgs[] = { it, icfg, cfg, &ideology, &tick, &year, &error }; return CallStaticValue<bool>("TryChange", __callArgs, 7); }
        void RandomiseAtFounding(void* it, void* cfg, int year) const { void* __callArgs[] = { it, cfg, &year }; CallStatic("RandomiseAtFounding", __callArgs, 3); }
        void SeedSpendingToFloor(void* it) const { void* __callArgs[] = { it }; CallStatic("SeedSpendingToFloor", __callArgs, 1); }
        void SeedBreakaway(void* rebel, void* parent, void* cfg, int year) const { void* __callArgs[] = { rebel, parent, cfg, &year }; CallStatic("SeedBreakaway", __callArgs, 4); }
    };
}
