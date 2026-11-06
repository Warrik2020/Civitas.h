#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleWorksBake : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleWorksBake(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleWorksBake") {}
    public:
        void Bake(void* setup, void* arena, void* works) const { void* __callArgs[] = { setup, arena, works }; CallStatic("Bake", __callArgs, 3); }
        void Bake(void* setup, void* frame, void* sizeTiles, void* works) const { void* __callArgs[] = { setup, frame, sizeTiles, works }; CallStatic("Bake", __callArgs, 4); }
        int BakeSynthetic(void* setup, void* anchor, void* facing, float halfLength, uint32_t seed, float progress, int kind, int holderStrategicId) const { void* __callArgs[] = { setup, anchor, facing, &halfLength, &seed, &progress, &kind, &holderStrategicId }; return CallStaticValue<int>("BakeSynthetic", __callArgs, 8); }
        int ClaimFor(void* setup, int strategicId) const { void* __callArgs[] = { setup, &strategicId }; return CallStaticValue<int>("ClaimFor", __callArgs, 2); }
        uint8_t CraterKind() const { return ReadStaticField<uint8_t>("CraterKind"); }
    };
}
