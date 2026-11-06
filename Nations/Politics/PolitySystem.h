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
        void RecomputeModifiers(void* it, void* cfg) const { void* args[] = { it, cfg }; CallStatic("RecomputeModifiers", args, 2); }
        void Tick(void* it, void* cfg, int tick, int span = 1) const { void* args[] = { it, cfg, &tick, &span }; CallStatic("Tick", args, 4); }
        bool AllianceBlocked(void* a, void* b) const { void* args[] = { a, b }; return CallStaticValue<bool>("AllianceBlocked", args, 2); }
        float ChangeCost(void* it, void* icfg, void* cfg) const { void* args[] = { it, icfg, cfg }; return CallStaticValue<float>("ChangeCost", args, 3); }
        bool OnCooldown(void* it, int tick) const { void* args[] = { it, &tick }; return CallStaticValue<bool>("OnCooldown", args, 2); }
        void* BlockReason(void* it, void* icfg, void* cfg, int ideology, int tick, int year, void* calendar = nullptr) const { void* args[] = { it, icfg, cfg, &ideology, &tick, &year, calendar }; return CallStatic("BlockReason", args, 7); }
        bool TryChange(void* it, void* icfg, void* cfg, int ideology, int tick, int year, const char*& error) const { void* args[] = { it, icfg, cfg, &ideology, &tick, &year, &error }; return CallStaticValue<bool>("TryChange", args, 7); }
        void RandomiseAtFounding(void* it, void* cfg, int year) const { void* args[] = { it, cfg, &year }; CallStatic("RandomiseAtFounding", args, 3); }
        void SeedSpendingToFloor(void* it) const { void* args[] = { it }; CallStatic("SeedSpendingToFloor", args, 1); }
        void SeedBreakaway(void* rebel, void* parent, void* cfg, int year) const { void* args[] = { rebel, parent, cfg, &year }; CallStatic("SeedBreakaway", args, 4); }
    };
}
